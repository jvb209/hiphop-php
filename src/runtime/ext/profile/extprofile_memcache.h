/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
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

#ifndef __EXTPROFILE_MEMCACHE_H__
#define __EXTPROFILE_MEMCACHE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_memcache.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Object x_memcache_connect(CStrRef host, int port = 0, int timeout = 0,
                                 int timeoutms = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_connect);
  return f_memcache_connect(host, port, timeout, timeoutms);
}

inline Object x_memcache_pconnect(CStrRef host, int port = 0, int timeout = 0,
                                  int timeoutms = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_pconnect);
  return f_memcache_pconnect(host, port, timeout, timeoutms);
}

inline bool x_memcache_add(CObjRef memcache, CStrRef key, CVarRef var,
                           int flag = 0, int expire = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_add);
  return f_memcache_add(memcache, key, var, flag, expire);
}

inline bool x_memcache_set(CObjRef memcache, CStrRef key, CVarRef var,
                           int flag = 0, int expire = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_set);
  return f_memcache_set(memcache, key, var, flag, expire);
}

inline bool x_memcache_replace(CObjRef memcache, CStrRef key, CVarRef var,
                               int flag = 0, int expire = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_replace);
  return f_memcache_replace(memcache, key, var, flag, expire);
}

inline Variant x_memcache_get(CObjRef memcache, CVarRef key,
                              Variant flags = null) {
  FUNCTION_INJECTION_BUILTIN(memcache_get);
  return f_memcache_get(memcache, key, ref(flags));
}

inline bool x_memcache_delete(CObjRef memcache, CStrRef key, int expire = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_delete);
  return f_memcache_delete(memcache, key, expire);
}

inline int64 x_memcache_increment(CObjRef memcache, CStrRef key,
                                  int offset = 1) {
  FUNCTION_INJECTION_BUILTIN(memcache_increment);
  return f_memcache_increment(memcache, key, offset);
}

inline int64 x_memcache_decrement(CObjRef memcache, CStrRef key,
                                  int offset = 1) {
  FUNCTION_INJECTION_BUILTIN(memcache_decrement);
  return f_memcache_decrement(memcache, key, offset);
}

inline bool x_memcache_close(CObjRef memcache) {
  FUNCTION_INJECTION_BUILTIN(memcache_close);
  return f_memcache_close(memcache);
}

inline bool x_memcache_debug(bool onoff) {
  FUNCTION_INJECTION_BUILTIN(memcache_debug);
  return f_memcache_debug(onoff);
}

inline Variant x_memcache_get_version(CObjRef memcache) {
  FUNCTION_INJECTION_BUILTIN(memcache_get_version);
  return f_memcache_get_version(memcache);
}

inline bool x_memcache_flush(CObjRef memcache, int timestamp = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_flush);
  return f_memcache_flush(memcache, timestamp);
}

inline bool x_memcache_setoptimeout(CObjRef memcache, int timeoutms) {
  FUNCTION_INJECTION_BUILTIN(memcache_setoptimeout);
  return f_memcache_setoptimeout(memcache, timeoutms);
}

inline int x_memcache_get_server_status(CObjRef memcache, CStrRef host,
                                        int port = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_get_server_status);
  return f_memcache_get_server_status(memcache, host, port);
}

inline bool x_memcache_set_compress_threshold(CObjRef memcache, int threshold,
                                              double min_savings = 0.2) {
  FUNCTION_INJECTION_BUILTIN(memcache_set_compress_threshold);
  return f_memcache_set_compress_threshold(memcache, threshold, min_savings);
}

inline Array x_memcache_get_stats(CObjRef memcache,
                                  CStrRef type = null_string, int slabid = 0,
                                  int limit = 100) {
  FUNCTION_INJECTION_BUILTIN(memcache_get_stats);
  return f_memcache_get_stats(memcache, type, slabid, limit);
}

inline Array x_memcache_get_extended_stats(CObjRef memcache,
                                           CStrRef type = null_string,
                                           int slabid = 0, int limit = 100) {
  FUNCTION_INJECTION_BUILTIN(memcache_get_extended_stats);
  return f_memcache_get_extended_stats(memcache, type, slabid, limit);
}

inline bool x_memcache_set_server_params(CObjRef memcache, CStrRef host,
                                         int port = 11211, int timeout = 0,
                                         int retry_interval = 0,
                                         bool status = true,
                                         CVarRef failure_callback = null_variant) {
  FUNCTION_INJECTION_BUILTIN(memcache_set_server_params);
  return f_memcache_set_server_params(memcache, host, port, timeout,
                                      retry_interval, status,
                                      failure_callback);
}

inline bool x_memcache_add_server(CObjRef memcache, CStrRef host,
                                  int port = 11211, bool persistent = false,
                                  int weight = 0, int timeout = 0,
                                  int retry_interval = 0, bool status = true,
                                  CVarRef failure_callback = null_variant,
                                  int timeoutms = 0) {
  FUNCTION_INJECTION_BUILTIN(memcache_add_server);
  return f_memcache_add_server(memcache, host, port, persistent, weight,
                               timeout, retry_interval, status,
                               failure_callback, timeoutms);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MEMCACHE_H__
