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

#include <runtime/ext/ext_json.h>
#include <runtime/ext/JSON_parser.h>
#include <runtime/base/zend/utf8_to_utf16.h>
#include <runtime/base/variable_serializer.h>

namespace HPHP {
IMPLEMENT_DEFAULT_EXTENSION(json);
///////////////////////////////////////////////////////////////////////////////

String f_json_encode(CVarRef value, bool loose /* = false */) {
  VariableSerializer vs(VariableSerializer::JSON, loose ? 1 : 0);
  Variant ret = vs.serialize(value, true);
  if (value.isContagious()) {
    value.clearContagious();
  }
  return ret;
}

Variant f_json_decode(CVarRef json, bool assoc /* = false */,
                      bool loose /* = false */) {
  if (!json.isString()) {
    raise_error("json_decode() expects parameter 1 to be string");
    return null;
  }
  String sjson = json.toString();
  if (sjson.empty()) {
    return null;
  }

  unsigned short *utf16 = (unsigned short *)malloc((sjson.size() + 1) *
                                                   sizeof(unsigned short) + 1);

  int utf16_len = utf8_to_utf16(utf16, (char*)sjson.data(), sjson.size(),
                                loose ? 1 : 0);
  if (utf16_len <= 0) {
    if (utf16) {
      free(utf16);
    }
    return null;
  }

  Variant z;
  if (JSON_parser(z, utf16, utf16_len, assoc, loose)) {
    free(utf16);
    return z;
  }
  free(utf16);

  if (sjson.size() == 4) {
    if (!strcasecmp(sjson.data(), "null")) return null;
    if (!strcasecmp(sjson.data(), "true")) return true;
  } else if (sjson.size() == 5 && !strcasecmp(sjson.data(), "false")) {
    return false;
  }

  int64 p;
  double d;
  DataType type = is_numeric_string(sjson.data(), sjson.size(), &p, &d, 0);
  if (type == KindOfInt64) {
    return p;
  } else if (type == KindOfDouble) {
    return d;
  }

  char ch0 = sjson[0];
  if (sjson.size() > 1 && ch0 == '"' && sjson[sjson.size() - 1] == '"') {
    return sjson.substr(1, sjson.size() - 2);
  }

  if (loose && sjson.size() > 1 &&
      ch0 == '\'' && sjson[sjson.size() - 1] == '\'') {
    return sjson.substr(1, sjson.size() - 2);
  }

  if (ch0 == '{' || ch0 == '[') { /* invalid JSON string */
    return null;
  }

  return json;
}

///////////////////////////////////////////////////////////////////////////////
}
