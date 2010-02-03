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

#ifndef __EXTPROFILE_MATH_H__
#define __EXTPROFILE_MATH_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <cpp/ext/ext_math.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

#ifndef PROFILE_BUILTIN
#define x_pi f_pi
#else
inline double x_pi() {
  FUNCTION_INJECTION(pi);
  return f_pi();
}
#endif

#ifndef PROFILE_BUILTIN
#define x_min f_min
#else
inline Variant x_min(int _argc, CVarRef value, CArrRef _argv = null_array) {
  FUNCTION_INJECTION(min);
  return f_min(_argc, value, _argv);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_max f_max
#else
inline Variant x_max(int _argc, CVarRef value, CArrRef _argv = null_array) {
  FUNCTION_INJECTION(max);
  return f_max(_argc, value, _argv);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_abs f_abs
#else
inline Variant x_abs(CVarRef number) {
  FUNCTION_INJECTION(abs);
  return f_abs(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_is_finite f_is_finite
#else
inline bool x_is_finite(double val) {
  FUNCTION_INJECTION(is_finite);
  return f_is_finite(val);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_is_infinite f_is_infinite
#else
inline bool x_is_infinite(double val) {
  FUNCTION_INJECTION(is_infinite);
  return f_is_infinite(val);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_is_nan f_is_nan
#else
inline bool x_is_nan(double val) {
  FUNCTION_INJECTION(is_nan);
  return f_is_nan(val);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_ceil f_ceil
#else
inline double x_ceil(double value) {
  FUNCTION_INJECTION(ceil);
  return f_ceil(value);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_floor f_floor
#else
inline double x_floor(double value) {
  FUNCTION_INJECTION(floor);
  return f_floor(value);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_round f_round
#else
inline double x_round(CVarRef val, int64 precision = 0) {
  FUNCTION_INJECTION(round);
  return f_round(val, precision);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_deg2rad f_deg2rad
#else
inline double x_deg2rad(double number) {
  FUNCTION_INJECTION(deg2rad);
  return f_deg2rad(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_rad2deg f_rad2deg
#else
inline double x_rad2deg(double number) {
  FUNCTION_INJECTION(rad2deg);
  return f_rad2deg(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_decbin f_decbin
#else
inline String x_decbin(int64 number) {
  FUNCTION_INJECTION(decbin);
  return f_decbin(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_dechex f_dechex
#else
inline String x_dechex(int64 number) {
  FUNCTION_INJECTION(dechex);
  return f_dechex(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_decoct f_decoct
#else
inline String x_decoct(int64 number) {
  FUNCTION_INJECTION(decoct);
  return f_decoct(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_bindec f_bindec
#else
inline Variant x_bindec(CStrRef binary_string) {
  FUNCTION_INJECTION(bindec);
  return f_bindec(binary_string);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_hexdec f_hexdec
#else
inline Variant x_hexdec(CStrRef hex_string) {
  FUNCTION_INJECTION(hexdec);
  return f_hexdec(hex_string);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_octdec f_octdec
#else
inline Variant x_octdec(CStrRef octal_string) {
  FUNCTION_INJECTION(octdec);
  return f_octdec(octal_string);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_base_convert f_base_convert
#else
inline String x_base_convert(CStrRef number, int64 frombase, int64 tobase) {
  FUNCTION_INJECTION(base_convert);
  return f_base_convert(number, frombase, tobase);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_pow f_pow
#else
inline Numeric x_pow(CVarRef base, CVarRef exp) {
  FUNCTION_INJECTION(pow);
  return f_pow(base, exp);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_exp f_exp
#else
inline double x_exp(double arg) {
  FUNCTION_INJECTION(exp);
  return f_exp(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_expm1 f_expm1
#else
inline double x_expm1(double arg) {
  FUNCTION_INJECTION(expm1);
  return f_expm1(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_log10 f_log10
#else
inline double x_log10(double arg) {
  FUNCTION_INJECTION(log10);
  return f_log10(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_log1p f_log1p
#else
inline double x_log1p(double number) {
  FUNCTION_INJECTION(log1p);
  return f_log1p(number);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_log f_log
#else
inline double x_log(double arg, double base = 0) {
  FUNCTION_INJECTION(log);
  return f_log(arg, base);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_cos f_cos
#else
inline double x_cos(double arg) {
  FUNCTION_INJECTION(cos);
  return f_cos(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_cosh f_cosh
#else
inline double x_cosh(double arg) {
  FUNCTION_INJECTION(cosh);
  return f_cosh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_sin f_sin
#else
inline double x_sin(double arg) {
  FUNCTION_INJECTION(sin);
  return f_sin(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_sinh f_sinh
#else
inline double x_sinh(double arg) {
  FUNCTION_INJECTION(sinh);
  return f_sinh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_tan f_tan
#else
inline double x_tan(double arg) {
  FUNCTION_INJECTION(tan);
  return f_tan(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_tanh f_tanh
#else
inline double x_tanh(double arg) {
  FUNCTION_INJECTION(tanh);
  return f_tanh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_acos f_acos
#else
inline double x_acos(double arg) {
  FUNCTION_INJECTION(acos);
  return f_acos(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_acosh f_acosh
#else
inline double x_acosh(double arg) {
  FUNCTION_INJECTION(acosh);
  return f_acosh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_asin f_asin
#else
inline double x_asin(double arg) {
  FUNCTION_INJECTION(asin);
  return f_asin(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_asinh f_asinh
#else
inline double x_asinh(double arg) {
  FUNCTION_INJECTION(asinh);
  return f_asinh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_atan f_atan
#else
inline double x_atan(double arg) {
  FUNCTION_INJECTION(atan);
  return f_atan(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_atanh f_atanh
#else
inline double x_atanh(double arg) {
  FUNCTION_INJECTION(atanh);
  return f_atanh(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_atan2 f_atan2
#else
inline double x_atan2(double y, double x) {
  FUNCTION_INJECTION(atan2);
  return f_atan2(y, x);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_hypot f_hypot
#else
inline double x_hypot(double x, double y) {
  FUNCTION_INJECTION(hypot);
  return f_hypot(x, y);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_fmod f_fmod
#else
inline double x_fmod(double x, double y) {
  FUNCTION_INJECTION(fmod);
  return f_fmod(x, y);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_sqrt f_sqrt
#else
inline double x_sqrt(double arg) {
  FUNCTION_INJECTION(sqrt);
  return f_sqrt(arg);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_getrandmax f_getrandmax
#else
inline int64 x_getrandmax() {
  FUNCTION_INJECTION(getrandmax);
  return f_getrandmax();
}
#endif

#ifndef PROFILE_BUILTIN
#define x_srand f_srand
#else
inline void x_srand(CVarRef seed = null_variant) {
  FUNCTION_INJECTION(srand);
  f_srand(seed);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_rand f_rand
#else
inline int64 x_rand(int64 min = 0, int64 max = RAND_MAX) {
  FUNCTION_INJECTION(rand);
  return f_rand(min, max);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_mt_getrandmax f_mt_getrandmax
#else
inline int64 x_mt_getrandmax() {
  FUNCTION_INJECTION(mt_getrandmax);
  return f_mt_getrandmax();
}
#endif

#ifndef PROFILE_BUILTIN
#define x_mt_srand f_mt_srand
#else
inline void x_mt_srand(CVarRef seed = null_variant) {
  FUNCTION_INJECTION(mt_srand);
  f_mt_srand(seed);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_mt_rand f_mt_rand
#else
inline int64 x_mt_rand(int64 min = 0, int64 max = RAND_MAX) {
  FUNCTION_INJECTION(mt_rand);
  return f_mt_rand(min, max);
}
#endif

#ifndef PROFILE_BUILTIN
#define x_lcg_value f_lcg_value
#else
inline double x_lcg_value() {
  FUNCTION_INJECTION(lcg_value);
  return f_lcg_value();
}
#endif


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MATH_H__
