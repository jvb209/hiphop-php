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

#ifndef __TEST_EXT_FILE_H__
#define __TEST_EXT_FILE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtFile : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_fopen();
  bool test_popen();
  bool test_fclose();
  bool test_pclose();
  bool test_fseek();
  bool test_rewind();
  bool test_ftell();
  bool test_feof();
  bool test_fstat();
  bool test_fread();
  bool test_fgetc();
  bool test_fgets();
  bool test_fgetss();
  bool test_fscanf();
  bool test_fpassthru();
  bool test_fwrite();
  bool test_read_write();
  bool test_fputs();
  bool test_fprintf();
  bool test_vfprintf();
  bool test_fflush();
  bool test_ftruncate();
  bool test_flock();
  bool test_fputcsv();
  bool test_fgetcsv();
  bool test_file_get_contents();
  bool test_file_put_contents();
  bool test_file();
  bool test_readfile();
  bool test_move_uploaded_file();
  bool test_parse_ini_file();
  bool test_md5_file();
  bool test_sha1_file();
  bool test_chmod();
  bool test_chown();
  bool test_lchown();
  bool test_chgrp();
  bool test_lchgrp();
  bool test_touch();
  bool test_copy();
  bool test_rename();
  bool test_umask();
  bool test_unlink();
  bool test_link();
  bool test_symlink();
  bool test_basename();
  bool test_fnmatch();
  bool test_glob();
  bool test_tempnam();
  bool test_tmpfile();
  bool test_fileperms();
  bool test_fileinode();
  bool test_filesize();
  bool test_fileowner();
  bool test_filegroup();
  bool test_fileatime();
  bool test_filemtime();
  bool test_filectime();
  bool test_filetype();
  bool test_linkinfo();
  bool test_is_writable();
  bool test_is_writeable();
  bool test_is_readable();
  bool test_is_executable();
  bool test_is_file();
  bool test_is_dir();
  bool test_is_link();
  bool test_is_uploaded_file();
  bool test_file_exists();
  bool test_stat();
  bool test_lstat();
  bool test_clearstatcache();
  bool test_readlink();
  bool test_realpath();
  bool test_pathinfo();
  bool test_disk_free_space();
  bool test_diskfreespace();
  bool test_disk_total_space();
  bool test_mkdir();
  bool test_rmdir();
  bool test_dirname();
  bool test_getcwd();
  bool test_chdir();
  bool test_chroot();
  bool test_dir();
  bool test_opendir();
  bool test_readdir();
  bool test_rewinddir();
  bool test_scandir();
  bool test_closedir();

private:
  bool VerifyFile(CVarRef f, CStrRef contents);
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_FILE_H__
