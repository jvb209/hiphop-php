
#ifndef __EXT_SOAP_H__
#define __EXT_SOAP_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<
#include <lib/system/gen/php/classes/exception.h>
#include <cpp/ext/soap/soap.h>

#include <cpp/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_use_soap_error_handler(bool handler = true);
bool f_is_soap_fault(CVarRef fault);

///////////////////////////////////////////////////////////////////////////////
// class SoapServer

FORWARD_DECLARE_CLASS(soapserver);
class c_soapserver : public ObjectData {
 public:
  BEGIN_CLASS_MAP(soapserver)
  END_CLASS_MAP(soapserver)
  DECLARE_CLASS(soapserver, SoapServer, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapserver();
  public: ~c_soapserver();
  public: void t___construct(CVarRef wsdl, CArrRef options = null_array);
  public: void t_setclass(int _argc, CStrRef name, CArrRef _argv = null_array);
  public: void t_setobject(CObjRef obj);
  public: void t_addfunction(CVarRef func);
  public: Variant t_getfunctions();
  public: void t_handle(CStrRef request = null_string);
  public: void t_setpersistence(int64 mode);
  public: void t_fault(CVarRef code, CStrRef fault, CStrRef actor = null_string, CVarRef detail = null, CStrRef name = null_string);
  public: void t_addsoapheader(CObjRef fault);
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(Variant wsdl, Array options = null_array);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: int                        m_type;
  public: soapFunctions              m_soap_functions;
  public: soapClass                  m_soap_class;
  public: Object                     m_soap_object;
  public: String                     m_actor;
  public: String                     m_uri;
  public: int                        m_version;
  public: sdl                       *m_sdl;
  public: xmlCharEncodingHandlerPtr  m_encoding;
  public: Array                      m_classmap;
  public: encodeMap                 *m_typemap;
  public: int                        m_features;
  public: Array                      m_soap_headers;
  public: int                        m_send_errors;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapClient

FORWARD_DECLARE_CLASS(soapclient);
class c_soapclient : public ObjectData {
 public:
  BEGIN_CLASS_MAP(soapclient)
  END_CLASS_MAP(soapclient)
  DECLARE_CLASS(soapclient, SoapClient, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapclient();
  public: ~c_soapclient();
  public: void t___construct(CVarRef wsdl, CArrRef options = null_array);
  public: Variant t___call(Variant name, Variant args);
  public: Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: Variant t___soapcall(String name, Array args, Array options = null_array, Variant input_headers = null, Variant output_headers = null);
  public: Variant t___getlastrequest();
  public: Variant t___getlastresponse();
  public: Variant t___getlastrequestheaders();
  public: Variant t___getlastresponseheaders();
  public: Variant t___getfunctions();
  public: Variant t___gettypes();
  public: Variant t___dorequest(String buf, String location, String action, int64 version, bool oneway = false);
  public: Variant t___setcookie(String name, String value = null_string);
  public: Variant t___setlocation(String new_location = null_string);
  public: bool t___setsoapheaders(Variant headers = null);
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(Variant wsdl, Array options = null_array);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: int                         m_soap_version;
  public: sdl                        *m_sdl;
  public: xmlCharEncodingHandlerPtr   m_encoding;
  public: encodeMap                  *m_typemap;
  public: Array                       m_classmap;
  public: int                         m_features;
  public: String                      m_uri;
  public: String                      m_location;
  public: int                         m_style;
  public: int                         m_use;
  public: String                      m_login;
  public: String                      m_password;
  public: int                         m_authentication;
  public: bool                        m_digest;
  public: String                      m_proxy_host;
  public: int                         m_proxy_port;
  public: String                      m_proxy_login;
  public: String                      m_proxy_password;
  public: int                         m_connection_timeout;
  public: int                         m_max_redirect;
  public: bool                        m_use11;
  public: String                      m_user_agent;
  public: bool                        m_compression;
  public: Variant                     m_default_headers;
  public: Variant                     m_cookies;
  public: bool                        m_exceptions;
  public: Variant                     m_soap_fault;
  public: bool                        m_trace;
  public: Variant                     m_last_request;
  public: Variant                     m_last_response;
  public: Variant                     m_last_request_headers;
  public: Variant                     m_last_response_headers;

};

///////////////////////////////////////////////////////////////////////////////
// class SoapVar

FORWARD_DECLARE_CLASS(soapvar);
class c_soapvar : public ObjectData {
 public:
  BEGIN_CLASS_MAP(soapvar)
  END_CLASS_MAP(soapvar)
  DECLARE_CLASS(soapvar, SoapVar, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapvar();
  public: ~c_soapvar();
  public: void t___construct(CVarRef data, CVarRef type, CStrRef type_name = null_string, CStrRef type_namespace = null_string, CStrRef node_name = null_string, CStrRef node_namespace = null_string);
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(Variant data, Variant type, String type_name = null_string, String type_namespace = null_string, String node_name = null_string, String node_namespace = null_string);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: Variant m_value;
  public: int64   m_type;
  public: String  m_stype;
  public: String  m_ns;
  public: String  m_name;
  public: String  m_namens;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapFault

FORWARD_DECLARE_CLASS(soapfault);
class c_soapfault: public c_exception {
 public:
  BEGIN_CLASS_MAP(soapfault)
  PARENT_CLASS(exception)
  END_CLASS_MAP(soapfault)
  DECLARE_CLASS(soapfault, SoapFault, exception)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapfault();
  public: ~c_soapfault();
  public: void t___construct(CVarRef code, CStrRef message, CStrRef actor = null_string, CVarRef detail = null, CStrRef name = null_string, CVarRef header = null);
  public: String t___tostring();
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(Variant code, String message, String actor = null_string, Variant detail = null, String name = null_string, Variant header = null);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: String  m_faultstring;
  public: String  m_faultcode;
  public: String  m_faultcodens;
  public: String  m_faultactor;
  public: Variant m_detail;
  public: String  m_name;
  public: Variant m_headerfault;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapParam

FORWARD_DECLARE_CLASS(soapparam);
class c_soapparam : public ObjectData {
 public:
  BEGIN_CLASS_MAP(soapparam)
  END_CLASS_MAP(soapparam)
  DECLARE_CLASS(soapparam, SoapParam, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapparam();
  public: ~c_soapparam();
  public: void t___construct(CVarRef data, CStrRef name);
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(Variant data, String name);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: String  m_name;
  public: String  m_data;
};

///////////////////////////////////////////////////////////////////////////////
// class SoapHeader

FORWARD_DECLARE_CLASS(soapheader);
class c_soapheader : public ObjectData {
 public:
  BEGIN_CLASS_MAP(soapheader)
  END_CLASS_MAP(soapheader)
  DECLARE_CLASS(soapheader, SoapHeader, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_soapheader();
  public: ~c_soapheader();
  public: void t___construct(CStrRef ns, CStrRef name, CVarRef data = null, bool mustunderstand = false, CVarRef actor = null);
  public: Variant t___destruct();

  // implemented by HPHP
  public: ObjectData *create(String ns, String name, Variant data = null, bool mustunderstand = false, Variant actor = null);
  public: void dynConstruct(CArrRef Params);
  public: virtual void destruct();

  public: String  m_namespace;
  public: String  m_name;
  public: Variant m_data;
  public: bool    m_mustUnderstand;
  public: Variant m_actor;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_SOAP_H__
