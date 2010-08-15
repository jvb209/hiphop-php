<?php
/**
 * Automatically generated by running "php schema.php output".
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
    'name'   => "ob_start",
    'desc'   => "This function will turn output buffering on. While output buffering is active no output is sent from the script (other than headers), instead the output is stored in an internal buffer.\n\nThe contents of this internal buffer may be copied into a string variable using ob_get_contents(). To output what is stored in the internal buffer, use ob_end_flush(). Alternatively, ob_end_clean() will silently discard the buffer contents. Warning\n\nSome web servers (e.g. Apache) change the working directory of a script when calling the callback function. You can change it back by e.g. chdir(dirname(\$_SERVER['SCRIPT_FILENAME'])) in the callback function.\n\nOutput buffers are stackable, that is, you may call ob_start() while another ob_start() is active. Just make sure that you call ob_end_flush() the appropriate number of times. If multiple output callback functions are active, output is being filtered sequentially through each of them in nesting order.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "output_callback",
        'type'   => Variant,
        'value'  => "null",
        'desc'   => "An optional output_callback function may be specified. This function takes a string as a parameter and should return a string. The function will be called when the output buffer is flushed (sent) or cleaned (with ob_flush(), ob_clean() or similar function) or when the output buffer is flushed to the browser at the end of the request. When output_callback is called, it will receive the contents of the output buffer as its parameter and is expected to return a new output buffer as a result, which will be sent to the browser. If the output_callback is not a callable function, this function will return FALSE.\n\nIf the callback function has two parameters, the second parameter is filled with a bit-field consisting of PHP_OUTPUT_HANDLER_START, PHP_OUTPUT_HANDLER_CONT and PHP_OUTPUT_HANDLER_END.\n\nIf output_callback returns FALSE original input is sent to the browser.\n\nThe output_callback parameter may be bypassed by passing a NULL value.\n\nob_end_clean(), ob_end_flush(), ob_clean(), ob_flush() and ob_start() may not be called from a callback function. If you call them from callback function, the behavior is undefined. If you would like to delete the contents of a buffer, return \"\" (a null string) from callback function. You can't even call functions using the output buffering functions like print_r(\$expression, true) or highlight_file(\$filename, true) from a callback function.\n\nIn PHP 4.0.4, ob_gzhandler() was introduced to facilitate sending gz-encoded data to web browsers that support compressed web pages. ob_gzhandler() determines what type of content encoding the browser will accept and will return its output accordingly.",
      ),
      array(
        'name'   => "chunk_size",
        'type'   => Int32,
        'value'  => "0",
        'desc'   => "If the optional parameter chunk_size is passed, the buffer will be flushed after any output call which causes the buffer's length to equal or exceed chunk_size. Default value 0 means that the function is called only in the end, other special value 1 sets chunk_size to 4096.",
      ),
      array(
        'name'   => "erase",
        'type'   => Boolean,
        'value'  => "true",
        'desc'   => "If the optional parameter erase is set to FALSE, the buffer will not be deleted until the script finishes. This causes that flushing and cleaning functions would issue a notice and return FALSE if called.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_clean",
    'desc'   => "This function discards the contents of the output buffer.\n\nThis function does not destroy the output buffer like ob_end_clean() does.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_flush",
    'desc'   => "This function will send the contents of the output buffer (if any). If you want to further process the buffer's contents you have to call ob_get_contents() before ob_flush() as the buffer contents are discarded after ob_flush() is called.\n\nThis function does not destroy the output buffer like ob_end_flush() does.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_end_clean",
    'desc'   => "This function discards the contents of the topmost output buffer and turns off this output buffering. If you want to further process the buffer's contents you have to call ob_get_contents() before ob_end_clean() as the buffer contents are discarded when ob_end_clean() is called.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure. Reasons for failure are first that you called the function without an active buffer or that for some reason a buffer could not be deleted (possible for special buffer).",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_end_flush",
    'desc'   => "This function will send the contents of the topmost output buffer (if any) and turn this output buffer off. If you want to further process the buffer's contents you have to call ob_get_contents() before ob_end_flush() as the buffer contents are discarded after ob_end_flush() is called. This function is similar to ob_get_flush(), except that ob_get_flush() returns the buffer as a string.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure. Reasons for failure are first that you called the function without an active buffer or that for some reason a buffer could not be deleted (possible for special buffer).",
    ),
  ));

DefineFunction(
  array(
    'name'   => "flush",
    'desc'   => "Flushes the write buffers of PHP and whatever backend PHP is using (CGI, a web server, etc). This attempts to push current output all the way to the browser with a few caveats.\n\nflush() may not be able to override the buffering scheme of your web server and it has no effect on any client-side buffering in the browser. It also doesn't affect PHP's userspace output buffering mechanism. This means you will have to call both ob_flush() and flush() to flush the ob output buffers if you are using those.\n\nSeveral servers, especially on Win32, will still buffer the output from your script until it terminates before transmitting the results to the browser.\n\nServer modules for Apache like mod_gzip may do buffering of their own that will cause flush() to not result in data being sent immediately to the client.\n\nEven the browser may buffer its input before displaying it. Netscape, for example, buffers text until it receives an end-of-line or the beginning of a tag, and it won't render tables until the </table> tag of the outermost table is seen.\n\nSome versions of Microsoft Internet Explorer will only start to display the page after they have received 256 bytes of output, so you may need to send extra whitespace before flushing to get those browsers to display the page.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned. ob_clean Output Control Functions Last updated: Fri, 13 Aug 2010  ",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_clean",
    'desc'   => "Gets the current buffer contents and delete current output buffer.\n\nob_get_clean() essentially executes both ob_get_contents() and ob_end_clean().",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns the contents of the output buffer and end output buffering. If output buffering isn't active then FALSE is returned.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_contents",
    'desc'   => "Gets the contents of the output buffer without clearing it.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "This will return the contents of the output buffer or FALSE, if output buffering isn't active.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_flush",
    'desc'   => "ob_get_flush() flushes the output buffer, return it as a string and turns off output buffering. This function is similar to ob_end_flush(), except that this function returns the buffer as a string.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns the output buffer or FALSE if no buffering is active.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_length",
    'desc'   => "This will return the length of the contents in the output buffer.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the length of the output buffer contents or FALSE if no buffering is active.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_level",
    'desc'   => "Returns the nesting level of the output buffering mechanism.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the level of nested output buffering handlers or zero if output buffering is not active.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_get_status",
    'desc'   => "ob_get_status() returns status information on either the top level output buffer or all active output buffer levels if full_status is set to TRUE.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
    ),
    'args'   => array(
      array(
        'name'   => "full_status",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "TRUE to return all active output buffer levels. If FALSE or not set, only the top level output buffer is returned.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_gzhandler",
    'desc'   => "ob_gzhandler() is intended to be used as a callback function for ob_start() to help facilitate sending gz-encoded data to web browsers that support compressed web pages. Before ob_gzhandler() actually sends compressed data, it determines what type of content encoding the browser will accept (\"gzip\", \"deflate\" or none at all) and will return its output accordingly. All browsers are supported since it's up to the browser to send the correct header saying that it accepts compressed web pages. If a browser doesn't support compressed pages this function returns FALSE.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
    ),
    'args'   => array(
      array(
        'name'   => "buffer",
        'type'   => String,
      ),
      array(
        'name'   => "mode",
        'type'   => Int32,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_implicit_flush",
    'desc'   => "ob_implicit_flush() will turn implicit flushing on or off. Implicit flushing will result in a flush operation after every output call, so that explicit calls to flush() will no longer be needed.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
    'args'   => array(
      array(
        'name'   => "flag",
        'type'   => Boolean,
        'value'  => "true",
        'desc'   => "TRUE to turn implicit flushing on, FALSE otherwise.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "ob_list_handlers",
    'desc'   => "Lists all output handlers in use.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => StringVec,
      'desc'   => "This will return an array with the output handlers in use (if any). If output_buffering is enabled or an anonymous function was used with ob_start(), ob_list_handlers() will return \"default output handler\".",
    ),
  ));

DefineFunction(
  array(
    'name'   => "output_add_rewrite_var",
    'desc'   => "This function adds another name/value pair to the URL rewrite mechanism. The name and value will be added to URLs (as GET parameter) and forms (as hidden input fields) the same way as the session ID when transparent URL rewriting is enabled with session.use_trans_sid. Please note that absolute URLs (http://example.com/..) aren't rewritten.\n\nThis function's behavior is controlled by the url_rewriter.tags php.ini parameter. Calling this function will implicitly start output buffering if it is not active already.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "The variable name.",
      ),
      array(
        'name'   => "value",
        'type'   => String,
        'desc'   => "The variable value.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "output_reset_rewrite_vars",
    'desc'   => "This function resets the URL rewriter and removes all rewrite variables previously set by the output_add_rewrite_var() function or the session mechanism (if session.use_trans_sid was set on session_start()).",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_log",
    'desc'   => "Write a message to a file and keep it open afterwards, so we can continue to write to it efficiently as a log file.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
        'desc'   => "Which file to write to.",
      ),
      array(
        'name'   => "message",
        'type'   => String,
        'desc'   => "Message to write to the log.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_crash_log",
    'desc'   => "Adds an entry to a log file that's written when server crashes. This is useful for diagnose why server crashed. For example, logged-on user's ID.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "Name of the value.",
      ),
      array(
        'name'   => "value",
        'type'   => String,
        'desc'   => "Value to write to log.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_stats",
    'desc'   => "Tallies a number for server stats.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "Name of the entry. This name can then be used with admin commands to retrieve stats while server is running.",
      ),
      array(
        'name'   => "value",
        'type'   => Int64,
        'desc'   => "An integer to add up.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_stats",
    'desc'   => "Checks current value of a server stats.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Currently accumulated count.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "Name of the entry.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "hphp_output_global_state",
    'desc'   => "Dumps all variables in global state, including global variables, static variables, class statics and others.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Variant,
      'desc'   => "An array of global state.",
    ),
    'args'   => array(
      array(
        'name'   => "serialize",
        'type'   => Boolean,
        'value'  => "true",
        'desc'   => "Specifies what format to use, whether to serialize into a string.",
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

