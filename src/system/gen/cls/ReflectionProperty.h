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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionProperty_h1f224fe7__
#define __GENERATED_cls_ReflectionProperty_h1f224fe7__

#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1308 */
class c_ReflectionProperty : public ExtObjectData {
  public:

  // Properties
  Variant m_info;
  Variant m_name;
  Variant m_class;

  // Class Map
  BEGIN_CLASS_MAP(ReflectionProperty)
    PARENT_CLASS(Reflector)
  END_CLASS_MAP(ReflectionProperty)
  DECLARE_CLASS_COMMON(ReflectionProperty, ReflectionProperty)
  DECLARE_INVOKE_EX(ReflectionProperty, ReflectionProperty, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionProperty 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionProperty 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionProperty 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionProperty 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionProperty 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionProperty 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_cls, Variant v_name);
  public: c_ReflectionProperty *create(Variant v_cls, Variant v_name);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: String t___tostring();
  public: static Variant ti_export(const char* cls, Variant v_cls, CVarRef v_name, CVarRef v_ret);
  public: Variant t_getname();
  public: bool t_ispublic();
  public: bool t_isprivate();
  public: bool t_isprotected();
  public: Variant t_isstatic();
  public: Variant t_isdefault();
  public: void t_setaccessible();
  public: Variant t_getmodifiers();
  public: Variant t_getvalue(CVarRef v_obj = null_variant);
  public: Variant t_setvalue(CVarRef v_obj, CVarRef v_value);
  public: Variant t_getdeclaringclass();
  public: Variant t_getdoccomment();
  public: static Variant t_export(CVarRef v_cls, CVarRef v_name, CVarRef v_ret) { return ti_export("ReflectionProperty", v_cls, v_name, v_ret); }
  DECLARE_METHOD_INVOKE_HELPERS(isprivate);
  DECLARE_METHOD_INVOKE_HELPERS(getvalue);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(isprotected);
  DECLARE_METHOD_INVOKE_HELPERS(isstatic);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(isdefault);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(ispublic);
  DECLARE_METHOD_INVOKE_HELPERS(setaccessible);
  DECLARE_METHOD_INVOKE_HELPERS(getdoccomment);
  DECLARE_METHOD_INVOKE_HELPERS(setvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
};
extern struct ObjectStaticCallbacks cw_ReflectionProperty;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionProperty_h1f224fe7__
