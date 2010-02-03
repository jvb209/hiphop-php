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

#include <php/classes/arrayaccess.h>
#include <cpp/ext/ext.h>
#include <cpp/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
Variant pm_php$classes$arrayaccess_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */) {
  FUNCTION_INJECTION(run_init::classes/arrayaccess.php);
  {
    DECLARE_SYSTEM_GLOBALS(g);
    bool &alreadyRun = g->run_pm_php$classes$arrayaccess_php;
    if (alreadyRun) { if (incOnce) return true;}
    else alreadyRun = true;
    if (!variables) variables = g;
  }
  DECLARE_SYSTEM_GLOBALS(g);
  LVariableTable *gVariables __attribute__((__unused__)) = get_variable_table();
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}
