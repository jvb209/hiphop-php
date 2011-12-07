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

#ifndef __EXTPROFILE_BUCKETCACHE_H__
#define __EXTPROFILE_BUCKETCACHE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_bucketcache.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_get_bucket_cache_info(int64 cluster_id, int64 bucket_id) {
  FUNCTION_INJECTION_BUILTIN(get_bucket_cache_info);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_get_bucket_cache_info(cluster_id, bucket_id);
}

inline bool x_set_bucket_cache_info(int64 cluster_id, int64 bucket_id, int64 state, int64 server, int64 volume, int64 alt_server, int64 alt_volume) {
  FUNCTION_INJECTION_BUILTIN(set_bucket_cache_info);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_set_bucket_cache_info(cluster_id, bucket_id, state, server, volume, alt_server, alt_volume);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_BUCKETCACHE_H__
