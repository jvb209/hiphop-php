/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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

#ifndef __TEST_EXT_GEOIP_H__
#define __TEST_EXT_GEOIP_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtGeoip : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_geoip_db_avail();
  bool test_geoip_db_filename();
  bool test_geoip_db_get_all_info();
  bool test_geoip_database_info();
  bool test_geoip_country_code_by_name();
  bool test_geoip_country_name_by_name();
  bool test_geoip_continent_code_by_name();
  bool test_geoip_org_by_name();
  bool test_geoip_record_by_name();
  bool test_geoip_id_by_name();
  bool test_geoip_region_by_name();
  bool test_geoip_isp_by_name();
  bool test_geoip_region_name_by_code();
  bool test_geoip_time_zone_by_country_and_region();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_GEOIP_H__
