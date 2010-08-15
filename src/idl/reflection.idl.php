<?php
/**
 * Automatically generated by running "php schema.php reflection".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => "hphp_get_extension_info",
    'desc'   => "Internally used for getting extension's information.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => VariantMap,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_class_info",
    'desc'   => "Internally used by ReflectionClass for getting a class's information.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => VariantMap,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_function_info",
    'desc'   => "Internally used by ReflectionFuncion for getting a function's information.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => VariantMap,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_invoke",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_invoke_method",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "obj",
        'type'   => Variant,
      ),
      array(
        'name'   => "cls",
        'type'   => String,
      ),
      array(
        'name'   => "name",
        'type'   => String,
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_instanceof",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "obj",
        'type'   => Object,
      ),
      array(
        'name'   => "name",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_create_object",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Object,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_property",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "obj",
        'type'   => Object,
      ),
      array(
        'name'   => "cls",
        'type'   => String,
      ),
      array(
        'name'   => "prop",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_set_property",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "obj",
        'type'   => Object,
      ),
      array(
        'name'   => "cls",
        'type'   => String,
      ),
      array(
        'name'   => "prop",
        'type'   => String,
      ),
      array(
        'name'   => "value",
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_static_property",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "cls",
        'type'   => String,
      ),
      array(
        'name'   => "prop",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_set_static_property",
    'desc'   => "Used by FFI interface for other languages to call into PHP.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "cls",
        'type'   => String,
      ),
      array(
        'name'   => "prop",
        'type'   => String,
      ),
      array(
        'name'   => "value",
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_original_class_name",
    'desc'   => "Internally used by ReflectionClass for getting a class's declared name.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => String,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
    ),
  ));


///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()

