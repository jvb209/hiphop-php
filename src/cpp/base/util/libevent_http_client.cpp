/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#include <cpp/base/util/libevent_http_client.h>
#include <cpp/base/server/server_stats.h>
#include <cpp/base/runtime_option.h>
#include <util/compression.h>
#include <util/logger.h>
#include <util/timer.h>

using namespace std;
using namespace boost;

// libevent is not exposing this data structure, but we need it.
struct evkeyvalq_ {
  struct evkeyval *tqh_first;
};

///////////////////////////////////////////////////////////////////////////////
// static handlers delegating work to instance ones

static void on_request_completed(struct evhttp_request *req, void *obj) {
  ASSERT(obj);
  ((HPHP::LibEventHttpClient*)obj)->onRequestCompleted();
}

static void on_connection_closed(struct evhttp_connection *conn, void *obj) {
  ASSERT(obj);
  ((HPHP::LibEventHttpClient*)obj)->onConnectionClosed();
}

static void timer_callback(int fd, short events, void *context) {
  event_base_loopbreak((struct event_base *)context);
}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
// connection pooling

static std::string get_hash(const std::string &address, int port) {
  string hash = address;
  if (port != 80) {
    hash += ':';
    hash += lexical_cast<string>(port);
  }
  return hash;
}

ReadWriteMutex LibEventHttpClient::ConnectionPoolMutex;
std::map<std::string, int> LibEventHttpClient::ConnectionPoolConfig;
std::map<std::string, LibEventHttpClientPtrVec>
  LibEventHttpClient::ConnectionPool;

void LibEventHttpClient::SetCache(const std::string &address, int port,
                                  int maxConnection) {
  string hash = get_hash(address, port);

  WriteLock lock(ConnectionPoolMutex);
  if (maxConnection > 0) {
    ConnectionPoolConfig[hash] = maxConnection;
  } else {
    ConnectionPoolConfig.erase(hash);
  }
}

LibEventHttpClientPtr LibEventHttpClient::Get(const std::string &address,
                                              int port) {
  string hash = get_hash(address, port);

  int maxConnection = 0;
  {
    ReadLock lock(ConnectionPoolMutex);
    map<string, int>::const_iterator iter = ConnectionPoolConfig.find(hash);
    if (iter == ConnectionPoolConfig.end()) {
      // not configured to cache
      ServerStats::Log("evhttp.skip", 1);
      ServerStats::Log("evhttp.skip." + hash, 1);
      return LibEventHttpClientPtr(new LibEventHttpClient(address, port));
    }
    maxConnection = iter->second;
  }

  WriteLock lock(ConnectionPoolMutex);
  LibEventHttpClientPtrVec &pool = ConnectionPool[hash];
  for (unsigned int i = 0; i < pool.size(); i++) {
    LibEventHttpClientPtr client = pool[i];
    if (!client->m_busy) {
      client->m_busy = true;
      ServerStats::Log("evhttp.hit", 1);
      ServerStats::Log("evhttp.hit." + hash, 1);
      return client;
    }
  }

  LibEventHttpClientPtr ret(new LibEventHttpClient(address, port));
  if ((int)pool.size() < maxConnection) {
    if (pool.empty()) {
      pool.reserve(maxConnection);
    }
    pool.push_back(ret);
  }
  ServerStats::Log("evhttp.miss", 1);
  ServerStats::Log("evhttp.miss." + hash, 1);
  return ret;
}

///////////////////////////////////////////////////////////////////////////////
// constructor and destructor

LibEventHttpClient::LibEventHttpClient(const std::string &address, int port)
  : m_busy(true), m_address(address), m_port(port), m_conn(NULL),
    m_request(NULL), m_thread(NULL), m_code(0), m_response(NULL), m_len(0) {
  m_eventBase = event_base_new();
}

LibEventHttpClient::~LibEventHttpClient() {
  clear();

  // reset all per-connection data structures
  if (m_conn) {
    evhttp_connection_free(m_conn);
  }
  if (m_eventBase) {
    event_base_free(m_eventBase);
  }
}

void LibEventHttpClient::clear() {
  // reset all per-request data structures
  if (m_thread) {
    m_thread->waitForEnd();
    delete m_thread;
    m_thread = NULL;
  }
  if (m_request) {
    evhttp_request_free(m_request);
    m_request = NULL;
  }
  m_url.clear();
  m_code = 0;
  m_codeLine.clear();
  m_len = 0;
  if (m_response) {
    free(m_response);
    m_response = NULL;
  }
  m_responseHeaders.clear();
}

void LibEventHttpClient::release() {
  clear();
  m_busy = false;
}

///////////////////////////////////////////////////////////////////////////////

bool LibEventHttpClient::send(const std::string &url,
                              const std::vector<std::string> &headers,
                              int timeoutSeconds, bool async,
                              const void *data /* = NULL */,
                              int size /* = 0 */) {
  clear();
  m_url = url;

  if (m_conn == NULL) {
    m_conn = evhttp_connection_new(m_address.c_str(), m_port);
    evhttp_connection_set_closecb(m_conn, on_connection_closed, this);
    evhttp_connection_set_base(m_conn, m_eventBase);
  }
  m_request = evhttp_request_new(on_request_completed, this);

  // url
  evhttp_cmd_type cmd = data ? EVHTTP_REQ_POST : EVHTTP_REQ_GET;
  int ret = evhttp_make_request(m_conn, m_request, cmd, url.c_str());
  if (ret != 0) {
    Logger::Error("evhttp_make_request failed");
    return false;
  }

  // REVIEW: libevent never sends a Host header (nor does it properly send HTTP
  // 400 for HTTP/1.1 requests without such a header), in blatent violation of
  // RFC2616; this should perhaps be fixed in the library proper.
  if (m_port == 80) {
    evhttp_add_header(m_request->output_headers, "Host", m_address.c_str());
  } else {
    std::ostringstream ss;
    ss << m_address << ":" << m_port;
    evhttp_add_header(m_request->output_headers, "Host", ss.str().c_str());
  }

  // request headers
  bool keepalive = true;
  for (unsigned int i = 0; i < headers.size(); i++) {
    const std::string &header = headers[i];
    size_t pos = header.find(':');
    if (pos != string::npos && header[pos + 1] == ' ') {
      string name = header.substr(0, pos);
      if (strcasecmp(name.c_str(), "Connection") == 0) {
        keepalive = false;
      }
      int ret = evhttp_add_header(m_request->output_headers,
                                  name.c_str(), header.c_str() + pos + 2);
      if (ret >= 0) {
        continue;
      }
    }
    Logger::Error("invalid request header: [%s]", header.c_str());
  }
  if (keepalive) {
    evhttp_add_header(m_request->output_headers, "Connection", "keep-alive");
  }

  // post data
  if (data && size) {
    evbuffer_add(m_request->output_buffer, data, size);
  }

  if (timeoutSeconds > 0) {
    struct timeval timeout;
    timeout.tv_sec = timeoutSeconds;
    timeout.tv_usec = 0;

    event_set(&m_eventTimeout, -1, 0, timer_callback, m_eventBase);
    event_base_set(m_eventBase, &m_eventTimeout);
    event_add(&m_eventTimeout, &timeout);
  }

  if (async) {
    m_thread = new AsyncFunc<LibEventHttpClient>
      (this, &LibEventHttpClient::sendImpl);
    m_thread->start();
  } else {
    sendImpl();
  }
  return true;
}

void LibEventHttpClient::sendImpl() {
  SlowTimer timer(RuntimeOption::HttpSlowQueryThreshold, "evhttp",
                  m_url.c_str());
  event_base_dispatch(m_eventBase);
  event_del(&m_eventTimeout);
}

void LibEventHttpClient::onRequestCompleted() {
  ASSERT(m_request);
  ASSERT(m_request->input_buffer);

  // response code line
  m_code = m_request->response_code;
  if (m_request->response_code_line) {
    m_codeLine = m_request->response_code_line;
  }

  bool gzip = false;
  // response headers
  for (evkeyval *p = ((evkeyvalq_*)m_request->input_headers)->tqh_first; p;
       p = p->next.tqe_next) {
    if (p->key && p->value) {
      if ((strcasecmp(p->key, "Content-Encoding") == 0) &&
          (strncmp(p->value, "gzip", 4) == 0) &&
          (!p->value[4] || isspace(p->value[4]))) {
        // in the (illegal) case of multiple Content-Encoding headers, any one
        // with the value 'gzip' means we treat it as gzip.
        gzip = true;
      }
      m_responseHeaders.push_back(string(p->key) + ": " + p->value);
    }
  }

  // response body
  m_len = EVBUFFER_LENGTH(m_request->input_buffer);
  if (gzip) {
    m_response =
      gzdecode((const char*)EVBUFFER_DATA(m_request->input_buffer), m_len);
  } else {
    m_response = (char*)malloc(m_len + 1);
    strncpy(m_response, (char*)EVBUFFER_DATA(m_request->input_buffer), m_len);
    m_response[m_len] = '\0';
  }

  // libevent will call evhttp_request_free(m_request) automatically
  m_request = NULL;

  event_base_loopbreak(m_eventBase);
}

void LibEventHttpClient::onConnectionClosed() {
  m_conn = NULL;
  string hash = get_hash(m_address, m_port);
  ServerStats::Log("evhttp.close", 1);
  ServerStats::Log("evhttp.close." + hash, 1);
}

char *LibEventHttpClient::recv(int &len) {
  if (m_thread) {
    m_thread->waitForEnd();
    delete m_thread;
    m_thread = NULL;
  }

  char *ret = m_response;
  len = m_len;
  m_response = NULL;
  m_len = 0;
  return ret;
}

///////////////////////////////////////////////////////////////////////////////
}
