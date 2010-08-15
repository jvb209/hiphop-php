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

#ifndef __HPHP_EVAL_DEBUGGER_BASE_H__
#define __HPHP_EVAL_DEBUGGER_BASE_H__

#include <runtime/eval/debugger/break_point.h>
#include <runtime/base/util/string_buffer.h>
#include <runtime/base/util/exceptions.h>
#include <util/hdf.h>

namespace HPHP { namespace Eval {
///////////////////////////////////////////////////////////////////////////////
// exceptions

class DebuggerClientExitException  : public Exception {};
class DebuggerConsoleExitException : public Exception {};
class DebuggerProtocolException    : public Exception {};

class DebuggerRestartException : public Exception {
public:
  DebuggerRestartException(StringVecPtr args) : m_args(args) {}
  StringVecPtr m_args;
  ~DebuggerRestartException() throw() {}
};

///////////////////////////////////////////////////////////////////////////////
// utility functions

enum CodeColor {
  CodeColorNone,
  CodeColorKeyword,
  CodeColorComment,
  CodeColorString,
  CodeColorVariable,
  CodeColorHtml,
  CodeColorTag,
  CodeColorDeclaration,
  CodeColorConstant,
  CodeColorLineNo
};

String highlight_php(CStrRef source, int line);

extern const char *PHP_KEYWORDS[];

///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(DMachineInfo);
class DMachineInfo {
public:
  std::string m_name;
  DebuggerThriftBuffer m_thrift;
};

///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(DSandboxInfo);
class DSandboxInfo {
public:
  DSandboxInfo() {}
  DSandboxInfo(const std::string &id) { set(id);}

  std::string m_user;
  std::string m_name;
  std::string m_path;

  const std::string &id() const;
  void set(const std::string &id);

private:
  mutable std::string m_cached_id;
};

///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(DThreadInfo);
class DThreadInfo {
public:
  int64 m_id;
  std::string m_desc;
  std::string m_type;
  std::string m_url;

  int m_index; // used by DebuggerClient

  void sendImpl(ThriftBuffer &thrift);
  void recvImpl(ThriftBuffer &thrift);
};

///////////////////////////////////////////////////////////////////////////////

class BreakPointInfo;
DECLARE_BOOST_TYPES(DFunctionInfo);
class DFunctionInfo {
public:
  std::string m_namespace;
  std::string m_class;
  std::string m_function;

  std::string site(std::string &preposition) const;
  std::string desc(const BreakPointInfo *bpi) const;

  void sendImpl(ThriftBuffer &thrift);
  void recvImpl(ThriftBuffer &thrift);
};

///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(Macro);
class Macro {
public:
  std::string m_name;
  StringVec m_cmds;

  unsigned int m_index; // currently playing position

  std::string desc(const char *indent);
  void load(Hdf node);
  void save(Hdf node);
};

///////////////////////////////////////////////////////////////////////////////
}}

#endif // __HPHP_EVAL_DEBUGGER_BASE_H__
