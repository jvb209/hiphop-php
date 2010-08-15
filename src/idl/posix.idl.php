<?php
/**
 * Automatically generated by running "php schema.php posix".
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
    'name'   => "posix_access",
    'desc'   => "posix_access() checks the user's permission of a file.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "file",
        'type'   => String,
        'desc'   => "The name of the file to be tested.",
      ),
      array(
        'name'   => "mode",
        'type'   => Int32,
        'value'  => "0",
        'desc'   => "A mask consisting of one or more of POSIX_F_OK, POSIX_R_OK, POSIX_W_OK and POSIX_X_OK.\n\nPOSIX_R_OK, POSIX_W_OK and POSIX_X_OK request checking whether the file exists and has read, write and execute permissions, respectively. POSIX_F_OK just requests checking for the existence of the file.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_ctermid",
    'desc'   => "Generates a string which is the pathname for the current controlling terminal for the process. On error this will set errno, which can be checked using posix_get_last_error()",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Upon successful completion, returns string of the pathname to the current controlling terminal. Otherwise FALSE is returned and errno is set, which can be checked with posix_get_last_error().",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_get_last_error",
    'desc'   => "Retrieve the error number set by the last posix function that failed. The system error message associated with the errno may be checked with posix_strerror().",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the errno (error number) set by the last posix function that failed. If no errors exist, 0 is returned.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getcwd",
    'desc'   => "Gets the absolute pathname of the script's current working directory. On error, it sets errno which can be checked using posix_get_last_error()",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns a string of the absolute pathname on success. On error, returns FALSE and sets errno which can be checked with posix_get_last_error().",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getegid",
    'desc'   => "Return the numeric effective group ID of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns an integer of the effective group ID.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_geteuid",
    'desc'   => "Return the numeric effective user ID of the current process. See also posix_getpwuid() for information on how to convert this into a useable username.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the user id, as an integer",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getgid",
    'desc'   => "Return the numeric real group ID of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the real group id, as an integer.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getgrgid",
    'desc'   => "Gets information about a group provided its id.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "The array elements returned are: The group information array Element Description name The name element contains the name of the group. This is a short, usually less than 16 character \"handle\" of the group, not the real, full name. passwd The passwd element contains the group's password in an encrypted format. Often, for example on a system employing \"shadow\" passwords, an asterisk is returned instead. gid Group ID, should be the same as the gid parameter used when calling the function, and hence redundant. members This consists of an array of string's for all the members in the group.",
    ),
    'args'   => array(
      array(
        'name'   => "gid",
        'type'   => Int32,
        'desc'   => "The group id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getgrnam",
    'desc'   => "Gets information about a group provided its name.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "The array elements returned are: The group information array Element Description name The name element contains the name of the group. This is a short, usually less than 16 character \"handle\" of the group, not the real, full name. This should be the same as the name parameter used when calling the function, and hence redundant. passwd The passwd element contains the group's password in an encrypted format. Often, for example on a system employing \"shadow\" passwords, an asterisk is returned instead. gid Group ID of the group in numeric form. members This consists of an array of string's for all the members in the group.",
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
    'name'   => "posix_getgroups",
    'desc'   => "Gets the group set of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns an array of integers containing the numeric group ids of the group set of the current process.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getlogin",
    'desc'   => "Returns the login name of the user owning the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the login name of the user, as a string.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getpgid",
    'desc'   => "Returns the process group identifier of the process pid or FALSE on failure.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the identifier, as an integer.",
    ),
    'args'   => array(
      array(
        'name'   => "pid",
        'type'   => Int32,
        'desc'   => "The process id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getpgrp",
    'desc'   => "Return the process group identifier of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the identifier, as an integer.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getpid",
    'desc'   => "Return the process identifier of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the identifier, as an integer.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getppid",
    'desc'   => "Return the process identifier of the parent process of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the identifier, as an integer.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getpwnam",
    'desc'   => "Returns an array of information about the given user.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "On success an array with the following elements is returned, else FALSE is returned: The user information array Element Description name The name element contains the username of the user. This is a short, usually less than 16 character \"handle\" of the user, not the real, full name. This should be the same as the username parameter used when calling the function, and hence redundant. passwd The passwd element contains the user's password in an encrypted format. Often, for example on a system employing \"shadow\" passwords, an asterisk is returned instead. uid User ID of the user in numeric form. gid The group ID of the user. Use the function posix_getgrgid() to resolve the group name and a list of its members. gecos GECOS is an obsolete term that refers to the finger information field on a Honeywell batch processing system. The field, however, lives on, and its contents have been formalized by POSIX. The field contains a comma separated list containing the user's full name, office phone, office number, and home phone number. On most systems, only the user's full name is available. dir This element contains the absolute path to the home directory of the user. shell The shell element contains the absolute path to the executable of the user's default shell.",
    ),
    'args'   => array(
      array(
        'name'   => "username",
        'type'   => String,
        'desc'   => "An alphanumeric username.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getpwuid",
    'desc'   => "Returns an array of information about the user referenced by the given user ID.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns an associative array with the following elements: The user information array Element Description name The name element contains the username of the user. This is a short, usually less than 16 character \"handle\" of the user, not the real, full name. passwd The passwd element contains the user's password in an encrypted format. Often, for example on a system employing \"shadow\" passwords, an asterisk is returned instead. uid User ID, should be the same as the uid parameter used when calling the function, and hence redundant. gid The group ID of the user. Use the function posix_getgrgid() to resolve the group name and a list of its members. gecos GECOS is an obsolete term that refers to the finger information field on a Honeywell batch processing system. The field, however, lives on, and its contents have been formalized by POSIX. The field contains a comma separated list containing the user's full name, office phone, office number, and home phone number. On most systems, only the user's full name is available. dir This element contains the absolute path to the home directory of the user. shell The shell element contains the absolute path to the executable of the user's default shell.",
    ),
    'args'   => array(
      array(
        'name'   => "uid",
        'type'   => Int32,
        'desc'   => "The user identifier.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getrlimit",
    'desc'   => "posix_getrlimit() returns an array of information about the current resource's soft and hard limits.\n\nEach resource has an associated soft and hard limit. The soft limit is the value that the kernel enforces for the corresponding resource. The hard limit acts as a ceiling for the soft limit. An unprivileged process may only set its soft limit to a value from 0 to the hard limit, and irreversibly lower its hard limit.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns an associative array of elements for each limit that is defined. Each limit has a soft and a hard limit. List of possible limits returned Limit name Limit description core The maximum size of the core file. When 0, not core files are created. When core files are larger than this size, they will be truncated at this size. totalmem The maximum size of the memory of the process, in bytes. virtualmem The maximum size of the virtual memory for the process, in bytes. data The maximum size of the data segment for the process, in bytes. stack The maximum size of the process stack, in bytes. rss The maximum number of virtual pages resident in RAM maxproc The maximum number of processes that can be created for the real user ID of the calling process. memlock The maximum number of bytes of memory that may be locked into RAM. cpu The amount of time the process is allowed to use the CPU. filesize The maximum size of the data segment for the process, in bytes. openfiles One more than the maximum number of open file descriptors.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getsid",
    'desc'   => "Return the session id of the process pid. The session id of a process is the process group id of the session leader.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the identifier, as an integer.",
    ),
    'args'   => array(
      array(
        'name'   => "pid",
        'type'   => Int32,
        'desc'   => "The process identifier. If set to 0, the current process is assumed. If an invalid pid is specified, then FALSE is returned and an error is set which can be checked with posix_get_last_error().",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_getuid",
    'desc'   => "Return the numeric real user ID of the current process.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the user id, as an integer",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_initgroups",
    'desc'   => "Calculates the group access list for the user specified in name.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "The user to calculate the list for.",
      ),
      array(
        'name'   => "base_group_id",
        'type'   => Int32,
        'desc'   => "Typically the group number from the password file.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_isatty",
    'desc'   => "Determines if the file descriptor fd refers to a valid terminal type device.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE if fd is an open descriptor connected to a terminal and FALSE otherwise.",
    ),
    'args'   => array(
      array(
        'name'   => "fd",
        'type'   => Variant,
        'desc'   => "The file descriptor.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_kill",
    'desc'   => "Send the signal sig to the process with the process identifier pid.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "pid",
        'type'   => Int32,
        'desc'   => "The process identifier.",
      ),
      array(
        'name'   => "sig",
        'type'   => Int32,
        'desc'   => "One of the PCNTL signals constants.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_mkfifo",
    'desc'   => "posix_mkfifo() creates a special FIFO file which exists in the file system and acts as a bidirectional communication endpoint for processes.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "pathname",
        'type'   => String,
        'desc'   => "Path to the FIFO file.",
      ),
      array(
        'name'   => "mode",
        'type'   => Int32,
        'desc'   => "The second parameter mode has to be given in octal notation (e.g. 0644). The permission of the newly created FIFO also depends on the setting of the current umask(). The permissions of the created file are (mode & ~umask).",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_mknod",
    'desc'   => "Creates a special or ordinary file.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "pathname",
        'type'   => String,
        'desc'   => "The file to create",
      ),
      array(
        'name'   => "mode",
        'type'   => Int32,
        'desc'   => "This parameter is constructed by a bitwise OR between file type (one of the following constants: POSIX_S_IFREG, POSIX_S_IFCHR, POSIX_S_IFBLK, POSIX_S_IFIFO or POSIX_S_IFSOCK) and permissions.",
      ),
      array(
        'name'   => "major",
        'type'   => Int32,
        'value'  => "0",
        'desc'   => "The major device kernel identifier (required to pass when using S_IFCHR or S_IFBLK).",
      ),
      array(
        'name'   => "minor",
        'type'   => Int32,
        'value'  => "0",
        'desc'   => "The minor device kernel identifier.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_setegid",
    'desc'   => "Set the effective group ID of the current process. This is a privileged function and needs appropriate privileges (usually root) on the system to be able to perform this function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "gid",
        'type'   => Int32,
        'desc'   => "The group id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_seteuid",
    'desc'   => "Set the real user ID of the current process. This is a privileged function and needs appropriate privileges (usually root) on the system to be able to perform this function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "uid",
        'type'   => Int32,
        'desc'   => "The user id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_setgid",
    'desc'   => "Set the real group ID of the current process. This is a privileged function and needs appropriate privileges (usually root) on the system to be able to perform this function. The appropriate order of function calls is posix_setgid() first, posix_setuid() last.\n\nIf the caller is a super user, this will also set the effective group id.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "gid",
        'type'   => Int32,
        'desc'   => "The group id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_setpgid",
    'desc'   => "Let the process pid join the process group pgid.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "pid",
        'type'   => Int32,
        'desc'   => "The process id.",
      ),
      array(
        'name'   => "pgid",
        'type'   => Int32,
        'desc'   => "The process group id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_setsid",
    'desc'   => "Make the current process a session leader.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
      'desc'   => "Returns the session id, or -1 on errors.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_setuid",
    'desc'   => "Set the real user ID of the current process. This is a privileged function that needs appropriate privileges (usually root) on the system to be able to perform this function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "uid",
        'type'   => Int32,
        'desc'   => "The user id.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_strerror",
    'desc'   => "Returns the POSIX system error message associated with the given errno. You may get the errno parameter by calling posix_get_last_error().",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns the error message, as a string.",
    ),
    'args'   => array(
      array(
        'name'   => "errnum",
        'type'   => Int32,
        'desc'   => "A POSIX error number, returned by posix_get_last_error(). If set to 0, then the string \"Success\" is returned.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_times",
    'desc'   => "Gets information about the current CPU usage.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns a hash of strings with information about the current process CPU usage. The indices of the hash are: ticks - the number of clock ticks that have elapsed since reboot. utime - user time used by the current process. stime - system time used by the current process. cutime - user time used by current process and children. cstime - system time used by current process and children.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_ttyname",
    'desc'   => "Returns a string for the absolute path to the current terminal device that is open on the file descriptor fd.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "On success, returns a string of the absolute path of the fd. On failure, returns FALSE",
    ),
    'args'   => array(
      array(
        'name'   => "fd",
        'type'   => Variant,
        'desc'   => "The file descriptor.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "posix_uname",
    'desc'   => "Gets information about the system.\n\nPosix requires that assumptions must not be made about the format of the values, e.g. the assumption that a release may contain three digits or anything else returned by this function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns a hash of strings with information about the system. The indices of the hash are sysname - operating system name (e.g. Linux) nodename - system name (e.g. valiant) release - operating system release (e.g. 2.2.10) version - operating system version (e.g. #4 Tue Jul 20 17:01:36 MEST 1999) machine - system architecture (e.g. i586) domainname - DNS domainname (e.g. example.com)\n\ndomainname is a GNU extension and not part of POSIX.1, so this field is only available on GNU systems or when using the GNU libc.",
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

