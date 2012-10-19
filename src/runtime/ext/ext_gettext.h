/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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

#ifndef __EXT_GETTEXT_H__
#define __EXT_GETTEXT_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

void set_request_locale(CStrRef locale);
std::locale get_request_locale();
String get_request_locale_name();
int locale_strcoll(CStrRef str1, CStrRef str2);
Variant f_textdomain(CStrRef domain);
Variant f_gettext(CStrRef msgid);
Variant f__(CStrRef msgid);
Variant f_dgettext(CStrRef domain_name, CStrRef msgid);
Variant f_dcgettext(CStrRef domain_name, CStrRef msgid, int64 category);
Variant f_bindtextdomain(CStrRef domain_name, CStrRef dir);
Variant f_ngettext(CStrRef msg, CStrRef msg_plural, int64 n);
Variant f_dngettext(CStrRef domain, CStrRef msg, CStrRef msg_plural, int64 n);
Variant f_dcngettext(CStrRef domain, CStrRef msg, CStrRef msg_plural, int64 n, int64 category);
Variant f_bind_textdomain_codeset(CStrRef domain, CStrRef codeset);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_GETTEXT_H__
