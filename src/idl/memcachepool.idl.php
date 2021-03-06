<?php
/**
 * Automatically generated by running "php schema.php memcache".
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
#include <libmemcached/memcached.h>
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

///////////////////////////////////////////////////////////////////////////////

BeginClass(
  array(
    'name'   => "MemcachePool",
	'bases'  => array('Sweepable'),
    'desc'   => "Represents a connection to a set of memcache servers.",
    'flags'  =>  HasDocComment,
	'footer' => <<<EOT
  public: void close();
  private: 
    bool prefetch(CVarRef key);
    bool check_memcache_return(memcached_st * st, memcached_return_t ret, 
                               String key = "", char *default_msg = "");
    void exec_failure_callback(const char * hostname, int tcp_port, int udp_port,
                               memcached_return_t ret, const char * error, Array backtrace);
EOT
,
  ));

DefineFunction(
  array(
    'name'   => "__construct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => "getstoragememcache",
		'desc'   => "MemcachePool::getstoragememcache() is a static member to get
		only one instance per storage_id and thread. The timestamp is used to know
		if the stored object have old configuration and need to be recreated",
    'flags'  =>  IsStatic | HasDocComment,
    'return' => array(
      'type'   => Object,
			'desc'   => "Returns a MemcachePool Object or NULL if we need to create
			new one (next call will return a new Object).",
    ),
    'args'   => array(
      array(
        'name'   => "storage_id",
        'type'   => Int32,
        'desc'   => "Number of the storage id (used to get only one instance per
				storage).",
      ),
      array(
        'name'   => "timestamp",
        'type'   => Int32,
        'desc'   => "Time of the last configuration change.",
      ),
			array(
        'name'   => "empty",
        'type'   => Variant | Reference,
				'desc'   => "This parameter is needed to indicate if the memcached
				object is new and needs to be populated with the memcached servers",
			),
			array(
        'name'   => "persistent",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "Defines if the tcp connections should be persistent",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "connect",
		'desc'   => "MemcachePool::connect() establishes a connection to the memcached
		server. The connection, which was opened using MemcachePool::connect() will be
		automatically closed at the end of script execution. Also you can close it
		with MemcachePool::close(). Also you can use memcache_connect() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
				'desc'   => "Point to the host where memcached is listening for
				connections. This parameter may also specify other transports like
				unix:///path/to/memcached.sock to use UNIX domain sockets, in this case
				port must also be set to 0.",
      ),
      array(
        'name'   => "port",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Point to the port where memcached is listening for
				connections. Set this parameter to 0 when using UNIX domain sockets.",
      ),
      array(
        'name'   => "timeout",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Value in seconds which will be used for connecting to the
				daemon. Think twice before changing the default value of 1 second - you
				can lose all the advantages of caching if your connection is too slow.",
      ),
      array(
        'name'   => "timeoutms",
        'type'   => Int32,
        'value'  => "0",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "pconnect",
		'desc'   => "MemcachePool::pconnect() is similar to MemcachePool::connect() with the
		difference, that the connection it establishes is persistent. This
		connection is not closed after the end of script execution and by
		MemcachePool::close() function. Also you can use memcache_pconnect() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
				'desc'   => "Point to the host where memcached is listening for
				connections. This parameter may also specify other transports like
				unix:///path/to/memcached.sock to use UNIX domain sockets, in this case
				port must also be set to 0.",
      ),
      array(
        'name'   => "port",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Point to the port where memcached is listening for
				connections. Set this parameter to 0 when using UNIX domain sockets.",
      ),
      array(
        'name'   => "timeout",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Value in seconds which will be used for connecting to the
				daemon. Think twice before changing the default value of 1 second - you
				can lose all the advantages of caching if your connection is too slow.",
      ),
      array(
        'name'   => "timeoutms",
        'type'   => Int32,
        'value'  => "0",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "add",
		'desc'   => "MemcachePool::add() stores variable var with key only if such key
		doesn't exist at the server yet. Also you can use memcache_add() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
			'desc'   => "Returns TRUE on success or FALSE on failure. Returns FALSE if
			such key already exist. For the rest MemcachePool::add() behaves similarly to
			MemcachePool::set().",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
				'desc'   => "The key that will be associated with the item.",
      ),
      array(
        'name'   => "var",
        'type'   => Variant,
				'desc'   => "The variable to store. Strings and integers are stored as
				is, other types are stored serialized.",
      ),
      array(
        'name'   => "flag",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Use MEMCACHE_COMPRESSED to store the item compressed (uses
				zlib).",
      ),
      array(
        'name'   => "expire",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Expiration time of the item. If it's equal to zero, the
				item will never expire. You can also use Unix timestamp or a number of
				seconds starting from current time, but in the latter case the number of
				seconds may not exceed 2592000 (30 days).",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "cas",
		'desc'   => "MemcachePool::cas() have the same behaviour as set, but only
		changes the item if its was unchanged from the last time the value was
		obtained. This is checked using CAS parameter, obtained when calling get",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
        'desc'   => "The key that will be associated with the item.",
      ),
      array(
        'name'   => "var",
        'type'   => Variant,
				'desc'   => "The variable to store. Strings and integers are stored as
				is, other types are stored serialized.",
      ),
      array(
        'name'   => "flag",
        'type'   => Int32,
				'desc'   => "Use MEMCACHE_COMPRESSED to store the item compressed (uses
				zlib).",
      ),
      array(
        'name'   => "expire",
        'type'   => Int32,
				'desc'   => "Expiration time of the item. If it's equal to zero, the
				item will never expire. You can also use Unix timestamp or a number of
				seconds starting from current time, but in the latter case the number of
				seconds may not exceed 2592000 (30 days).",
      ),
      array(
        'name'   => "cas_token",
        'type'   => Double,
        'desc'   => "Unique value associated with the existing item. Generated
				by memcache.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "set",
		'desc'   => "MemcachePool::set() stores an item var with key on the memcached
		server. Parameter expire is expiration time in seconds. If it's 0, the item
		never expires (but memcached server doesn't guarantee this item to be stored
		all the time, it could be deleted from the cache to make place for other
		items). You can use MEMCACHE_COMPRESSED constant as flag value if you want
		to use on-the-fly compression (uses zlib).\n\nRemember that resource
		variables (i.e. file and connection descriptors) cannot be stored in the
		cache, because they cannot be adequately represented in serialized state.
		Also you can use memcache_set() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
        'desc'   => "The key that will be associated with the item.",
      ),
      array(
        'name'   => "var",
        'type'   => Variant,
				'desc'   => "The variable to store. Strings and integers are stored as
				is, other types are stored serialized.",
      ),
      array(
        'name'   => "flag",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Use MEMCACHE_COMPRESSED to store the item compressed (uses
				zlib).",
      ),
      array(
        'name'   => "expire",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Expiration time of the item. If it's equal to zero, the
				item will never expire. You can also use Unix timestamp or a number of
				seconds starting from current time, but in the latter case the number of
				seconds may not exceed 2592000 (30 days).",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "replace",
		'desc'   => "MemcachePool::replace() should be used to replace value of existing
		item with key. In case if item with such key doesn't exists,
		MemcachePool::replace() returns FALSE. For the rest MemcachePool::replace() behaves
		similarly to MemcachePool::set(). Also you can use memcache_replace()
		function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
				'desc'   => "The key that will be associated with the item.",
      ),
      array(
        'name'   => "var",
        'type'   => Variant,
				'desc'   => "The variable to store. Strings and integers are stored as
				is, other types are stored serialized.",
      ),
      array(
        'name'   => "flag",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Use MEMCACHE_COMPRESSED to store the item compressed (uses
				zlib).",
      ),
      array(
        'name'   => "expire",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Expiration time of the item. If it's equal to zero, the
				item will never expire. You can also use Unix timestamp or a number of
				seconds starting from current time, but in the latter case the number of
				seconds may not exceed 2592000 (30 days).",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "get",
		'desc'   => "MemcachePool::get() returns previously stored data if an item with
		such key exists on the server at this moment.\n\nYou can pass array of keys
		to MemcachePool::get() to get array of values. The result array will contain
		only found key-value pairs.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
			'desc'   => "Returns the string associated with the key or FALSE on
			failure or if such key was not found.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => Variant,
        'desc'   => "The key or array of keys to fetch.",
      ),
      array(
        'name'   => "flags",
        'type'   => Variant | Reference,
        'value'  => "null",
				'desc'   => "If present, flags fetched along with the values will be
				written to this parameter. These flags are the same as the ones given to
				for example MemcachePool::set(). The lowest byte of the int is reserved for
				pecl/memcache internal usage (e.g. to indicate compression and
				serialization status).",
      ),
      array(
        'name'   => "cas",
        'type'   => Variant | Reference,
        'value'  => "null",
				'desc'   => "If present, cas key wil be fetched along with the values
				and will be written to this parameter.",
			),
    ),
  ));

DefineFunction(
  array(
    'name'   => "prefetch",
		'desc'   => "MemcachePool::prefetch() prefetch some keys, without actual
		returning the values of those keys. You need to call later to get, in order
		to fetch the results.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => Variant,
        'desc'   => "The key or array of keys to fetch.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "delete",
		'desc'   => "MemcachePool::delete() deletes item with the key. If parameter
		timeout is specified, the item will expire after timeout seconds. Also you
		can use memcache_delete() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
        'desc'   => "The key associated with the item to delete.",
      ),
      array(
        'name'   => "expire",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Execution time of the item. If it's equal to zero, the item
				will be deleted right away whereas if you set it to 30, the item will be
				deleted in 30 seconds.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "increment",
		'desc'   => "MemcachePool::increment() increments value of an item by the
		specified value. If item specified by key was not numeric and cannot be
		converted to a number, it will change its value to value.
		MemcachePool::increment() does not create an item if it doesn't already
		exist.\n\nDo not use MemcachePool::increment() with items that have been stored
		compressed because subsequent calls to MemcachePool::get() will fail. Also you
		can use memcache_increment() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns new items value on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
        'desc'   => "Key of the item to increment.",
      ),
      array(
        'name'   => "offset",
        'type'   => Int32,
        'value'  => "1",
        'desc'   => "Increment the item by value.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "decrement",
		'desc'   => "MemcachePool::decrement() decrements value of the item by value.
		Similarly to MemcachePool::increment(), current value of the item is being
		converted to numerical and after that value is substracted.\n\nNew item's
		value will not be less than zero.\n\nDo not use MemcachePool::decrement() with
		item, which was stored compressed, because consequent call to
		MemcachePool::get() will fail. MemcachePool::decrement() does not create an item if
		it didn't exist. Also you can use memcache_decrement() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns item's new value on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "key",
        'type'   => String,
        'desc'   => "Key of the item do decrement.",
      ),
      array(
        'name'   => "offset",
        'type'   => Int32,
        'value'  => "1",
        'desc'   => "Decrement the item by value.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "getversion",
		'desc'   => "MemcachePool::getVersion() returns a string with server's version
		number. Also you can use memcache_get_version() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns a string of server version number or FALSE on failure.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "flush",
		'desc'   => "MemcachePool::flush() immediately invalidates all existing items.
		MemcachePool::flush() doesn't actually free any resources, it only marks all the
		items as expired, so occupied memory will be overwritten by new items. Also
		you can use memcache_flush() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "expire",
        'type'   => Int32,
        'value'  => "0",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setoptimeout",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "timeoutms",
        'type'   => Int64,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "close",
		'desc'   => "MemcachePool::close() closes connection to memcached server. This
		function doesn't close persistent connections, which are closed only during
		web-server shutdown/restart. Also you can use memcache_close() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getserverstatus",
		'desc'   => "MemcachePool::getServerStatus() returns a the servers
		online/offline status. You can also use memcache_get_server_status()
		function.\n\nThis function has been added to Memcache version 2.1.0.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int32,
			'desc'   => "Returns a the servers status. 0 if server is failed, non-zero
			otherwise",
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
				'desc'   => "Point to the host where memcached is listening for
				connections.",
      ),
      array(
        'name'   => "port",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Point to the port where memcached is listening for
				connections.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setcompressthreshold",
		'desc'   => "MemcachePool::setCompressThreshold() enables automatic compression
		of large values. You can also use the memcache_set_compress_threshold()
		function.\n\nThis function has been added to Memcache version 2.0.0.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "threshold",
        'type'   => Int32,
				'desc'   => "Controls the minimum value length before attempting to
				compress automatically.",
      ),
      array(
        'name'   => "min_savings",
        'type'   => Double,
        'value'  => "0.2",
				'desc'   => "Specifies the minimum amount of savings to actually store
				the value compressed. The supplied value must be between 0 and 1.
				Default value is 0.2 giving a minimum 20% compression savings.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "getstats",
		'desc'   => "MemcachePool::getStats() returns an associative array with server's
		statistics. Array keys correspond to stats parameters and values to
		parameter's values. Also you can use memcache_get_stats() function.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
			'desc'   => "Returns an associative array of server statistics or FALSE on
			failure.",
    ),
    'args'   => array(
      array(
        'name'   => "type",
        'type'   => String,
        'value'  => "null_string",
				'desc'   => "The type of statistics to fetch. Valid values are {reset,
				malloc, maps, cachedump, slabs, items, sizes}. According to the
				memcached protocol spec these additional arguments \"are subject to
				change for the convenience of memcache developers\".",
      ),
      array(
        'name'   => "slabid",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Used in conjunction with type set to cachedump to identify
				the slab to dump from. The cachedump command ties up the server and is
				strictly to be used for debugging purposes.",
      ),
      array(
        'name'   => "limit",
        'type'   => Int32,
        'value'  => "100",
				'desc'   => "Used in conjunction with type set to cachedump to limit the
				number of entries to dump.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "getextendedstats",
		'desc'   => "MemcachePool::getExtendedStats() returns a two-dimensional
		associative array with server statistics. Array keys correspond to host:port
		of server and values contain the individual server statistics. A failed
		server will have its corresponding entry set to FALSE. You can also use the
		memcache_get_extended_stats() function.\n\nThis function has been added to
		Memcache version 2.0.0.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
			'desc'   => "Returns a two-dimensional associative array of server
			statistics or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "type",
        'type'   => String,
        'value'  => "null_string",
				'desc'   => "The type of statistics to fetch. Valid values are {reset,
				malloc, maps, cachedump, slabs, items, sizes}. According to the
				memcached protocol spec these additional arguments \"are subject to
				change for the convenience of memcache developers\".",
      ),
      array(
        'name'   => "slabid",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Used in conjunction with type set to cachedump to identify
				the slab to dump from. The cachedump command ties up the server and is
				strictly to be used for debugging purposes.",
      ),
      array(
        'name'   => "limit",
        'type'   => Int32,
        'value'  => "100",
				'desc'   => "Used in conjunction with type set to cachedump to limit the
				number of entries to dump.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setserverparams",
		'desc'   => "MemcachePool::setServerParams() changes server parameters at
		runtime. You can also use the memcache_set_server_params() function.\n\nThis
		function has been added to Memcache version 2.1.0.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
			'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
				'desc'   => "Point to the host where memcached is listening for
				connections.",
      ),
      array(
        'name'   => "port",
        'type'   => Int32,
        'value'  => "11211",
				'desc'   => "Point to the port where memcached is listening for
				connections.",
      ),
      array(
        'name'   => "timeout",
        'type'   => Double,
        'value'  => "0",
				'desc'   => "Value in seconds which will be used for connecting to the
				daemon. Think twice before changing the default value of 1 second - you
				can lose all the advantages of caching if your connection is too slow.",
      ),
      array(
        'name'   => "retry_interval",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Controls how often a failed server will be retried, the
				default value is 15 seconds. Setting this parameter to -1 disables
				automatic retry. Neither this nor the persistent parameter has any
				effect when the extension is loaded dynamically via dl().",
      ),
      array(
        'name'   => "status",
        'type'   => Boolean,
        'value'  => "true",
				'desc'   => "Controls if the server should be flagged as online. Setting
				this parameter to FALSE and retry_interval to -1 allows a failed server
				to be kept in the pool so as not to affect the key distribution
				algoritm. Requests for this server will then failover or fail
				immediately depending on the memcache.allow_failover setting. Default to
				TRUE, meaning the server should be considered online.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setfailurecallback",
		'desc'   => "MemcachePool::setfailurecallback() assigns a pool-specific failure
		callback which will be called when  a request fails. May be null in order to
		disable callbacks. The callback receive arguments like:
		function mycallback(host, tcp_port, udp_port, error, errnum) 
		where host and error are strings or null, the other params are integers.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
			'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "failure_callback",
        'type'   => Variant,
        'value'  => "null_variant",
				'desc'   => "Allows the user to specify a callback function to run upon
				encountering an error. The callback is run before failover is attempted.
				The function takes two parameters, the hostname and port of the failed
				server.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "addserver",
		'desc'   => "MemcachePool::addServer() adds a server to the connection pool. The
		connection, which was opened using MemcachePool::addServer() will be
		automatically closed at the end of script execution, you can also close it
		manually with MemcachePool::close(). You can also use the memcache_add_server()
		function.\n\nWhen using this method (as opposed to MemcachePool::connect() and
		MemcachePool::pconnect()) the network connection is not established until
		actually needed. Thus there is no overhead in adding a large number of
		servers to the pool, even though they might not all be used.\n\nFailover may
		occur at any stage in any of the methods, as long as other servers are
		available the request the user won't notice. Any kind of socket or Memcached
		server level errors (except out-of-memory) may trigger the failover. Normal
		client errors such as adding an existing key will not trigger a
		failover.\n\nThis function has been added to Memcache version 2.0.0.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
			'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
				'desc'   => "Point to the host where memcached is listening for
				connections. This parameter may also specify other transports like
				unix:///path/to/memcached.sock to use UNIX domain sockets, in this case
				port must also be set to 0.",
      ),
      array(
        'name'   => "tcp_port",
        'type'   => Int32,
        'value'  => "11211",
				'desc'   => "Point to the TCP port where memcached is listening for
				connections. Set this parameter to 0 when using UNIX or UDP domain sockets.",
      ),
       array(
        'name'   => "udp_port",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Point to the UDP port where memcached is listening for
				connections. Set this parameter to 0 when using UNIX od TCP domain sockets.",
      ),
      array(
        'name'   => "persistent",
        'type'   => Boolean,
        'value'  => "false",
				'desc'   => "Controls the use of a persistent connection. Default to
				TRUE.",
      ),
      array(
        'name'   => "weight",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Number of buckets to create for this server which in turn
				control its probability of it being selected. The probability is
				relative to the total weight of all servers.",
      ),
      array(
        'name'   => "timeout",
        'type'   => Double,
        'value'  => "1",
				'desc'   => "Value in seconds which will be used for connecting to the
				daemon. Think twice before changing the default value of 1 second - you
				can lose all the advantages of caching if your connection is too slow.",
      ),
      array(
        'name'   => "retry_interval",
        'type'   => Int32,
        'value'  => "0",
				'desc'   => "Controls how often a failed server will be retried, the
				default value is 15 seconds. Setting this parameter to -1 disables
				automatic retry. Neither this nor the persistent parameter has any
				effect when the extension is loaded dynamically via dl().\n\nEach failed
				connection struct has its own timeout and before it has expired the
				struct will be skipped when selecting backends to serve a request. Once
				expired the connection will be successfully reconnected or marked as
				failed for another retry_interval seconds. The typical effect is that
				each web server child will retry the connection about every
				retry_interval seconds when serving a page.",
      ),
      array(
        'name'   => "status",
        'type'   => Boolean,
        'value'  => "true",
				'desc'   => "Controls if the server should be flagged as online. Setting
				this parameter to FALSE and retry_interval to -1 allows a failed server
				to be kept in the pool so as not to affect the key distribution
				algorithm. Requests for this server will then failover or fail
				immediately depending on the memcache.allow_failover setting. Default to
				TRUE, meaning the server should be considered online.",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "sethashstrategy",
		'desc'   => "MemcachePool::setHashStrategy() allow you to change the default
		strategy for your MemcachePool instance",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "hashstrategy",
        'type'   => Int64,
				'desc'   => "Hash strategy",
      ),
    ),
  ));


DefineFunction(
  array(
    'name'   => "__destruct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
  ));


EndClass(
);

DefineConstant(array('name' => "MEMCACHE_COMPRESSED", 'type' => Int64,));
DefineConstant(array('name' => "MEMCACHE_SERIALIZED", 'type' => Int64,));
DefineConstant(array('name' => "MEMCACHE_STRATEGY_STANDARD", 'type' => Int64,));
DefineConstant(array('name' => "MEMCACHE_STRATEGY_CONSISTENT", 'type' => Int64,));
