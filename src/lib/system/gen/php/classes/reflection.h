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

#ifndef __GENERATED_PHP_CLASSES_REFLECTION_H__
#define __GENERATED_PHP_CLASSES_REFLECTION_H__

#include <cpp/base/hphp_system.h>
#include <php/classes/reflection.fw.h>

// Declarations
#include <cls/reflectionfunctionabstract.h>
#include <cls/reflectionobject.h>
#include <cls/reflector.h>
#include <cls/reflectionexception.h>
#include <cls/reflectionclass.h>
#include <cls/reflectionextension.h>
#include <cls/reflectionmethod.h>
#include <cls/reflectionproperty.h>
#include <cls/reflectionfunction.h>
#include <cls/reflectionparameter.h>
#include <php/classes/exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant pm_php$classes$reflection_php(bool incOnce = false, LVariableTable* variables = NULL);
Object co_reflectionfunctionabstract(CArrRef params, bool init = true);
Object co_reflectionobject(CArrRef params, bool init = true);
Object co_reflectionexception(CArrRef params, bool init = true);
Object co_reflectionclass(CArrRef params, bool init = true);
Object co_reflectionextension(CArrRef params, bool init = true);
Object co_reflectionmethod(CArrRef params, bool init = true);
Object co_reflectionproperty(CArrRef params, bool init = true);
Object co_reflectionfunction(CArrRef params, bool init = true);
Object co_reflectionparameter(CArrRef params, bool init = true);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_PHP_CLASSES_REFLECTION_H__
