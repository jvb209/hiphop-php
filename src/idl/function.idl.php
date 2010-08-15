<?php
/**
 * Automatically generated by running "php schema.php function".
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
    'name'   => "get_defined_functions",
    'desc'   => "Gets an array of all defined functions.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
      'desc'   => "Returns an multidimensional array containing a list of all defined functions, both built-in (internal) and user-defined. The internal functions will be accessible via \$arr[\"internal\"], and the user defined ones using \$arr[\"user\"] (see example below).",
    ),
  ));

DefineFunction(
  array(
    'name'   => "function_exists",
    'desc'   => "Checks the list of defined functions, both built-in (internal) and user-defined, for function_name.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE if function_name exists and is a function, FALSE otherwise.\n\nThis function will return FALSE for constructs, such as include_once() and echo().",
    ),
    'args'   => array(
      array(
        'name'   => "function_name",
        'type'   => String,
        'desc'   => "The function name, as a string.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "is_callable",
    'desc'   => "Verify that the contents of a variable can be called as a function. This can check that a simple variable contains the name of a valid function, or that an array contains a properly encoded object and function name.",
    'flags'  =>  HasDocComment | HasOptFunction,
    'opt'    => "hphp_opt_is_callable",
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE if name is callable, FALSE otherwise.",
    ),
    'args'   => array(
      array(
        'name'   => "v",
        'type'   => Any,
        'desc'   => "Can be either the name of a function stored in a string variable, or an object and the name of a method within the object, like this: array(\$SomeObject, 'MethodName')",
      ),
      array(
        'name'   => "syntax",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "If set to TRUE the function only verifies that name might be a function or method. It will only reject simple variables that are not strings, or an array that does not have a valid structure to be used as a callback. The valid ones are supposed to have only 2 entries, the first of which is an object or a string, and the second a string.",
      ),
      array(
        'name'   => "name",
        'type'   => Variant | Reference,
        'value'  => "null",
        'desc'   => "Receives the \"callable name\". In the example below it is \"someClass::someMethod\". Note, however, that despite the implication that someClass::SomeMethod() is a callable static method, this is not the case.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "call_user_func_array",
    'desc'   => "Call a user defined function with the parameters in param_arr.",
    'flags'  =>  HasDocComment | HasOptFunction,
    'opt'    => "hphp_opt_call_user_func",
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the function result, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The function to be called.",
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
        'desc'   => "The parameters to be passed to the function, as an indexed array.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "call_user_func",
    'desc'   => "Call a user defined function given by the function parameter.",
    'flags'  =>  HasDocComment | MixedVariableArguments | HasOptFunction,
    'opt'    => "hphp_opt_call_user_func",
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the function result, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The function to be called. Class methods may also be invoked statically using this function by passing array(\$classname, \$methodname) to this parameter. Additionally class methods of an object instance may be called by passing array(\$objectinstance, \$methodname) to this parameter.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "call_user_func_array_async",
    'desc'   => "Same as call_user_func_array(), but returns an object immediately without waiting for the function to finish. The object can be used with end_user_func_async() to eventually retrieve function's return, if needed.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Object,
      'desc'   => "An object end_user_func_async() uses for final waiting of function's return.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "Function's name, same as in call_user_func_array().",
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
        'desc'   => "Parameters, same as in call_user_func_array().",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "call_user_func_async",
    'desc'   => "Same as call_user_func(), but returns an object immediately without waiting for the function to finish. The object can be used with end_user_func_async() to eventually retrieve function's return, if needed.",
    'flags'  =>  HasDocComment | HipHopSpecific | MixedVariableArguments,
    'return' => array(
      'type'   => Object,
      'desc'   => "An object end_user_func_async() uses for final waiting of function's return.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "Function's name, same as in call_user_func_array().",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "end_user_func_async",
    'desc'   => "Block until function returns. Used with call_user_func_async() or call_user_func_array_async().",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Function's return value.",
    ),
    'args'   => array(
      array(
        'name'   => "handle",
        'type'   => Object,
        'desc'   => "The object returned from call_user_func_async() or call_user_func_array_async().",
      ),
      array(
        'name'   => "default_strategy",
        'type'   => Int32,
        'value'  => "k_GLOBAL_STATE_IGNORE",
        'desc'   => "GLOBAL_STATE_ constants to specify how to treat global states. Please read documentation for more details.",
      ),
      array(
        'name'   => "additional_strategies",
        'type'   => Variant,
        'value'  => "null",
        'desc'   => "Extra strategy for individual variables. Please read documentation for more details.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "forward_static_call_array",
    'desc'   => "Calls a user defined function or method given by the function parameter. This function must be called within a method context, it can't be used outside a class. All arguments of the forwarded method are passed as values, and as an array, similarly to call_user_func_array().",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the function result, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.",
      ),
      array(
        'name'   => "params",
        'type'   => VariantVec,
        'desc'   => "One parameter, gathering all the method parameter in one array.\n\nNote that the parameters for forward_static_call_array() are not passed by reference.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "forward_static_call",
    'desc'   => "Calls a user defined function or method given by the function parameter, with the following arguments. This function must be called within a method context, it can't be used outside a class.",
    'flags'  =>  HasDocComment | MixedVariableArguments,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the function result, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "create_function",
    'desc'   => "Creates an anonymous function from the parameters passed, and returns a unique name for it.\nUsually these parameters will be passed as single quote delimited strings. The reason for using single quoted strings, is to protect the variable names from parsing, otherwise, if you use double quotes there will be a need to escape the variable names, e.g. \\\$avar.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns a unique function name as a string, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "args",
        'type'   => String,
        'desc'   => "The function arguments.",
      ),
      array(
        'name'   => "code",
        'type'   => String,
        'desc'   => "The function code.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "func_get_arg",
    'desc'   => "Gets the specified argument from a user-defined function's argument list.\n\nThis function may be used in conjunction with func_get_args() and func_num_args() to allow user-defined functions to accept variable-length argument lists.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the specified argument, or FALSE on error.",
    ),
    'args'   => array(
      array(
        'name'   => "arg_num",
        'type'   => Int32,
        'desc'   => "The argument offset. Function arguments are counted starting from zero.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "func_get_args",
    'desc'   => "Gets an array of the function's argument list.\n\nThis function may be used in conjunction with func_get_arg() and func_num_args() to allow user-defined functions to accept variable-length argument lists.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantVec,
      'desc'   => "Returns an array in which each element is a copy of the corresponding member of the current user-defined function's argument list.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "func_num_args",
    'desc'   => "Gets the number of arguments passed to the function.\n\nThis function may be used in conjunction with func_get_arg() and func_get_args() to allow user-defined functions to accept variable-length argument lists.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the number of arguments passed into the current user-defined function.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "register_postsend_function",
    'desc'   => "Registers functions to call after HTTP response is completely sent to browser.",
    'flags'  =>  HasDocComment | HipHopSpecific | VariableArguments,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The callback to register.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "register_shutdown_function",
    'desc'   => "Registers the function named by function to be executed when script processing is complete or when exit() is called.\n\nMultiple calls to register_shutdown_function() can be made, and each will be called in the same order as they were registered. If you call exit() within one registered shutdown function, processing will stop completely and no other registered shutdown functions will be called.",
    'flags'  =>  HasDocComment | VariableArguments,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The shutdown function to register.\n\nThe shutdown functions are called as the part of the request so that it's possible to send the output from them. There is currently no way to process the data with output buffering functions in the shutdown function.\n\nShutdown functions are called after closing all opened output buffers thus, for example, its output will not be compressed if zlib.output_compression is enabled.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "register_cleanup_function",
    'desc'   => "Registers functions to call at very end of a web page to clean up and free system resources.",
    'flags'  =>  HasDocComment | HipHopSpecific | VariableArguments,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The callback to register.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "register_tick_function",
    'flags'  =>  HasDocComment | VariableArguments,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "function",
        'type'   => Variant,
        'desc'   => "The function name as a string, or an array consisting of an object and a method.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "unregister_tick_function",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
    'args'   => array(
      array(
        'name'   => "function_name",
        'type'   => Variant,
        'desc'   => "The function name, as a string.",
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

