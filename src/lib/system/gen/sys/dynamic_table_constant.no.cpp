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

#include <cpp/base/hphp_system.h>
#include <cpp/ext/ext.h>
#include <cpp/eval/eval.h>


using namespace std;

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64 k_PATHINFO_BASENAME;
extern const int64 k_OPENSSL_VERSION_NUMBER;
extern const int64 k_CURLOPT_HEADERFUNCTION;
extern const int64 k_CURLOPT_INFILESIZE;
extern const int64 k_MW_ResourceLimitError;
extern const int64 k_MW_MeanSquaredErrorMetric;
extern const Variant k_NULL;
extern const int64 k_MW_ColorBurnCompositeOp;
extern const int64 k_PREG_SPLIT_DELIM_CAPTURE;
extern const int64 k_MW_ImpulseNoise;
extern const int64 k_PREG_GREP_INVERT;
extern const int64 k_MYSQLI_USE_RESULT;
extern const int64 k_T_COMMENT;
extern const int64 k_LOG_EMERG;
extern const int64 k_SIGXFSZ;
extern const int64 k_SOCKET_ENOMSG;
extern const int64 k_CURLOPT_INFILE;
extern const int64 k_IMAGETYPE_WBMP;
extern const int64 k_T_PRINT;
extern const int64 k_STREAM_REPORT_ERRORS;
extern const int64 k_PATHINFO_EXTENSION;
extern const int64 k_DEBUG_LOG_TRACE;
extern const int64 k_PHP_URL_PATH;
extern const int64 k_OCI_FETCHSTATEMENT_BY_ROW;
extern const int64 k_MW_MinEvaluateOperator;
extern const int64 k_PHP_URL_PASS;
extern const double k_M_2_SQRTPI;
extern const int64 k_XML_OPTION_CASE_FOLDING;
extern const int64 k_MYSQLI_TYPE_LONGLONG;
extern const int64 k_T_WHILE;
extern const int64 k_MW_NoCompositeOp;
extern const int64 k_T_ARRAY;
extern const int64 k_MW_HWBColorspace;
extern const int64 k_CURLOPT_SSL_VERIFYPEER;
extern const int64 k_U_UNDEFINED_SEGMENT_REFERENCE;
extern const int64 k_MW_UnframeMode;
extern const int64 k_MW_PeakAbsoluteErrorMetric;
extern const int64 k_U_REGEX_INVALID_BACK_REF;
extern const int64 k_MW_GreenChannel;
extern const int64 k_CURLOPT_POSTQUOTE;
extern const int64 k_OCI_D_FILE;
extern const int64 k_OPENSSL_CIPHER_RC2_128;
extern const int64 k_MW_CharPixel;
extern const int64 k_IMAGETYPE_TIFF_II;
extern const int64 k_INFO_MODULES;
extern const int64 k_CURLOPT_BUFFERSIZE;
extern const int64 k_MW_ShadePreview;
extern const int64 k_STREAM_SOCK_SEQPACKET;
extern const int64 k_SOCKET_ESPIPE;
extern const int64 k_DNS_NAPTR;
extern const int64 k_MW_AnyStretch;
extern const int64 k_T_ECHO;
extern const int64 k_IDNA_MALLOC_ERROR;
extern const int64 k_MYSQLI_GROUP_FLAG;
extern const int64 k_MYSQLI_REPORT_INDEX;
extern const int64 k_CREDITS_QA;
extern const int64 k_IMAGETYPE_TIFF_MM;
extern const int64 k_MW_NormalStretch;
extern const int64 k_MW_UndefinedPixel;
extern const int64 k_MW_UndefinedCap;
extern const int64 k_MYSQLI_NOT_NULL_FLAG;
extern const int64 k_IMAGETYPE_JPEG2000;
extern const int64 k_XSD_BASE64BINARY;
extern const int64 k_POSIX_W_OK;
extern const int64 k_OCI_B_BFILE;
extern const int64 k_XML_ERROR_UNKNOWN_ENCODING;
extern const int64 k_SIGABRT;
extern const int64 k_LIBXML_XINCLUDE;
extern const int64 k_MW_UnrecognizedDispose;
extern const int64 k_MW_OpacityChannel;
extern const int64 k_INFO_LICENSE;
extern const int64 k_MW_ColorizeCompositeOp;
extern const int64 k_MW_OutCompositeOp;
extern const int64 k_DNS_AAAA;
extern const int64 k_CURLE_FTP_COULDNT_STOR_FILE;
extern const int64 k_MW_DissolveCompositeOp;
extern const int64 k_GRAPHEME_EXTR_MAXBYTES;
extern const int64 k_IMAGETYPE_BMP;
extern const int64 k_CURLCLOSEPOLICY_CALLBACK;
extern const int64 k_MW_RootMeanSquaredErrorMetric;
extern const int64 k_SIGBABY;
extern const int64 k_MW_TrueColorType;
extern const int64 k_ASSERT_CALLBACK;
extern const int64 k_XSD_NEGATIVEINTEGER;
extern const int64 k_CURLINFO_CONNECT_TIME;
extern const int64 k_CASE_LOWER;
extern const int64 k_U_MALFORMED_EXPONENTIAL_PATTERN;
extern const int64 k_U_UNSUPPORTED_PROPERTY;
extern const int64 k_SOCKET_ENOSPC;
extern const double k_M_PI;
extern const int64 k_MSG_OOB;
extern const int64 k_LIBXML_NSCLEAN;
extern const int64 k_MW_JPEGCompression;
extern const int64 k_DOM_INVALID_CHARACTER_ERR;
extern const int64 k_CURLOPT_LOW_SPEED_LIMIT;
extern const int64 k_MB_CASE_LOWER;
extern const int64 k_CURLE_FTP_CANT_RECONNECT;
extern const int64 k_OCI_FETCHSTATEMENT_BY_COLUMN;
extern const int64 k_CURLOPT_POSTFIELDS;
extern const int64 k_MW_YCCColorspace;
extern const int64 k_SOCKET_EMULTIHOP;
extern const int64 k_T_BOOLEAN_AND;
extern const int64 k_OCI_TEMP_BLOB;
extern const int64 k_CREDITS_ALL;
extern const int64 k_STREAM_URL_STAT_LINK;
extern const int64 k_MW_UndefinedResolution;
extern const int64 k_SOCKET_ENOSTR;
extern const int64 k_STREAM_NOTIFY_FAILURE;
extern const int64 k_XML_ERROR_BINARY_ENTITY_REF;
extern const StaticString k_MCRYPT_IDEA;
extern const int64 k_U_REGEX_ERROR_LIMIT;
extern const int64 k_CURLE_SSL_CIPHER;
extern const int64 k_CURLOPT_PUT;
extern const int64 k_SOCK_DGRAM;
extern const int64 k_XSD_UNSIGNEDLONG;
extern const int64 k_T_CLASS;
extern const int64 k_T_WHITESPACE;
extern const int64 k_SOCKET_EISDIR;
extern const int64 k_SOCKET_ENOSYS;
extern const StaticString k_LIBXML_DOTTED_VERSION;
extern const int64 k_MW_LeftAlign;
extern const int64 k_SOCKET_ENOTTY;
extern const int64 k_LDAP_OPT_PROTOCOL_VERSION;
extern const int64 k_CURLM_OUT_OF_MEMORY;
extern const int64 k_SOCKET_EWOULDBLOCK;
extern const int64 k_DOM_INVALID_STATE_ERR;
extern const int64 k_CURLOPT_DNS_USE_GLOBAL_CACHE;
extern const int64 k_U_MISPLACED_ANCHOR_START;
extern const int64 k_IMAGETYPE_GIF;
extern const int64 k_POSIX_X_OK;
extern const int64 k_CURLM_OK;
extern const int64 k_MW_JPEGPreview;
extern const int64 k_DEBUG_LOG_DEFAULT;
extern const int64 k_MCRYPT_DEV_RANDOM;
extern const int64 k_OPENSSL_KEYTYPE_EC;
extern const int64 k_OPENSSL_KEYTYPE_DH;
extern const int64 k_SOCKET_ESOCKTNOSUPPORT;
extern const int64 k_CURLCLOSEPOLICY_SLOWEST;
extern const int64 k_MW_UndefinedType;
extern const int64 k_STREAM_FILTER_WRITE;
extern const int64 k_SEEK_SET;
extern const int64 k_MYSQLI_TIMESTAMP_FLAG;
extern const int64 k_CURLINFO_SSL_VERIFYRESULT;
extern const int64 k_SOCKET_EREMOTE;
extern const int64 k_MYSQLI_TYPE_LONG;
extern const int64 k_CURL_HTTP_VERSION_NONE;
extern const int64 k_MW_SaturationPreview;
extern const int64 k_CURLINFO_HTTP_CODE;
extern const int64 k_IMAGETYPE_JB2;
extern const int64 k_MW_MaxEvaluateOperator;
extern const int64 k_OCI_SYSOPER;
extern const int64 k_CURLOPT_PROXYUSERPWD;
extern const int64 k_MW_UnderlineDecoration;
extern const int64 k_T_IS_NOT_EQUAL;
extern const int64 k_ERA_D_T_FMT;
extern const int64 k_MYSQLI_TYPE_FLOAT;
extern const int64 k_IMAGETYPE_IFF;
extern const int64 k_MW_DstOverCompositeOp;
extern const int64 k_CREDITS_GENERAL;
extern const int64 k_MW_YCbCrColorspace;
extern const int64 k_SOCKET_ENETDOWN;
extern const int64 k_MW_DullPreview;
extern const int64 k_IMG_FILTER_BRIGHTNESS;
extern const int64 k_STREAM_MUST_SEEK;
extern const int64 k_GLOB_NOSORT;
extern const int64 k_MW_CorruptImageFatalError;
extern const int64 k_CURLFTPSSL_CONTROL;
extern const int64 k_DNS_HINFO;
extern const int64 k_U_BUFFER_OVERFLOW_ERROR;
extern const int64 k_U_INVALID_STATE_ERROR;
extern const int64 k_FILE_SKIP_EMPTY_LINES;
extern const int64 k_CURLMSG_DONE;
extern const int64 k_XML_ATTRIBUTE_ENUMERATION;
extern const int64 k_CURLINFO_SIZE_DOWNLOAD;
extern const int64 k_MW_RegistryWarning;
extern const int64 k_MW_NormalStyle;
extern const int64 k_CURLOPT_VERBOSE;
extern const int64 k_T_VARIABLE;
extern const int64 k_CURLE_FTP_BAD_DOWNLOAD_RESUME;
extern const int64 k_T_REQUIRE_ONCE;
extern const int64 k_MW_StreamWarning;
extern const int64 k_OCI_TEMP_CLOB;
extern const StaticString k_PHP_BINDIR;
extern const int64 k_MYSQLI_RPL_MASTER;
extern const int64 k_ICONV_MIME_DECODE_STRICT;
extern const int64 k_CURLOPT_URL;
extern const StaticString k_MCRYPT_GOST;
extern const int64 k_MW_QuadraticFilter;
extern const int64 k_MW_OpaqueOpacity;
extern const int64 k_U_RULE_MASK_ERROR;
extern const int64 k_MYSQLI_REPORT_STRICT;
extern const int64 k_MW_UndefinedStyle;
extern const int64 k_STREAM_NOTIFY_RESOLVE;
extern const int64 k_STREAM_IPPROTO_IP;
extern const int64 k_MW_NoCompression;
extern const int64 k_IMAGETYPE_JP2;
extern const int64 k_XSD_DURATION;
extern const int64 k_T_CLOSE_TAG;
extern const StaticString k_DATE_RFC822;
extern const int64 k_SOCKET_EL2NSYNC;
extern const int64 k_T_BREAK;
extern const int64 k_IMAGETYPE_JPC;
extern const int64 k_CURL_NETRC_OPTIONAL;
extern const int64 k_LC_TIME;
extern const int64 k_CURLE_FILESIZE_EXCEEDED;
extern const int64 k_DNS_A6;
extern const StaticString k_DATE_RFC850;
extern const int64 k_T_ELSE;
extern const int64 k_U_INVARIANT_CONVERSION_ERROR;
extern const int64 k_XSD_IDREFS;
extern const int64 k_T_OBJECT_CAST;
extern const int64 k_MW_FaxCompression;
extern const int64 k_CURLOPT_HTTP200ALIASES;
extern const int64 k_SIGALRM;
extern const int64 k_IMAGETYPE_JPX;
extern const int64 k_CURLE_BAD_PASSWORD_ENTERED;
extern const int64 k_SOAP_ENC_OBJECT;
extern const int64 k_T_FILE;
extern const int64 k_CREDITS_GROUP;
extern const int64 k_LOG_AUTH;
extern const int64 k_SOCKET_EDQUOT;
extern const int64 k_XSD_QNAME;
extern const int64 k_CURLOPT_TIMEOUT;
extern const int64 k_U_MISPLACED_CURSOR_OFFSET;
extern const int64 k_SOAP_ENCODED;
extern const int64 k_MW_SouthGravity;
extern const int64 k_PHP_URL_PORT;
extern const int64 k_LIBXML_NOEMPTYTAG;
extern const double k_M_SQRT2;
extern const double k_M_SQRT3;
extern const int64 k_MW_FileOpenWarning;
extern const int64 k_CURLOPT_UNRESTRICTED_AUTH;
extern const int64 k_D_T_FMT;
extern const int64 k_FILE_NO_DEFAULT_CONTEXT;
extern const int64 k_LOG_NOTICE;
extern const int64 k_MW_BackgroundDispose;
extern const int64 k_U_DIFFERENT_UCA_VERSION;
extern const int64 k_GLOB_BRACE;
extern const int64 k_E_COMPILE_WARNING;
extern const int64 k_MYSQLI_REPORT_ALL;
extern const int64 k_LIBXML_ERR_WARNING;
extern const int64 k_PSFS_PASS_ON;
extern const int64 k_STREAM_SOCK_RAW;
extern const int64 k_MW_SaturateCompositeOp;
extern const int64 k_INFO_ENVIRONMENT;
extern const int64 k_STREAM_SOCK_RDM;
extern const int64 k_U_INTERNAL_TRANSLITERATOR_ERROR;
extern const int64 k_FILE_IGNORE_NEW_LINES;
extern const int64 k_MW_OilPaintPreview;
extern const int64 k_CURLOPT_SSLENGINE;
extern const int64 k_SO_SNDBUF;
extern const int64 k_SOCKET_EISNAM;
extern const StaticString k_PATH_SEPARATOR;
extern const int64 k_MW_BlobWarning;
extern const int64 k_MW_RelativeIntent;
extern const int64 k_ERA_D_FMT;
extern const int64 k_MW_WarningException;
extern const int64 k_CURLINFO_NAMELOOKUP_TIME;
extern const int64 k_SOCKET_ESRMNT;
extern const int64 k_MYSQL_BOTH;
extern const int64 k_MW_ConfigureFatalError;
extern const int64 k_IMG_COLOR_STYLEDBRUSHED;
extern const int64 k_CURLCLOSEPOLICY_LEAST_TRAFFIC;
extern const int64 k_SOCKET_EREMOTEIO;
extern const int64 k_XSD_INTEGER;
extern const int64 k_XML_ERROR_PARTIAL_CHAR;
extern const int64 k_DNS_MX;
extern const int64 k_DNS_NS;
extern const int64 k_MW_FileOpenFatalError;
extern const int64 k_LOG_PERROR;
extern const int64 k_MW_SemiExpandedStretch;
extern const int64 k_MW_LABColorspace;
extern const int64 k_MW_HSLColorspace;
extern const int64 k_CURLOPT_FTPLISTONLY;
extern const int64 k_SOCKET_EMSGSIZE;
extern const int64 k_E_CORE_WARNING;
extern const int64 k_LOG_CONS;
extern const int64 k_CURLOPT_FAILONERROR;
extern const int64 k_MW_HardLightCompositeOp;
extern const int64 k_MW_TypeError;
extern const int64 k_T_SWITCH;
extern const int64 k_SOCKET_ECOMM;
extern const int64 k_T_REQUIRE;
extern const int64 k_XML_NOTATION_NODE;
extern const int64 k_T_DEFAULT;
extern const int64 k_IMG_JPEG;
extern const int64 k_DEBUG_LOG_NONE;
extern const int64 k_U_BRK_INTERNAL_ERROR;
extern const int64 k_CONNECTION_NORMAL;
extern const int64 k_MW_CopyBlueCompositeOp;
extern const int64 k_SIGCHLD;
extern const int64 k_U_BRK_MALFORMED_RULE_TAG;
extern const int64 k_EXTR_OVERWRITE;
extern const int64 k_INI_SYSTEM;
extern const StaticString k_XSD_1999_NAMESPACE;
extern const int64 k_X509_PURPOSE_ANY;
extern const int64 k_IMAGETYPE_PNG;
extern const int64 k_X509_PURPOSE_SSL_CLIENT;
extern const int64 k_STREAM_NOTIFY_SEVERITY_WARN;
extern const int64 k_LOG_ALERT;
extern const int64 k_MW_FileResource;
extern const int64 k_CURLE_SSL_CERTPROBLEM;
extern const int64 k_MSG_NOERROR;
extern const int64 k_XML_PI_NODE;
extern const int64 k_MW_ZipCompression;
extern const int64 k_LOG_CRIT;
extern const int64 k_CURLOPT_IPRESOLVE;
extern const int64 k_IMAGETYPE_PSD;
extern const int64 k_MW_ModuleWarning;
extern const StaticString k_PCRE_VERSION;
extern const int64 k_CURLOPT_NOBODY;
extern const int64 k_CURLOPT_EGDSOCKET;
extern const int64 k_CURLOPT_HTTPGET;
extern const int64 k_MW_HueCompositeOp;
extern const int64 k_T_EVAL;
extern const int64 k_LDAP_OPT_REFERRALS;
extern const int64 k_CURLE_UNSUPPORTED_PROTOCOL;
extern const int64 k_CURLE_SSL_PEER_CERTIFICATE;
extern const int64 k_T_CLONE;
extern const int64 k_SOCKET_EBUSY;
extern const int64 k_MW_SemiCondensedStretch;
extern const int64 k_CURL_VERSION_IPV6;
extern const int64 k_XML_ATTRIBUTE_DECL_NODE;
extern const int64 k_LOG_CRON;
extern const int64 k_MW_ReduceNoisePreview;
extern const int64 k_T_IMPLEMENTS;
extern const int64 k_T_FUNCTION;
extern const StaticString k_MCRYPT_DES;
extern const int64 k_MCRYPT_ENCRYPT;
extern const int64 k_INFO_CONFIGURATION;
extern const int64 k_IMG_FILTER_EDGEDETECT;
extern const int64 k_ABDAY_1;
extern const int64 k_SOCKET_ECONNRESET;
extern const int64 k_ABDAY_2;
extern const int64 k_ABDAY_3;
extern const int64 k_ABDAY_4;
extern const int64 k_STREAM_IS_URL;
extern const int64 k_ABDAY_5;
extern const int64 k_MW_UltraExpandedStretch;
extern const StaticString k_MCRYPT_3DES;
extern const int64 k_ABDAY_6;
extern const int64 k_ABDAY_7;
extern const int64 k_U_MULTIPLE_DECIMAL_SEPERATORS;
extern const int64 k_STREAM_CRYPTO_METHOD_TLS_SERVER;
extern const int64 k_MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH;
extern const int64 k_U_INVALID_PROPERTY_PATTERN;
extern const int64 k_U_TOO_MANY_ALIASES_ERROR;
extern const int64 k_PHP_URL_FRAGMENT;
extern const int64 k_U_UNTERMINATED_QUOTE;
extern const int64 k_U_MISPLACED_QUANTIFIER;
extern const StaticString k_DATE_W3C;
extern const int64 k_LC_MONETARY;
extern const int64 k_MW_CoderWarning;
extern const int64 k_SOCKET_ENOTCONN;
extern const int64 k_DNS_CNAME;
extern const int64 k_T_CURLY_OPEN;
extern const int64 k_U_BRK_UNRECOGNIZED_OPTION;
extern const int64 k_CURLE_OBSOLETE;
extern const int64 k_IMG_ARC_NOFILL;
extern const int64 k_U_INVALID_CHAR_FOUND;
extern const int64 k_MW_NonZeroRule;
extern const int64 k_MW_ConfigureWarning;
extern const int64 k_U_BRK_UNCLOSED_SET;
extern const int64 k_SORT_LOCALE_STRING;
extern const int64 k_MW_MitchellFilter;
extern const int64 k_XML_ERROR_NO_ELEMENTS;
extern const int64 k_U_INTERNAL_PROGRAM_ERROR;
extern const int64 k_IMAGETYPE_SWC;
extern const int64 k_IMAGETYPE_SWF;
extern const int64 k_MW_OverlayCompositeOp;
extern const StaticString k_DATE_RSS;
extern const int64 k_MW_sRGBColorspace;
extern const int64 k_YESEXPR;
extern const int64 k_IMG_EFFECT_NORMAL;
extern const int64 k_LOG_NOWAIT;
extern const int64 k_MW_UndefinedMethod;
extern const int64 k_T_EXIT;
extern const int64 k_MYSQLI_BLOB_FLAG;
extern const int64 k_T_NUM_STRING;
extern const int64 k_E_NOTICE;
extern const int64 k_IMAGETYPE_XBM;
extern const int64 k_CRYPT_STD_DES;
extern const int64 k_PRIO_USER;
extern const int64 k_STREAM_PF_UNIX;
extern const int64 k_MW_CoderFatalError;
extern const int64 k_XSD_GYEARMONTH;
extern const int64 k_CURLE_HTTP_PORT_FAILED;
extern const int64 k_CURLOPT_FTPAPPEND;
extern const int64 k_CURLOPT_FTP_CREATE_MISSING_DIRS;
extern const int64 k_MYSQLI_TYPE_NULL;
extern const int64 k_CURLINFO_CONTENT_TYPE;
extern const int64 k_XSD_NAME;
extern const int64 k_T_CONCAT_EQUAL;
extern const int64 k_PSFS_FLAG_NORMAL;
extern const int64 k_CURLE_HTTP_RANGE_ERROR;
extern const int64 k_U_MALFORMED_VARIABLE_DEFINITION;
extern const int64 k_XML_ENTITY_REF_NODE;
extern const int64 k_CLOCK_MONOTONIC;
extern const int64 k_T_INLINE_HTML;
extern const int64 k_MYSQLI_CLIENT_FOUND_ROWS;
extern const int64 k_CURLE_URL_MALFORMAT_USER;
extern const int64 k_CURLOPT_SSLKEYTYPE;
extern const int64 k_U_FMT_PARSE_ERROR_START;
extern const int64 k_CURL_VERSION_LIBZ;
extern const int64 k_E_STRICT;
extern const StaticString k_MCRYPT_TRIPLEDES;
extern const int64 k_STREAM_NOTIFY_PROGRESS;
extern const int64 k_MW_UndefinedStretch;
extern const int64 k_MW_TransparentOpacity;
extern const int64 k_SOCKET_ENOTBLK;
extern const int64 k_XSD_IDREF;
extern const int64 k_OCI_RETURN_LOBS;
extern const int64 k_MW_TriangleFilter;
extern const int64 k_SIGCONT;
extern const int64 k_CURLOPT_HTTPPROXYTUNNEL;
extern const int64 k_CURL_TIMECOND_LASTMOD;
extern const int64 k_SOCKET_EADDRINUSE;
extern const int64 k_MON_10;
extern const int64 k_MON_11;
extern const int64 k_MCC_ACCESSPOINT_DOWN;
extern const int64 k_MON_12;
extern const int64 k_XSD_INT;
extern const int64 k_OCI_B_CFILEE;
extern const int64 k_U_MISMATCHED_SEGMENT_DELIMITERS;
extern const int64 k_MYSQLI_TYPE_TIMESTAMP;
extern const int64 k_T_STATIC;
extern const int64 k_T_HALT_COMPILER;
extern const int64 k_SOCKET_ETOOMANYREFS;
extern const int64 k_XSD_ENTITY;
extern const int64 k_MW_XorCompositeOp;
extern const int64 k_STREAM_SERVER_BIND;
extern const int64 k_DOM_NO_DATA_ALLOWED_ERR;
extern const int64 k_OCI_LOB_BUFFER_FREE;
extern const int64 k_MW_GaussianNoise;
extern const StaticString k_MCRYPT_MARS;
extern const int64 k_LIBXML_DTDATTR;
extern const int64 k_T_BOOLEAN_OR;
extern const int64 k_U_BRK_SEMICOLON_EXPECTED;
extern const int64 k_SOCKET_ENOTDIR;
extern const int64 k_MW_MagentaChannel;
extern const int64 k_MYSQLI_REPORT_OFF;
extern const int64 k_CURLOPT_FOLLOWLOCATION;
extern const int64 k_CURLE_URL_MALFORMAT;
extern const int64 k_MYSQLI_CLIENT_INTERACTIVE;
extern const int64 k_MW_LeftShiftEvaluateOperator;
extern const int64 k_CURLOPT_MUTE;
extern const int64 k_MW_DrawWarning;
extern const bool k_TRUE;
extern const int64 k_LOG_SYSLOG;
extern const int64 k_IMG_FILTER_GAUSSIAN_BLUR;
extern const int64 k_T_ENCAPSED_AND_WHITESPACE;
extern const int64 k_STREAM_SERVER_LISTEN;
extern const int64 k_MW_SrcAtopCompositeOp;
extern const int64 k_SOCK_STREAM;
extern const int64 k_MW_ThresholdPreview;
extern const int64 k_XML_OPTION_SKIP_WHITE;
extern const int64 k_CURLE_READ_ERROR;
extern const int64 k_MW_MirrorVirtualPixelMethod;
extern const int64 k_MW_DespecklePreview;
extern const int64 k_U_PARSE_ERROR_START;
extern const int64 k_PNG_ALL_FILTERS;
extern const int64 k_XSD_LONG;
extern const int64 k_DEBUG_LOG_POST;
extern const int64 k_T_IS_NOT_IDENTICAL;
extern const int64 k_X509_PURPOSE_NS_SSL_SERVER;
extern const double k_M_LN2;
extern const int64 k_MW_SoftLightCompositeOp;
extern const double k_M_LN10;
extern const int64 k_T_ABSTRACT;
extern const int64 k_T_LNUMBER;
extern const int64 k_DEBUG_LOG_REFERER;
extern const int64 k_MSG_PEEK;
extern const StaticString k_MCRYPT_TWOFISH;
extern const int64 k_SIG_DFL;
extern const int64 k_MW_DisplaceCompositeOp;
extern const int64 k_U_ERROR_LIMIT;
extern const int64 k_ASSERT_QUIET_EVAL;
extern const int64 k_PKCS7_NOINTERN;
extern const int64 k_MW_LongPixel;
extern const int64 k_CRYPT_MD5;
extern const int64 k_MYSQLI_TYPE_SET;
extern const int64 k_LDAP_OPT_MATCHED_DN;
extern const int64 k_CURLOPT_USERPWD;
extern const StaticString k_DEFAULT_INCLUDE_PATH;
extern const int64 k_E_USER_NOTICE;
extern const int64 k_MW_CharcoalDrawingPreview;
extern const int64 k_MW_SubtractCompositeOp;
extern const int64 k_MW_CondensedStretch;
extern const int64 k_MW_CenterGravity;
extern const int64 k_CURLINFO_SPEED_UPLOAD;
extern const int64 k_GRAPHEME_EXTR_COUNT;
extern const int64 k_T_INCLUDE_ONCE;
extern const int64 k_MSG_DONTROUTE;
extern const int64 k_MW_OptimizeType;
extern const int64 k_WUNTRACED;
extern const int64 k_U_INVALID_ID;
extern const int64 k_CREDITS_MODULES;
extern const int64 k_MW_DivideEvaluateOperator;
extern const StaticString k_DATE_RFC1036;
extern const int64 k_U_INDEX_OUTOFBOUNDS_ERROR;
extern const int64 k_UPLOAD_ERR_FORM_SIZE;
extern const int64 k_LC_ALL;
extern const int64 k_XML_ERROR_INVALID_TOKEN;
extern const int64 k_CURLE_ABORTED_BY_CALLBACK;
extern const int64 k_SO_OOBINLINE;
extern const int64 k_MW_UndefinedMetric;
extern const StaticString k_DATE_RFC1123;
extern const int64 k_EXTR_PREFIX_SAME;
extern const int64 k_XML_DTD_NODE;
extern const int64 k_U_REGEX_MAX_LT_MIN;
extern const int64 k_MW_HSBColorspace;
extern const int64 k_MW_ForgetGravity;
extern const StaticString k_MCRYPT_RC2;
extern const int64 k_E_PARSE;
extern const int64 k_MW_ColorSeparationType;
extern const int64 k_MYSQLI_TYPE_DOUBLE;
extern const int64 k_MW_MonitorFatalError;
extern const StaticString k_MCRYPT_RC6;
extern const int64 k_CURLOPT_STDERR;
extern const int64 k_CURLE_MALFORMAT_USER;
extern const int64 k_CURLAUTH_ANY;
extern const int64 k_T_BOOL_CAST;
extern const int64 k_MW_StreamError;
extern const int64 k_XML_ERROR_TAG_MISMATCH;
extern const int64 k_LDAP_DEREF_FINDING;
extern const int64 k_MW_ResourceLimitWarning;
extern const int64 k_MW_XYZColorspace;
extern const int64 k_MW_ConcatenateMode;
extern const int64 k_SIG_ERR;
extern const int64 k_XHPROF_FLAGS_MEMORY;
extern const int64 k_GLOB_NOESCAPE;
extern const int64 k_T_LOGICAL_OR;
extern const int64 k_T_DOC_COMMENT;
extern const int64 k_XHPROF_FLAGS_NO_BUILTINS;
extern const int64 k_STREAM_FILTER_READ;
extern const int64 k_SORT_REGULAR;
extern const int64 k_MW_ThresholdCompositeOp;
extern const int64 k_CURLOPT_RESUME_FROM;
extern const int64 k_MW_RegistryFatalError;
extern const int64 k_FNM_CASEFOLD;
extern const int64 k_PHP_NORMAL_READ;
extern const int64 k_MW_MonitorError;
extern const int64 k_UPLOAD_ERR_NO_TMP_DIR;
extern const int64 k_IMG_EFFECT_ALPHABLEND;
extern const int64 k_CURLINFO_FILETIME;
extern const int64 k_T_XOR_EQUAL;
extern const int64 k_CURLOPT_FTPPORT;
extern const int64 k_U_MULTIPLE_ANTE_CONTEXTS;
extern const int64 k_MW_ImageWarning;
extern const int64 k_SIG_IGN;
extern const int64 k_XML_ERROR_INCORRECT_ENCODING;
extern const int64 k_MW_CorruptImageWarning;
extern const int64 k_AM_STR;
extern const int64 k_MW_YIQColorspace;
extern const int64 k_SOCKET_ENOTEMPTY;
extern const int64 k_SOAP_COMPRESSION_GZIP;
extern const int64 k_T_CONST;
extern const int64 k_UPLOAD_ERR_CANT_WRITE;
extern const int64 k_UPLOAD_ERR_PARTIAL;
extern const int64 k_WNOHANG;
extern const int64 k_CURLE_COULDNT_CONNECT;
extern const int64 k_MW_PlusCompositeOp;
extern const int64 k_CURLINFO_REDIRECT_TIME;
extern const int64 k_PNG_FILTER_NONE;
extern const int64 k_XML_ERROR_ASYNC_ENTITY;
extern const int64 k_MW_AtopCompositeOp;
extern const int64 k_PHP_OUTPUT_HANDLER_END;
extern const int64 k_PSFS_FLAG_FLUSH_CLOSE;
extern const int64 k_STREAM_CLIENT_PERSISTENT;
extern const double k_M_LNPI;
extern const int64 k_U_USING_DEFAULT_WARNING;
extern const int64 k_CURLFTPSSL_NONE;
extern const int64 k_CURLOPT_PORT;
extern const int64 k_SOCKET_EIDRM;
extern const int64 k_APACHE_MAP;
extern const int64 k_MCC_DOWN_ON_TIMEOUT;
extern const int64 k_CURLOPT_POST;
extern const int64 k_MYSQLI_SET_CHARSET_NAME;
extern const double k_M_SQRT1_2;
extern const int64 k_MW_BZipCompression;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv23_CLIENT;
extern const int64 k_LOG_NDELAY;
extern const int64 k_T_AS;
extern const int64 k_U_STATE_OLD_WARNING;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv2_CLIENT;
extern const int64 k_T_LOGICAL_AND;
extern const int64 k_DEBUG_LOG_ALL;
extern const int64 k_IMG_FILTER_NEGATE;
extern const int64 k_U_MISSING_OPERATOR;
extern const int64 k_T_DO;
extern const int64 k_STREAM_CLIENT_CONNECT;
extern const int64 k_SIGVTALRM;
extern const int64 k_PREG_BACKTRACK_LIMIT_ERROR;
extern const int64 k_T_IF;
extern const int64 k_MW_UndefinedPathUnits;
extern const int64 k_MW_AddCompositeOp;
extern const int64 k_CURLOPT_PROXYPORT;
extern const int64 k_U_SAFECLONE_ALLOCATED_WARNING;
extern const int64 k_PNG_FILTER_PAETH;
extern const int64 k_UPLOAD_ERR_EXTENSION;
extern const StaticString k_GD_EXTRA_VERSION;
extern const int64 k_U_CE_NOT_FOUND_ERROR;
extern const int64 k_SOCKET_ESHUTDOWN;
extern const int64 k_XSD_ANYTYPE;
extern const StaticString k_MCRYPT_LOKI97;
extern const int64 k_LOG_ODELAY;
extern const int64 k_ULOC_VALID_LOCALE;
extern const int64 k_MW_SpiffPreview;
extern const int64 k_MYSQLI_TYPE_VAR_STRING;
extern const int64 k_T_MINUS_EQUAL;
extern const int64 k_CURLOPT_BINARYTRANSFER;
extern const StaticString k_DATE_ATOM;
extern const int64 k_U_MULTIPLE_EXPONENTIAL_SYMBOLS;
extern const StaticString k_MCRYPT_BLOWFISH_COMPAT;
extern const int64 k_CURLOPT_NOSIGNAL;
extern const int64 k_MW_AddNoisePreview;
extern const int64 k_HTML_SPECIALCHARS;
extern const int64 k_MW_AreaResource;
extern const int64 k_T_PLUS_EQUAL;
extern const int64 k_CURLE_RECV_ERROR;
extern const int64 k_MW_FrameMode;
extern const int64 k_DAY_1;
extern const int64 k_DAY_2;
extern const int64 k_DAY_3;
extern const int64 k_CURLOPT_NOPROGRESS;
extern const int64 k_DAY_4;
extern const int64 k_MW_CopyRedCompositeOp;
extern const int64 k_DAY_5;
extern const int64 k_DAY_6;
extern const int64 k_DAY_7;
extern const int64 k_STREAM_CLIENT_ASYNC_CONNECT;
extern const int64 k_MW_BrightnessPreview;
extern const int64 k_PHP_URL_USER;
extern const StaticString k_PEAR_EXTENSION_DIR;
extern const int64 k_PHP_URL_SCHEME;
extern const int64 k_MW_UltraCondensedStretch;
extern const StaticString k_PHP_SYSCONFDIR;
extern const int64 k_U_REGEX_UNIMPLEMENTED;
extern const int64 k_T_SL;
extern const int64 k_MW_GammaPreview;
extern const int64 k_SOAP_USE_XSI_ARRAY_TYPE;
extern const int64 k_T_SR;
extern const int64 k_STREAM_MKDIR_RECURSIVE;
extern const int64 k_XML_ATTRIBUTE_NMTOKEN;
extern const int64 k_U_COLLATOR_VERSION_MISMATCH;
extern const int64 k_SOCKET_E2BIG;
extern const StaticString k_ICONV_VERSION;
extern const int64 k_POSIX_F_OK;
extern const int64 k_PKCS7_BINARY;
extern const int64 k_U_UNSUPPORTED_ERROR;
extern const int64 k_IMG_COLOR_TRANSPARENT;
extern const double k_M_1_PI;
extern const int64 k_MYSQLI_STORE_RESULT;
extern const int64 k_MW_WestGravity;
extern const int64 k_GLOB_ERR;
extern const int64 k_U_REGEX_MISMATCHED_PAREN;
extern const int64 k_U_TRAILING_BACKSLASH;
extern const int64 k_LOG_LOCAL0;
extern const int64 k_MW_GrayscaleType;
extern const int64 k_IMG_GD2_RAW;
extern const int64 k_LOG_LOCAL1;
extern const int64 k_U_MALFORMED_PRAGMA;
extern const int64 k_LOG_LOCAL2;
extern const int64 k_LOG_LOCAL3;
extern const int64 k_LOG_LOCAL4;
extern const int64 k_IDNA_ROUNDTRIP_VERIFY_ERROR;
extern const int64 k_MW_CopyBlackCompositeOp;
extern const int64 k_LOG_LOCAL5;
extern const int64 k_LOG_LOCAL6;
extern const int64 k_LOG_LOCAL7;
extern const int64 k_MW_OverlineDecoration;
extern const int64 k_CONNECTION_ABORTED;
extern const int64 k_MYSQLI_TYPE_TIME;
extern const int64 k_T_PAAMAYIM_NEKUDOTAYIM;
extern const int64 k_U_REGEX_NUMBER_TOO_BIG;
extern const int64 k_STREAM_NOTIFY_REDIRECTED;
extern const int64 k_CURLOPT_RANGE;
extern const int64 k_T_PUBLIC;
extern const int64 k_T_IS_SMALLER_OR_EQUAL;
extern const int64 k_U_BRK_UNDEFINED_VARIABLE;
extern const int64 k_T_DOUBLE_ARROW;
extern const int64 k_CURLOPT_MAXREDIRS;
extern const int64 k_CURLINFO_HEADER_SIZE;
extern const int64 k_MW_HammingFilter;
extern const int64 k_MW_ExpandedStretch;
extern const int64 k_MYSQLI_TYPE_TINY;
extern const int64 k_OCI_B_BIN;
extern const int64 k_SOCKET_EMEDIUMTYPE;
extern const int64 k_MW_DoublePixel;
extern const int64 k_E_WARNING;
extern const int64 k_ENT_COMPAT;
extern const int64 k_XML_ERROR_UNDEFINED_ENTITY;
extern const int64 k_MW_ReplaceCompositeOp;
extern const int64 k_MYSQLI_INIT_COMMAND;
extern const int64 k_CRNCYSTR;
extern const int64 k_T_LINE;
extern const int64 k_OCI_BOTH;
extern const StaticString k_MCRYPT_SAFERPLUS;
extern const int64 k_CURLE_BAD_CONTENT_ENCODING;
extern const int64 k_MYSQLI_CLIENT_COMPRESS;
extern const int64 k_LOG_INFO;
extern const StaticString k_DATE_RFC2822;
extern const int64 k_LOG_AUTHPRIV;
extern const int64 k_CURLM_INTERNAL_ERROR;
extern const int64 k_PKCS7_NOATTR;
extern const StaticString k_OPENSSL_VERSION_TEXT;
extern const StaticString k_DATE_RFC3339;
extern const StaticString k_PHP_VERSION;
extern const int64 k_PREG_OFFSET_CAPTURE;
extern const int64 k_OCI_NUM;
extern const int64 k_MSG_WAITALL;
extern const int64 k_SOCKET_EISCONN;
extern const StaticString k_MCRYPT_ARCFOUR;
extern const int64 k_XSD_DOUBLE;
extern const int64 k_XML_ERROR_NONE;
extern const int64 k_SOCKET_EL2HLT;
extern const int64 k_XSD_HEXBINARY;
extern const int64 k_T_UNSET_CAST;
extern const int64 k_CURLE_FTP_COULDNT_SET_BINARY;
extern const int64 k_MSG_EAGAIN;
extern const int64 k_T_LIST;
extern const int64 k_CURLE_FTP_WRITE_ERROR;
extern const int64 k_CURLOPT_CONNECTTIMEOUT;
extern const int64 k_CURLE_HTTP_POST_ERROR;
extern const int64 k_MW_QuantumRange;
extern const int64 k_D_FMT;
extern const int64 k_SO_REUSEADDR;
extern const int64 k_U_UNCLOSED_SEGMENT;
extern const int64 k_PNG_NO_FILTER;
extern const int64 k_CURLM_BAD_EASY_HANDLE;
extern const double k_M_EULER;
extern const int64 k_MW_HanningFilter;
extern const int64 k_CURLOPT_READFUNCTION;
extern const int64 k_U_UNSUPPORTED_ESCAPE_SEQUENCE;
extern const int64 k_MW_MemoryResource;
extern const int64 k_XSD_DECIMAL;
extern const int64 k_MW_MultiplyEvaluateOperator;
extern const int64 k_ERA_T_FMT;
extern const int64 k_MYSQLI_TYPE_TINY_BLOB;
extern const int64 k_U_FILE_ACCESS_ERROR;
extern const int64 k_U_MULTIPLE_COMPOUND_FILTERS;
extern const int64 k_POSIX_S_IFBLK;
extern const double k_M_2_PI;
extern const int64 k_MCC_ACCESSPOINT_UP;
extern const int64 k_MW_UndefinedDecoration;
extern const StaticString k_XSD_NAMESPACE;
extern const int64 k_U_BRK_HEX_DIGITS_EXPECTED;
extern const int64 k_UNKNOWN_TYPE;
extern const int64 k_MW_FloodfillMethod;
extern const int64 k_XSD_1999_TIMEINSTANT;
extern const int64 k_POSIX_S_IFCHR;
extern const int64 k_CURLE_FTP_COULDNT_SET_ASCII;
extern const int64 k_U_STRING_NOT_TERMINATED_WARNING;
extern const int64 k_DOM_VALIDATION_ERR;
extern const int64 k_SOCKET_EMFILE;
extern const int64 k_LOG_KERN;
extern const int64 k_SOCKET_EINTR;
extern const StaticString k_DATE_COOKIE;
extern const int64 k_GLOB_ONLYDIR;
extern const int64 k_XML_NAMESPACE_DECL_NODE;
extern const int64 k_CURLOPT_FTP_USE_EPRT;
extern const int64 k_LIBXML_ERR_ERROR;
extern const int64 k_MW_SpreadPreview;
extern const StaticString k_ICONV_IMPL;
extern const int64 k_IMG_ARC_CHORD;
extern const int64 k_MW_EdgeVirtualPixelMethod;
extern const int64 k_MYSQLI_TYPE_GEOMETRY;
extern const int64 k_T_END_HEREDOC;
extern const int64 k_CURLOPT_FTP_USE_EPSV;
extern const int64 k_SOAP_COMPRESSION_DEFLATE;
extern const int64 k_ULOC_ACTUAL_LOCALE;
extern const int64 k_LIBXML_ERR_NONE;
extern const double k_M_LOG10E;
extern const int64 k_CURLINFO_REDIRECT_COUNT;
extern const int64 k_IDNA_STRINGPREP_ERROR;
extern const int64 k_CURLINFO_CONTENT_LENGTH_UPLOAD;
extern const int64 k_LIBXML_NOWARNING;
extern const int64 k_U_BRK_ASSIGN_ERROR;
extern const int64 k_MW_LaplacianNoise;
extern const int64 k_XSD_SHORT;
extern const int64 k_MYSQLI_CLIENT_IGNORE_SPACE;
extern const int64 k_XML_DOCUMENT_TYPE_NODE;
extern const int64 k_U_AMBIGUOUS_ALIAS_WARNING;
extern const int64 k_MW_LanczosFilter;
extern const int64 k_LOCK_EX;
extern const int64 k_CURLE_LDAP_SEARCH_FAILED;
extern const int64 k_FNM_PERIOD;
extern const int64 k_MW_MonitorWarning;
extern const int64 k_AF_UNIX;
extern const int64 k_T_SR_EQUAL;
extern const int64 k_MB_CASE_TITLE;
extern const int64 k_SOCKET_EL3HLT;
extern const int64 k_MYSQLI_READ_DEFAULT_FILE;
extern const int64 k_MYSQLI_TYPE_NEWDATE;
extern const int64 k_MYSQLI_TYPE_LONG_BLOB;
extern const int64 k_XML_ATTRIBUTE_CDATA;
extern const int64 k_LOCK_NB;
extern const int64 k_MCRYPT_RAND;
extern const int64 k_XSD_NOTATION;
extern const int64 k_MYSQLI_UNSIGNED_FLAG;
extern const int64 k_GRAPHEME_EXTR_MAXCHARS;
extern const int64 k_MW_NoDecoration;
extern const int64 k_U_MULTIPLE_PERCENT_SYMBOLS;
extern const int64 k_OPENSSL_KEYTYPE_DSA;
extern const int64 k_IMG_FILTER_MEAN_REMOVAL;
extern const int64 k_U_BRK_VARIABLE_REDFINITION;
extern const int64 k_CURLOPT_KRB4LEVEL;
extern const int64 k_SO_SNDLOWAT;
extern const int64 k_CURLOPT_SSLKEY;
extern const int64 k_ABMON_10;
extern const int64 k_MW_SrcOverCompositeOp;
extern const int64 k_ABMON_11;
extern const int64 k_ABMON_12;
extern const int64 k_MW_SrcOutCompositeOp;
extern const int64 k_LOG_MAIL;
extern const int64 k_OCI_B_INT;
extern const int64 k_MW_CopyOpacityCompositeOp;
extern const int64 k_LDAP_OPT_TIMELIMIT;
extern const int64 k_U_FMT_PARSE_ERROR_LIMIT;
extern const int64 k_LOCK_SH;
extern const int64 k_LDAP_OPT_CLIENT_CONTROLS;
extern const int64 k_SOCKET_EINPROGRESS;
extern const int64 k_STREAM_NOTIFY_AUTH_REQUIRED;
extern const int64 k_PREG_BAD_UTF8_ERROR;
extern const int64 k_IMG_ARC_ROUNDED;
extern const int64 k_CURLOPT_HTTP_VERSION;
extern const int64 k_CURLOPT_CAINFO;
extern const int64 k_DOM_NOT_FOUND_ERR;
extern const int64 k_CURLE_SEND_ERROR;
extern const int64 k_LOCK_UN;
extern const int64 k_CURLOPT_RANDOM_FILE;
extern const int64 k_POSIX_S_IFIFO;
extern const int64 k_MW_CoderError;
extern const int64 k_SO_LINGER;
extern const int64 k_U_ILLEGAL_CHAR_IN_SEGMENT;
extern const int64 k_CURLE_GOT_NOTHING;
extern const int64 k_PHP_INT_MAX;
extern const StaticString k_MCRYPT_MODE_CBC;
extern const int64 k_T_EXTENDS;
extern const int64 k_UPLOAD_ERR_NO_FILE;
extern const double k_M_PI_2;
extern const double k_M_PI_4;
extern const int64 k_CURLOPT_SSLVERSION;
extern const int64 k_SUNFUNCS_RET_DOUBLE;
extern const int64 k_XSD_DATETIME;
extern const int64 k_MYSQL_CLIENT_IGNORE_SPACE;
extern const int64 k_MW_SouthWestGravity;
extern const int64 k_XML_ATTRIBUTE_NOTATION;
extern const StaticString k_MCRYPT_MODE_CFB;
extern const int64 k_CURLM_CALL_MULTI_PERFORM;
extern const int64 k_HTML_ENTITIES;
extern const int64 k_CREDITS_DOCS;
extern const int64 k_MYSQLI_TYPE_STRING;
extern const int64 k_MSG_ENOMSG;
extern const int64 k_MW_PaletteType;
extern const int64 k_X509_PURPOSE_CRL_SIGN;
extern const int64 k_IMG_FILTER_SMOOTH;
extern const int64 k_IMG_COLOR_STYLED;
extern const int64 k_XSD_ANYURI;
extern const int64 k_STREAM_NOTIFY_SEVERITY_ERR;
extern const int64 k_XML_HTML_DOCUMENT_NODE;
extern const int64 k_DEBUG_LOG_USER;
extern const int64 k_MW_ObjectBoundingBox;
extern const int64 k_MW_WavePreview;
extern const int64 k_XML_ERROR_DUPLICATE_ATTRIBUTE;
extern const int64 k_U_PARSE_ERROR_LIMIT;
extern const int64 k_LOG_DEBUG;
extern const StaticString k_MCRYPT_MODE_ECB;
extern const int64 k_MW_ScreenCompositeOp;
extern const int64 k_STREAM_NOTIFY_COMPLETED;
extern const int64 k_IDNA_ICONV_ERROR;
extern const int64 k_X509_PURPOSE_SSL_SERVER;
extern const StaticString k_DIRECTORY_SEPARATOR;
extern const int64 k_ASSERT_BAIL;
extern const int64 k_CRYPT_EXT_DES;
extern const int64 k_UPLOAD_ERR_INI_SIZE;
extern const int64 k_MW_RightShiftEvaluateOperator;
extern const int64 k_MW_OptionError;
extern const int64 k_GLOB_AVAILABLE_FLAGS;
extern const int64 k_MW_AddEvaluateOperator;
extern const int64 k_U_REGEX_BAD_INTERVAL;
extern const int64 k_U_MALFORMED_UNICODE_ESCAPE;
extern const int64 k_XSD_NORMALIZEDSTRING;
extern const int64 k_WSDL_CACHE_BOTH;
extern const int64 k_SOAP_COMPRESSION_ACCEPT;
extern const int64 k_CURL_NETRC_IGNORED;
extern const int64 k_CURLE_BAD_FUNCTION_ARGUMENT;
extern const int64 k_XML_COMMENT_NODE;
extern const int64 k_XSD_ANYXML;
extern const int64 k_CURLE_FTP_QUOTE_ERROR;
extern const int64 k_MW_UndefinedGravity;
extern const int64 k_U_BRK_RULE_SYNTAX;
extern const int64 k_U_MISSING_SEGMENT_CLOSE;
extern const int64 k_T_METHOD_C;
extern const int64 k_XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF;
extern const int64 k_U_STRINGPREP_UNASSIGNED_ERROR;
extern const int64 k_U_PATTERN_SYNTAX_ERROR;
extern const int64 k_ASSERT_WARNING;
extern const int64 k_SO_ERROR;
extern const int64 k_MW_OptionFatalError;
extern const int64 k_CURLE_FTP_WEIRD_227_FORMAT;
extern const int64 k_T_INCLUDE;
extern const int64 k_SOCKET_EUNATCH;
extern const int64 k_MW_ColorSeparationMatteType;
extern const int64 k_OCI_B_NUM;
extern const int64 k_MSG_IPC_NOWAIT;
extern const int64 k_CURLAUTH_GSSNEGOTIATE;
extern const int64 k_MW_RoundCap;
extern const int64 k_CURLE_COULDNT_RESOLVE_PROXY;
extern const int64 k_U_ILLEGAL_ARGUMENT_ERROR;
extern const int64 k_OCI_B_NTY;
extern const int64 k_SOL_TCP;
extern const int64 k_LDAP_OPT_ERROR_NUMBER;
extern const int64 k_MW_PaletteMatteType;
extern const int64 k_ABMON_1;
extern const int64 k_ABMON_2;
extern const int64 k_ABMON_3;
extern const int64 k_ABMON_4;
extern const int64 k_CURLOPT_FILETIME;
extern const int64 k_ABMON_5;
extern const int64 k_ABMON_6;
extern const int64 k_IMG_GD2_COMPRESSED;
extern const int64 k_MW_DifferenceCompositeOp;
extern const int64 k_ABMON_7;
extern const int64 k_ABMON_8;
extern const int64 k_CRYPT_SALT_LENGTH;
extern const int64 k_ABMON_9;
extern const double k_M_LOG2E;
extern const int64 k_XML_TEXT_NODE;
extern const int64 k_DOM_INDEX_SIZE_ERR;
extern const int64 k_DEBUG_LOG_URL;
extern const int64 k_CURLOPT_SSL_CIPHER_LIST;
extern const int64 k_SIGKILL;
extern const int64 k_U_VARIABLE_RANGE_OVERLAP;
extern const int64 k_MW_RaisePreview;
extern const int64 k_CURLOPT_REFERER;
extern const int64 k_T_THROW;
extern const int64 k_SOL_UDP;
extern const int64 k_SOAP_ENC_ARRAY;
extern const int64 k_MW_BlackmanFilter;
extern const int64 k_MW_OverCompositeOp;
extern const int64 k_U_REGEX_SET_CONTAINS_STRING;
extern const int64 k_MW_UndefinedColorspace;
extern const int64 k_CURL_VERSION_KERBEROS4;
extern const int64 k_PSFS_FLAG_FLUSH_INC;
extern const int64 k_PHP_OUTPUT_HANDLER_CONT;
extern const int64 k_CURLOPT_TRANSFERTEXT;
extern const int64 k_IMG_COLOR_BRUSHED;
extern const int64 k_OCI_SYSDBA;
extern const int64 k_CURLOPT_COOKIE;
extern const int64 k_CURLE_OPERATION_TIMEOUTED;
extern const int64 k_OPENSSL_SSLV23_PADDING;
extern const int64 k_T_ARRAY_CAST;
extern const int64 k_SO_RCVLOWAT;
extern const int64 k_WSDL_CACHE_DISK;
extern const int64 k_POSIX_S_IFREG;
extern const int64 k_MYSQLI_REPORT_ERROR;
extern const int64 k_U_INVALID_FORMAT_ERROR;
extern const int64 k_T_LOGICAL_XOR;
extern const int64 k_SOAP_ACTOR_NEXT;
extern const int64 k_OCI_DEFAULT;
extern const int64 k_CURLCLOSEPOLICY_LEAST_RECENTLY_USED;
extern const int64 k_MYSQLI_TYPE_YEAR;
extern const int64 k_T_PROTECTED;
extern const int64 k_SOCKET_EL3RST;
extern const int64 k_U_MALFORMED_VARIABLE_REFERENCE;
extern const int64 k_MW_BlackChannel;
extern const int64 k_MW_ExclusionCompositeOp;
extern const int64 k_CURL_VERSION_SSL;
extern const int64 k_CURLVERSION_NOW;
extern const int64 k_MW_PointMethod;
extern const int64 k_MW_PartitionInterlace;
extern const int64 k_FORCE_DEFLATE;
extern const int64 k_U_MALFORMED_SYMBOL_REFERENCE;
extern const int64 k_MW_YPbPrColorspace;
extern const int64 k_SOCKET_ELOOP;
extern const int64 k_XSD_TIME;
extern const int64 k_SOCKET_EEXIST;
extern const int64 k_DOMSTRING_SIZE_ERR;
extern const int64 k_SO_BROADCAST;
extern const int64 k_PM_STR;
extern const int64 k_MW_ErrorException;
extern const int64 k_CURLE_HTTP_NOT_FOUND;
extern const int64 k_EXTR_PREFIX_ALL;
extern const int64 k_OCI_SEEK_CUR;
extern const int64 k_SOCKET_ECHRNG;
extern const int64 k_OCI_SEEK_END;
extern const int64 k_XML_ENTITY_NODE;
extern const int64 k_MW_PixelsPerInchResolution;
extern const int64 k_T_OBJECT_OPERATOR;
extern const int64 k_MW_CorruptImageError;
extern const int64 k_STREAM_PEEK;
extern const int64 k_IMG_COLOR_TILED;
extern const int64 k_LOG_NEWS;
extern const int64 k_MW_CatromFilter;
extern const int64 k_PKCS7_TEXT;
extern const int64 k_MW_RightAlign;
extern const int64 k_MYSQL_NUM;
extern const int64 k_CURLE_FILE_COULDNT_READ_FILE;
extern const int64 k_SOCKET_EUSERS;
extern const int64 k_CURLOPT_LOW_SPEED_TIME;
extern const int64 k_PHP_BINARY_READ;
extern const int64 k_STR_PAD_BOTH;
extern const int64 k_U_REGEX_PROPERTY_SYNTAX;
extern const int64 k_STREAM_FILTER_ALL;
extern const int64 k_CURLAUTH_DIGEST;
extern const int64 k_XSD_UNSIGNEDSHORT;
extern const int64 k_CURL_IPRESOLVE_WHATEVER;
extern const int64 k_SIGIO;
extern const int64 k_T_ENDSWITCH;
extern const int64 k_LDAP_OPT_SIZELIMIT;
extern const StaticString k_OCI_SYSDATE;
extern const int64 k_MW_SubtractEvaluateOperator;
extern const int64 k_MYSQLI_RPL_SLAVE;
extern const int64 k_STREAM_SHUT_RD;
extern const int64 k_SOAP_1_1;
extern const int64 k_DOM_PHP_ERR;
extern const int64 k_SOAP_1_2;
extern const int64 k_OPENSSL_KEYTYPE_RSA;
extern const int64 k_PNG_FILTER_UP;
extern const int64 k_EXTR_REFS;
extern const int64 k_OPENSSL_CIPHER_DES;
extern const int64 k_E_ALL;
extern const int64 k_LIBXML_NOENT;
extern const int64 k_U_USING_FALLBACK_WARNING;
extern const int64 k_MW_BlendCompositeOp;
extern const StaticString k_HPHP_TRIM_CHARLIST;
extern const int64 k_MYSQL_CLIENT_COMPRESS;
extern const int64 k_E_USER_ERROR;
extern const int64 k_SOAP_PERSISTENCE_REQUEST;
extern const int64 k_T_MUL_EQUAL;
extern const int64 k_MW_IndexChannel;
extern const int64 k_U_ILLEGAL_CHAR_FOUND;
extern const int64 k_OPENSSL_PKCS1_PADDING;
extern const int64 k_PHP_INT_SIZE;
extern const int64 k_CURLE_FTP_SSL_FAILED;
extern const int64 k_CURLE_FTP_ACCESS_DENIED;
extern const int64 k_CURLE_TOO_MANY_REDIRECTS;
extern const int64 k_STREAM_USE_PATH;
extern const int64 k_MW_DelegateWarning;
extern const StaticString k_MCRYPT_MODE_OFB;
extern const int64 k_CURLE_FTP_COULDNT_USE_REST;
extern const int64 k_T_PRIVATE;
extern const int64 k_STREAM_SHUT_WR;
extern const StaticString k_DATE_ISO8601;
extern const int64 k_CURLE_LDAP_CANNOT_BIND;
extern const int64 k_IDNA_INVALID_LENGTH;
extern const int64 k_LDAP_DEREF_ALWAYS;
extern const int64 k_XML_ERROR_BAD_CHAR_REF;
extern const int64 k_XSD_STRING;
extern const int64 k_IMG_ARC_PIE;
extern const int64 k_SOCKET_ECONNREFUSED;
extern const int64 k_PKCS7_NOVERIFY;
extern const int64 k_T_DOLLAR_OPEN_CURLY_BRACES;
extern const int64 k_CURLOPT_SSLENGINE_DEFAULT;
extern const int64 k_XSD_GYEAR;
extern const int64 k_SOCKET_EPROTO;
extern const int64 k_XSD_NONPOSITIVEINTEGER;
extern const StaticString k_XML_SAX_IMPL;
extern const int64 k_LDAP_OPT_RESTART;
extern const int64 k_MW_SolarizePreview;
extern const int64 k_U_USELESS_COLLATOR_ERROR;
extern const int64 k_MW_BlobError;
extern const int64 k_IMG_ARC_EDGED;
extern const int64 k_DOM_NOT_SUPPORTED_ERR;
extern const int64 k_PNG_FILTER_AVG;
extern const int64 k_CURLM_BAD_HANDLE;
extern const int64 k_MW_LightenCompositeOp;
extern const int64 k_CURLOPT_PROXYTYPE;
extern const int64 k_T_ENDIF;
extern const int64 k_CURLOPT_FTPSSLAUTH;
extern const int64 k_MW_BesselFilter;
extern const int64 k_DOM_INUSE_ATTRIBUTE_ERR;
extern const int64 k_MW_UndefinedVirtualPixelMethod;
extern const int64 k_CURLE_FTP_WEIRD_SERVER_REPLY;
extern const int64 k_CURLE_LDAP_INVALID_URL;
extern const int64 k_XML_DOCUMENT_FRAG_NODE;
extern const int64 k_MW_ImageError;
extern const int64 k_IMG_FILTER_CONTRAST;
extern const int64 k_SOCKET_EHOSTUNREACH;
extern const int64 k_MW_UndefinedDispose;
extern const int64 k_CURLPROXY_HTTP;
extern const int64 k_MW_Group4Compression;
extern const int64 k_CLOCK_THREAD_CPUTIME_ID;
extern const int64 k_MCRYPT_DEV_URANDOM;
extern const StaticString k_MCRYPT_MODE_STREAM;
extern const int64 k_SOAP_ACTOR_NONE;
extern const int64 k_MYSQLI_UNIQUE_KEY_FLAG;
extern const StaticString k_PHP_EXTENSION_DIR;
extern const int64 k_DOM_INVALID_MODIFICATION_ERR;
extern const int64 k_U_MULTIPLE_PAD_SPECIFIERS;
extern const int64 k_STR_PAD_RIGHT;
extern const int64 k_SOCKET_ENODATA;
extern const int64 k_MW_ConstantVirtualPixelMethod;
extern const int64 k_U_MALFORMED_RULE;
extern const int64 k_U_UNSUPPORTED_ATTRIBUTE;
extern const int64 k_OCI_EXACT_FETCH;
extern const int64 k_CURLAUTH_ANYSAFE;
extern const int64 k_STREAM_SHUT_RDWR;
extern const int64 k_U_BRK_ERROR_START;
extern const int64 k_PRIO_PROCESS;
extern const int64 k_STREAM_PF_INET6;
extern const int64 k_CURLE_FTP_COULDNT_GET_SIZE;
extern const int64 k_OCI_DTYPE_LOB;
extern const int64 k_U_INVALID_FUNCTION;
extern const int64 k_MW_MissingDelegateFatalError;
extern const int64 k_IMAGETYPE_JPEG;
extern const int64 k_SOCKET_ENOPROTOOPT;
extern const int64 k_IMG_WBMP;
extern const int64 k_LDAP_OPT_DEBUG_LEVEL;
extern const int64 k_MW_CenterAlign;
extern const int64 k_LOG_DAEMON;
extern const int64 k_MW_UndefinedJoin;
extern const int64 k_XML_ELEMENT_NODE;
extern const int64 k_LC_NUMERIC;
extern const int64 k_CREDITS_FULLPAGE;
extern const int64 k_U_PRIMARY_TOO_LONG_ERROR;
extern const int64 k_LIBXML_DTDVALID;
extern const int64 k_U_ERROR_WARNING_START;
extern const int64 k_MW_FloatPixel;
extern const int64 k_CURLOPT_WRITEFUNCTION;
extern const int64 k_CURLE_SSL_CONNECT_ERROR;
extern const int64 k_MW_WandFatalError;
extern const int64 k_MW_GRAYColorspace;
extern const int64 k_IMG_GIF;
extern const int64 k_U_PARSE_ERROR;
extern const int64 k_MYSQLI_TYPE_SHORT;
extern const int64 k_IMG_FILTER_COLORIZE;
extern const int64 k_T_DOUBLE_COLON;
extern const int64 k_T_DEC;
extern const int64 k_SOCKET_ELNRNG;
extern const StaticString k_PHP_DATADIR;
extern const int64 k_CURLOPT_READDATA;
extern const int64 k_CURL_NETRC_REQUIRED;
extern const int64 k_XSD_ENTITIES;
extern const int64 k_MW_DelegateFatalError;
extern const int64 k_U_STATE_TOO_OLD_ERROR;
extern const int64 k_CURLOPT_CLOSEPOLICY;
extern const int64 k_PREG_SPLIT_NO_EMPTY;
extern const int64 k_LIBXML_NONET;
extern const int64 k_SOCKET_ENFILE;
extern const int64 k_MW_CopyMagentaCompositeOp;
extern const int64 k_STREAM_IPPROTO_RAW;
extern const int64 k_LIBXML_DTDLOAD;
extern const int64 k_CURLINFO_STARTTRANSFER_TIME;
extern const int64 k_COUNT_RECURSIVE;
extern const int64 k_CODESET;
extern const int64 k_CURLOPT_PASSWDFUNCTION;
extern const int64 k_SOCKET_EPERM;
extern const int64 k_GD_MAJOR_VERSION;
extern const int64 k_PKCS7_DETACHED;
extern const int64 k_OPENSSL_CIPHER_RC2_40;
extern const int64 k_SOCKET_ENOSR;
extern const int64 k_LC_MESSAGES;
extern const int64 k_T_STRING_VARNAME;
extern const int64 k_SOMAXCONN;
extern const int64 k_MW_RedChannel;
extern const int64 k_MW_ButtCap;
extern const int64 k_OPENSSL_CIPHER_RC2_64;
extern const int64 k_SOCKET_ETIMEDOUT;
extern const int64 k_IDNA_CONTAINS_ACE_PREFIX;
extern const int64 k_MW_ColorDodgeCompositeOp;
extern const int64 k_T_FMT_AMPM;
extern const int64 k_SQLT_RSET;
extern const int64 k_U_REGEX_INVALID_STATE;
extern const int64 k_T_CHARACTER;
extern const int64 k_XML_ATTRIBUTE_NODE;
extern const int64 k_STREAM_ENFORCE_SAFE_MODE;
extern const int64 k_SUNFUNCS_RET_TIMESTAMP;
extern const int64 k_STREAM_IPPROTO_TCP;
extern const int64 k_SO_RCVBUF;
extern const int64 k_STREAM_NOTIFY_MIME_TYPE_IS;
extern const int64 k_COUNT_NORMAL;
extern const int64 k_U_REGEX_INTERNAL_ERROR;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv23_SERVER;
extern const StaticString k_MCRYPT_WAKE;
extern const int64 k_U_TRUNCATED_CHAR_FOUND;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv2_SERVER;
extern const int64 k_MW_WandError;
extern const int64 k_SO_DEBUG;
extern const bool k_FALSE;
extern const int64 k_LDAP_OPT_ERROR_STRING;
extern const bool k_ZEND_THREAD_SAFE;
extern const int64 k_AF_INET6;
extern const int64 k_SUNFUNCS_RET_STRING;
extern const int64 k_OPENSSL_PKCS1_OAEP_PADDING;
extern const int64 k_SIGSTKFLT;
extern const int64 k_XML_ERROR_NO_MEMORY;
extern const int64 k_DNS_ALL;
extern const int64 k_MB_OVERLOAD_REGEX;
extern const int64 k_MW_SincFilter;
extern const int64 k_IMG_JPG;
extern const int64 k_MW_ShearPreview;
extern const int64 k_ASSERT_ACTIVE;
extern const int64 k_STREAM_IPPROTO_UDP;
extern const int64 k_OCI_SEEK_SET;
extern const int64 k_SOCKET_EDESTADDRREQ;
extern const int64 k_T_FMT;
extern const int64 k_MW_EastGravity;
extern const int64 k_SOCKET_EPIPE;
extern const int64 k_SIGCLD;
extern const int64 k_T_FINAL;
extern const int64 k_MW_StaticGravity;
extern const int64 k_T_FOR;
extern const int64 k_EXTR_SKIP;
extern const int64 k_MW_HermiteFilter;
extern const int64 k_DNS_ANY;
extern const int64 k_OCI_DTYPE_FILE;
extern const int64 k_CURLE_BAD_CALLING_ORDER;
extern const int64 k_SOCKET_ENOBUFS;
extern const int64 k_LC_COLLATE;
extern const int64 k_CURLOPT_CAPATH;
extern const int64 k_PKCS7_NOCHAIN;
extern const int64 k_U_INVALID_TABLE_FORMAT;
extern const int64 k_CHAR_MAX;
extern const int64 k_PREG_INTERNAL_ERROR;
extern const int64 k_MYSQLI_RPL_ADMIN;
extern const int64 k_E_USER_WARNING;
extern const int64 k_PREG_NO_ERROR;
extern const int64 k_U_STRINGPREP_CHECK_BIDI_ERROR;
extern const int64 k_SOCKET_EPROTONOSUPPORT;
extern const StaticString k_MCRYPT_PANAMA;
extern const int64 k_MYSQLI_TYPE_CHAR;
extern const int64 k_MON_1;
extern const int64 k_T_EMPTY;
extern const int64 k_MON_2;
extern const int64 k_SIGBUS;
extern const int64 k_MYSQLI_SET_FLAG;
extern const int64 k_MON_3;
extern const int64 k_MON_4;
extern const int64 k_MON_5;
extern const int64 k_MON_6;
extern const int64 k_MON_7;
extern const int64 k_MON_8;
extern const int64 k_MON_9;
extern const int64 k_SOCKET_EMLINK;
extern const int64 k_EXTR_IF_EXISTS;
extern const int64 k_LDAP_OPT_SERVER_CONTROLS;
extern const int64 k_CURLE_COULDNT_RESOLVE_HOST;
extern const int64 k_MW_BlobFatalError;
extern const int64 k_MYSQLI_ZEROFILL_FLAG;
extern const StaticString k_GD_VERSION;
extern const int64 k_SOCKET_EBADMSG;
extern const int64 k_CURLE_FTP_USER_PASSWORD_INCORRECT;
extern const int64 k_T_INC;
extern const int64 k_THOUSEP;
extern const int64 k_SORT_DESC;
extern const int64 k_MYSQLI_TYPE_BLOB;
extern const int64 k_SOCKET_EAFNOSUPPORT;
extern const int64 k_MYSQLI_TYPE_DATE;
extern const int64 k_T_DNUMBER;
extern const int64 k_MW_BlueChannel;
extern const int64 k_CURLE_UNKNOWN_TELNET_OPTION;
extern const int64 k_T_CONTINUE;
extern const StaticString k_PHP_SHLIB_SUFFIX;
extern const int64 k_CURLE_LIBRARY_NOT_FOUND;
extern const int64 k_T_FUNC_C;
extern const int64 k_MW_ObliqueStyle;
extern const int64 k_SOCKET_ENETUNREACH;
extern const int64 k_MW_EdgeDetectPreview;
extern const int64 k_XML_ERROR_EXTERNAL_ENTITY_HANDLING;
extern const int64 k_MW_DstInCompositeOp;
extern const int64 k_LDAP_DEREF_SEARCHING;
extern const int64 k_STREAM_IPPROTO_ICMP;
extern const int64 k_SIGFPE;
extern const int64 k_LIBXML_NOCDATA;
extern const int64 k_SOCKET_ENXIO;
extern const int64 k_MW_MinusCompositeOp;
extern const int64 k_MW_RotatePreview;
extern const int64 k_U_REGEX_BAD_ESCAPE_SEQUENCE;
extern const int64 k_IMG_FILTER_GRAYSCALE;
extern const int64 k_PREG_SET_ORDER;
extern const int64 k_SORT_STRING;
extern const int64 k_CURLOPT_FORBID_REUSE;
extern const int64 k_U_BRK_MISMATCHED_PAREN;
extern const int64 k_MW_LosslessJPEGCompression;
extern const int64 k_XML_ERROR_PARAM_ENTITY_REF;
extern const int64 k_CURLAUTH_BASIC;
extern const int64 k_MW_UndefinedFilter;
extern const int64 k_MW_NorthWestGravity;
extern const int64 k_PKCS7_NOCERTS;
extern const int64 k_MYSQLI_ASSOC;
extern const int64 k_OCI_COMMIT_ON_SUCCESS;
extern const int64 k_POSIX_S_IFSOCK;
extern const int64 k_IMG_PNG;
extern const int64 k_DEBUG_LOG_IP;
extern const int64 k_CURLE_FTP_WEIRD_USER_REPLY;
extern const int64 k_CURLE_FTP_WEIRD_PASS_REPLY;
extern const int64 k_MW_InCompositeOp;
extern const int64 k_STREAM_NOTIFY_SEVERITY_INFO;
extern const int64 k_MB_OVERLOAD_STRING;
extern const int64 k_XML_ELEMENT_DECL_NODE;
extern const int64 k_CURLINFO_PRIVATE;
extern const int64 k_MW_FileOpenError;
extern const int64 k_CURL_TIMECOND_IFMODSINCE;
extern const int64 k_CURLINFO_TOTAL_TIME;
extern const int64 k_IDNA_NO_ACE_PREFIX;
extern const int64 k_SIGILL;
extern const int64 k_T_NEW;
extern const int64 k_CURLOPT_PROXY;
extern const int64 k_SOCKET_EBADRQC;
extern const int64 k_SQLT_BFILEE;
extern const int64 k_U_BRK_INIT_ERROR;
extern const int64 k_MW_AndEvaluateOperator;
extern const int64 k_CURLE_FTP_PORT_FAILED;
extern const int64 k_MW_RollPreview;
extern const int64 k_SIGINT;
extern const int64 k_SOCKET_EBADSLT;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv3_CLIENT;
extern const int64 k_SIGIOT;
extern const int64 k_SIGHUP;
extern const int64 k_MYSQL_ASSOC;
extern const int64 k_U_ILLEGAL_ESCAPE_SEQUENCE;
extern const int64 k_MW_ItalicStyle;
extern const int64 k_U_UNEXPECTED_TOKEN;
extern const int64 k_MW_NoneDispose;
extern const int64 k_MW_ImplodePreview;
extern const int64 k_T_ENDWHILE;
extern const int64 k_MW_StreamFatalError;
extern const int64 k_U_ZERO_ERROR;
extern const int64 k_DOM_HIERARCHY_REQUEST_ERR;
extern const int64 k_MW_UndefinedMode;
extern const StaticString k_PHP_CONFIG_FILE_SCAN_DIR;
extern const int64 k_T_ISSET;
extern const int64 k_LC_CTYPE;
extern const int64 k_PSFS_ERR_FATAL;
extern const int64 k_SIGPIPE;
extern const int64 k_T_INTERFACE;
extern const int64 k_MW_AllChannels;
extern const int64 k_MW_DarkenCompositeOp;
extern const int64 k_STREAM_NOTIFY_AUTH_RESULT;
extern const int64 k_SQLT_CFILEE;
extern const int64 k_MYSQLI_MULTIPLE_KEY_FLAG;
extern const int64 k_MW_SrcCompositeOp;
extern const int64 k_T_MOD_EQUAL;
extern const double k_M_SQRTPI;
extern const int64 k_PNG_FILTER_SUB;
extern const int64 k_FILE_APPEND;
extern const int64 k_SOCKET_ESTRPIPE;
extern const int64 k_OPENSSL_ALGO_MD2;
extern const int64 k_DOM_SYNTAX_ERR;
extern const int64 k_OPENSSL_ALGO_MD4;
extern const int64 k_OPENSSL_ALGO_MD5;
extern const int64 k_EXTR_PREFIX_IF_EXISTS;
extern const int64 k_INFO_ALL;
extern const int64 k_CURLOPT_SSLCERTPASSWD;
extern const int64 k_XML_OPTION_SKIP_TAGSTART;
extern const int64 k_MW_HuePreview;
extern const int64 k_MW_IntegerPixel;
extern const int64 k_IMG_EFFECT_REPLACE;
extern const int64 k_OCI_B_CURSOR;
extern const int64 k_OPENSSL_NO_PADDING;
extern const int64 k_MW_FillToBorderMethod;
extern const int64 k_U_BRK_NEW_LINE_IN_QUOTED_STRING;
extern const int64 k_STREAM_PF_INET;
extern const int64 k_SOCKET_EHOSTDOWN;
extern const int64 k_MW_UserSpaceOnUse;
extern const int64 k_MW_UndefinedChannel;
extern const int64 k_SOCKET_ERESTART;
extern const int64 k_ERA;
extern const int64 k_XML_OPTION_TARGET_ENCODING;
extern const int64 k_CURLOPT_PRIVATE;
extern const int64 k_SOCKET_EALREADY;
extern const int64 k_XSD_NMTOKENS;
extern const int64 k_MW_TrueColorMatteType;
extern const int64 k_XSD_LANGUAGE;
extern const int64 k_MW_UniformNoise;
extern const int64 k_U_MEMORY_ALLOCATION_ERROR;
extern const int64 k_SORT_ASC;
extern const int64 k_IMG_FILTER_EMBOSS;
extern const int64 k_U_REGEX_INVALID_FLAG;
extern const int64 k_U_UNQUOTED_SPECIAL;
extern const int64 k_MYSQLI_OPT_LOCAL_INFILE;
extern const int64 k_MYSQLI_AUTO_INCREMENT_FLAG;
extern const int64 k_U_UNDEFINED_VARIABLE;
extern const int64 k_SOAP_LITERAL;
extern const int64 k_XML_ERROR_JUNK_AFTER_DOC_ELEMENT;
extern const int64 k_MW_BlurPreview;
extern const int64 k_U_INVALID_RBT_SYNTAX;
extern const int64 k_MW_SouthEastGravity;
extern const int64 k_SOCKET_EXFULL;
extern const int64 k_T_OPEN_TAG_WITH_ECHO;
extern const int64 k_MYSQL_CLIENT_SSL;
extern const int64 k_MW_LineThroughDecoration;
extern const int64 k_T_START_HEREDOC;
extern const int64 k_U_VARIABLE_RANGE_EXHAUSTED;
extern const int64 k_E_ERROR;
extern const int64 k_INI_USER;
extern const int64 k_MW_DstCompositeOp;
extern const int64 k_SO_SNDTIMEO;
extern const int64 k_MW_GrayscaleMatteType;
extern const int64 k_CURLE_FUNCTION_NOT_FOUND;
extern const int64 k_CURLOPT_ENCODING;
extern const int64 k_MW_ExtraCondensedStretch;
extern const int64 k_T_IS_GREATER_OR_EQUAL;
extern const int64 k_T_BAD_CHARACTER;
extern const int64 k_T_INSTANCEOF;
extern const int64 k_MW_LuminizeCompositeOp;
extern const int64 k_MYSQLI_READ_DEFAULT_GROUP;
extern const int64 k_XML_ERROR_MISPLACED_XML_PI;
extern const int64 k_MW_AnyStyle;
extern const int64 k_MW_CyanChannel;
extern const int64 k_CURLINFO_SPEED_DOWNLOAD;
extern const int64 k_MYSQLI_BOTH;
extern const int64 k_MW_CacheFatalError;
extern const int64 k_MW_WandWarning;
extern const int64 k_T_VAR;
extern const int64 k_PATHINFO_DIRNAME;
extern const int64 k_MW_AlphaChannel;
extern const int64 k_CURLPROXY_SOCKS5;
extern const int64 k_SIGPOLL;
extern const int64 k_MW_CopyCyanCompositeOp;
extern const int64 k_CURLINFO_CONTENT_LENGTH_DOWNLOAD;
extern const int64 k_IMG_XPM;
extern const StaticString k_INF;
extern const int64 k_CURLOPT_HTTPAUTH;
extern const int64 k_XML_ATTRIBUTE_NMTOKENS;
extern const int64 k_MW_MissingDelegateError;
extern const int64 k_MW_UserSpace;
extern const int64 k_CURLFTPSSL_ALL;
extern const int64 k_MYSQLI_CLIENT_NO_SCHEMA;
extern const int64 k_T_CATCH;
extern const int64 k_SOCKET_EROFS;
extern const int64 k_INFO_VARIABLES;
extern const int64 k_CURLOPT_DNS_CACHE_TIMEOUT;
extern const int64 k_U_REGEX_RULE_SYNTAX;
extern const int64 k_CURLE_OK;
extern const int64 k_T_TRY;
extern const int64 k_T_ENDDECLARE;
extern const int64 k_CURL_IPRESOLVE_V4;
extern const int64 k_XML_LOCAL_NAMESPACE;
extern const int64 k_XSD_UNSIGNEDBYTE;
extern const int64 k_CURLOPT_TCP_NODELAY;
extern const int64 k_CURL_IPRESOLVE_V6;
extern const int64 k_CRYPT_BLOWFISH;
extern const int64 k_XML_ATTRIBUTE_IDREF;
extern const int64 k_U_ENUM_OUT_OF_SYNC_ERROR;
extern const int64 k_T_USE;
extern const StaticString k_MCRYPT_CAST_128;
extern const int64 k_CURLINFO_EFFECTIVE_URL;
extern const int64 k_T_IS_EQUAL;
extern const StaticString k_MCRYPT_RIJNDAEL_128;
extern const int64 k_SQLT_AFC;
extern const int64 k_MW_SetEvaluateOperator;
extern const int64 k_CURLOPT_TIMEVALUE;
extern const int64 k_SIGPWR;
extern const int64 k_OCI_B_ROWID;
extern const int64 k_MW_FatalErrorException;
extern const int64 k_CURLOPT_HTTPHEADER;
extern const int64 k_CURLOPT_COOKIEFILE;
extern const StaticString k_PHP_LIBDIR;
extern const int64 k_DEBUG_LOG_AGENT;
extern const int64 k_DNS_PTR;
extern const int64 k_XML_ERROR_SYNTAX;
extern const int64 k_U_NO_SPACE_AVAILABLE;
extern const int64 k_T_CONSTANT_ENCAPSED_STRING;
extern const int64 k_MW_MeanAbsoluteErrorMetric;
extern const int64 k_CURLOPT_PROXYAUTH;
extern const StaticString k_NAN;
extern const int64 k_GD_RELEASE_VERSION;
extern const int64 k_SOL_SOCKET;
extern const StaticString k_MCRYPT_RIJNDAEL_192;
extern const int64 k_SOCKET_ENOMEDIUM;
extern const int64 k_CURLOPT_COOKIESESSION;
extern const int64 k_SIGPROF;
extern const StaticString k_MCRYPT_ARCFOUR_IV;
extern const int64 k_MW_UndefinedNoise;
extern const StaticString k_MCRYPT_CAST_256;
extern const int64 k_MW_BevelJoin;
extern const int64 k_PREG_SPLIT_OFFSET_CAPTURE;
extern const int64 k_IDNA_CONTAINS_MINUS;
extern const int64 k_SO_KEEPALIVE;
extern const StaticString k_MCRYPT_RIJNDAEL_256;
extern const int64 k_MW_UndefinedInterlace;
extern const int64 k_U_STANDARD_ERROR_LIMIT;
extern const int64 k_T_OPEN_TAG;
extern const int64 k_MW_UndefinedException;
extern const int64 k_LIBXML_NOERROR;
extern const int64 k_CURLOPT_NETRC;
extern const int64 k_DNS_SOA;
extern const int64 k_SQLT_BIN;
extern const int64 k_MW_ShortPixel;
extern const int64 k_MW_DelegateError;
extern const int64 k_SIGSEGV;
extern const int64 k_MW_TypeFatalError;
extern const int64 k_U_REGEX_LOOK_BEHIND_LIMIT;
extern const int64 k_CURLFTPAUTH_DEFAULT;
extern const int64 k_STREAM_SOCK_DGRAM;
extern const int64 k_CURLCLOSEPOLICY_OLDEST;
extern const int64 k_STREAM_URL_STAT_QUIET;
extern const int64 k_SQLT_CHR;
extern const int64 k_SOCKET_EACCES;
extern const int64 k_MYSQLI_TYPE_INT24;
extern const int64 k_SOCK_RAW;
extern const int64 k_SQLT_AVC;
extern const int64 k_MYSQLI_TYPE_INTERVAL;
extern const int64 k_SOCK_RDM;
extern const int64 k_DNS_SRV;
extern const int64 k_XSD_UNSIGNEDINT;
extern const int64 k_SIGSYS;
extern const int64 k_SOAP_RPC;
extern const int64 k_MW_PoissonNoise;
extern const int64 k_SIGURG;
extern const int64 k_SOCKET_ETIME;
extern const int64 k_T_ENDFOREACH;
extern const StaticString k_PHP_SAPI;
extern const StaticString k_PHP_PREFIX;
extern const int64 k_U_BRK_ERROR_LIMIT;
extern const int64 k_MW_SwirlPreview;
extern const int64 k_MW_BumpmapCompositeOp;
extern const int64 k_SOAP_SINGLE_ELEMENT_ARRAYS;
extern const int64 k_MYSQL_CLIENT_INTERACTIVE;
extern const int64 k_CURLOPT_CRLF;
extern const int64 k_CURL_HTTP_VERSION_1_0;
extern const int64 k_CURL_HTTP_VERSION_1_1;
extern const StaticString k_MCRYPT_MODE_NOFB;
extern const int64 k_CURLOPT_MAXCONNECTS;
extern const int64 k_XML_ATTRIBUTE_IDREFS;
extern const int64 k_T_INT_CAST;
extern const int64 k_XSD_POSITIVEINTEGER;
extern const int64 k_CURLOPT_SSL_VERIFYHOST;
extern const int64 k_XSD_NCNAME;
extern const int64 k_X509_PURPOSE_SMIME_SIGN;
extern const int64 k_SOCKET_EPROTOTYPE;
extern const int64 k_U_ERROR_WARNING_LIMIT;
extern const int64 k_MYSQLI_TYPE_ENUM;
extern const int64 k_CURLE_PARTIAL_FILE;
extern const int64 k_PHP_URL_HOST;
extern const int64 k_STREAM_SOCK_STREAM;
extern const int64 k_MW_DrawError;
extern const double k_M_E;
extern const int64 k_DNS_TXT;
extern const int64 k_DOM_WRONG_DOCUMENT_ERR;
extern const StaticString k_MCRYPT_XTEA;
extern const int64 k_SO_RCVTIMEO;
extern const int64 k_XSD_NONNEGATIVEINTEGER;
extern const int64 k_CURLE_WRITE_ERROR;
extern const int64 k_ALT_DIGITS;
extern const int64 k_XHPROF_FLAGS_CPU;
extern const int64 k_MW_SquareCap;
extern const int64 k_MYSQLI_NO_DATA;
extern const int64 k_SOCKET_EIO;
extern const int64 k_MW_OHTAColorspace;
extern const int64 k_U_MISSING_RESOURCE_ERROR;
extern const int64 k_T_DOUBLE_CAST;
extern const int64 k_SQLT_FLT;
extern const int64 k_FILE_USE_INCLUDE_PATH;
extern const int64 k_SOCKET_ENOTSOCK;
extern const int64 k_XSD_DATE;
extern const int64 k_E_RECOVERABLE_ERROR;
extern const int64 k_OCI_ASSOC;
extern const int64 k_CURLE_SSL_ENGINE_SETFAILED;
extern const int64 k_U_MULTIPLE_POST_CONTEXTS;
extern const int64 k_GLOB_NOCHECK;
extern const int64 k_PREG_RECURSION_LIMIT_ERROR;
extern const int64 k_T_ENDFOR;
extern const int64 k_DNS_A;
extern const StaticString k_PHP_CONFIG_FILE_PATH;
extern const int64 k_MW_RoundJoin;
extern const int64 k_MW_ModulateCompositeOp;
extern const int64 k_CURLE_SHARE_IN_USE;
extern const int64 k_U_ILLEGAL_PAD_POSITION;
extern const int64 k_LIBXML_VERSION;
extern const int64 k_MW_UndefinedResource;
extern const int64 k_DOM_NO_MODIFICATION_ALLOWED_ERR;
extern const int64 k_CURLOPT_SSLKEYPASSWD;
extern const int64 k_CURLOPT_SSLCERT;
extern const int64 k_SIGQUIT;
extern const int64 k_MW_ResetMethod;
extern const int64 k_SQLT_BFLOAT;
extern const StaticString k_MCRYPT_SKIPJACK;
extern const int64 k_SO_DONTROUTE;
extern const int64 k_T_DECLARE;
extern const int64 k_SIGTERM;
extern const int64 k_T_GLOBAL;
extern const int64 k_MW_MissingDelegateWarning;
extern const int64 k_MW_PerceptualIntent;
extern const int64 k_POSIX_R_OK;
extern const int64 k_T_STRING;
extern const int64 k_INFO_CREDITS;
extern const int64 k_STR_PAD_LEFT;
extern const int64 k_XSD_ID;
extern const int64 k_MW_TransparentColorspace;
extern const int64 k_OCI_RETURN_NULLS;
extern const int64 k_T_IS_IDENTICAL;
extern const int64 k_CLOCK_PROCESS_CPUTIME_ID;
extern const int64 k_MW_UndefinedEvaluateOperator;
extern const int64 k_OPENSSL_ALGO_SHA1;
extern const int64 k_MW_CopyYellowCompositeOp;
extern const int64 k_MW_CopyGreenCompositeOp;
extern const int64 k_CURLOPT_FILE;
extern const int64 k_SQLT_INT;
extern const int64 k_IMG_EFFECT_OVERLAY;
extern const int64 k_SQLT_LBI;
extern const int64 k_WSDL_CACHE_MEMORY;
extern const int64 k_GD_MINOR_VERSION;
extern const int64 k_XSD_TOKEN;
extern const int64 k_FNM_NOESCAPE;
extern const int64 k_U_BRK_RULE_EMPTY_SET;
extern const int64 k_PHP_OUTPUT_HANDLER_START;
extern const int64 k_INFO_GENERAL;
extern const int64 k_LOG_ERR;
extern const int64 k_MYSQLI_NUM;
extern const int64 k_MYSQLI_OPT_CONNECT_TIMEOUT;
extern const int64 k_MW_RGBColorspace;
extern const int64 k_DEBUG_LOG_COOKIE;
extern const int64 k_EXTR_PREFIX_INVALID;
extern const int64 k_U_REGEX_ERROR_START;
extern const int64 k_MW_OrEvaluateOperator;
extern const int64 k_SORT_NUMERIC;
extern const int64 k_CURLINFO_HEADER_OUT;
extern const int64 k_MW_UndefinedCompositeOp;
extern const int64 k_MW_DiskResource;
extern const int64 k_OCI_D_LOB;
extern const int64 k_XML_DOCUMENT_NODE;
extern const int64 k_LDAP_DEREF_NEVER;
extern const StaticString k_MCRYPT_THREEWAY;
extern const int64 k_MW_ExtraExpandedStretch;
extern const int64 k_MW_AbsoluteIntent;
extern const int64 k_FORCE_GZIP;
extern const int64 k_OCI_B_BLOB;
extern const int64 k_CASE_UPPER;
extern const StaticString k_PHP_EOL;
extern const int64 k_SQLT_LNG;
extern const int64 k_SOCKET_ENETRESET;
extern const int64 k_MW_CubicFilter;
extern const int64 k_U_MISPLACED_COMPOUND_FILTER;
extern const int64 k_MYSQLI_NUM_FLAG;
extern const int64 k_MB_CASE_UPPER;
extern const int64 k_CURLE_FAILED_INIT;
extern const int64 k_MW_DrawFatalError;
extern const int64 k_IDNA_CONTAINS_NON_LDH;
extern const int64 k_T_FOREACH;
extern const int64 k_CURLOPT_UPLOAD;
extern const int64 k_MW_PixelsPerCentimeterResolution;
extern const int64 k_MYSQLI_TYPE_MEDIUM_BLOB;
extern const int64 k_CURLOPT_AUTOREFERER;
extern const int64 k_SOAP_FUNCTIONS_ALL;
extern const int64 k_SOCK_SEQPACKET;
extern const int64 k_SQLT_LVC;
extern const int64 k_MW_OptionWarning;
extern const int64 k_SQLT_ODT;
extern const int64 k_SOCKET_EFAULT;
extern const int64 k_MW_MiterJoin;
extern const int64 k_NOEXPR;
extern const int64 k_STREAM_CRYPTO_METHOD_TLS_CLIENT;
extern const int64 k_CURLOPT_USERAGENT;
extern const int64 k_MW_RegistryError;
extern const int64 k_MYSQLI_CLIENT_SSL;
extern const int64 k_CURLOPT_INTERFACE;
extern const int64 k_MW_BilevelType;
extern const int64 k_XSD_BOOLEAN;
extern const int64 k_U_MULTIPLE_DECIMAL_SEPARATORS;
extern const int64 k_E_CORE_ERROR;
extern const int64 k_RADIXCHAR;
extern const int64 k_EXIF_USE_MBSTRING;
extern const int64 k_MW_LZWCompression;
extern const int64 k_MW_XorEvaluateOperator;
extern const int64 k_XSD_GMONTH;
extern const int64 k_SOAP_WAIT_ONE_WAY_CALLS;
extern const int64 k_U_STRINGPREP_PROHIBITED_ERROR;
extern const int64 k_MW_TypeWarning;
extern const int64 k_U_MULTIPLE_CURSORS;
extern const StaticString k_MCRYPT_SERPENT;
extern const int64 k_MYSQLI_TYPE_DECIMAL;
extern const int64 k_MYSQLI_PART_KEY_FLAG;
extern const int64 k_MW_MultiplicativeGaussianNoise;
extern const int64 k_INI_PERDIR;
extern const int64 k_XML_ATTRIBUTE_ID;
extern const int64 k_MB_OVERLOAD_MAIL;
extern const int64 k_CURLOPT_SSLCERTTYPE;
extern const int64 k_SQLT_NUM;
extern const StaticString k_MCRYPT_CRYPT;
extern const int64 k_CURLE_OUT_OF_MEMORY;
extern const int64 k_SQLT_RDD;
extern const int64 k_SQLT_NTY;
extern const int64 k_MW_PlaneInterlace;
extern const int64 k_MW_ResourceLimitFatalError;
extern const int64 k_U_MALFORMED_SET;
extern const int64 k_LOG_USER;
extern const int64 k_LDAP_OPT_HOST_NAME;
extern const int64 k_CURLOPT_RETURNTRANSFER;
extern const int64 k_CURLE_FTP_WEIRD_PASV_REPLY;
extern const int64 k_CURLOPT_WRITEHEADER;
extern const int64 k_OCI_B_CLOB;
extern const int64 k_SOCKET_ENOTUNIQ;
extern const int64 k_MW_DstAtopCompositeOp;
extern const int64 k_LOG_LPR;
extern const int64 k_MW_LineInterlace;
extern const int64 k_SOCKET_EXDEV;
extern const int64 k_U_NO_WRITE_PERMISSION;
extern const int64 k_MW_MaxRGB;
extern const int64 k_SIGWINCH;
extern const int64 k_OCI_DESCRIBE_ONLY;
extern const int64 k_SOCKET_ENAMETOOLONG;
extern const int64 k_CLOCK_REALTIME;
extern const int64 k_XML_ATTRIBUTE_ENTITY;
extern const int64 k_LIBXML_ERR_FATAL;
extern const int64 k_SOCKET_ENOANO;
extern const int64 k_T_CLASS_C;
extern const int64 k_XSD_FLOAT;
extern const int64 k_LOG_UUCP;
extern const int64 k_MW_ClearCompositeOp;
extern const int64 k_STREAM_OOB;
extern const int64 k_OCI_D_ROWID;
extern const int64 k_STREAM_IGNORE_URL;
extern const int64 k_SOCKET_EBADFD;
extern const int64 k_U_ILLEGAL_CHARACTER;
extern const int64 k_SIGSTOP;
extern const int64 k_SIGTRAP;
extern const int64 k_ENT_QUOTES;
extern const int64 k_CURLE_SSL_CACERT;
extern const int64 k_LIBXML_NOBLANKS;
extern const int64 k_IDNA_PUNYCODE_ERROR;
extern const int64 k_CURLFTPSSL_TRY;
extern const int64 k_MW_CMYKColorspace;
extern const int64 k_SOAP_AUTHENTICATION_DIGEST;
extern const int64 k_CURLOPT_HEADER;
extern const StaticString k_PHP_LOCALSTATEDIR;
extern const int64 k_LOG_PID;
extern const int64 k_SOCKET_ENODEV;
extern const int64 k_SQLT_BLOB;
extern const int64 k_CURLFTPAUTH_TLS;
extern const int64 k_XML_ERROR_UNCLOSED_TOKEN;
extern const int64 k_CURLFTPAUTH_SSL;
extern const int64 k_XML_ERROR_UNCLOSED_CDATA_SECTION;
extern const int64 k_U_RESOURCE_TYPE_MISMATCH;
extern const int64 k_T_AND_EQUAL;
extern const int64 k_U_MULTIPLE_PERMILL_SYMBOLS;
extern const int64 k_E_COMPILE_ERROR;
extern const int64 k_AF_INET;
extern const int64 k_MW_MapResource;
extern const int64 k_MW_TileVirtualPixelMethod;
extern const int64 k_T_OR_EQUAL;
extern const int64 k_DOM_INVALID_ACCESS_ERR;
extern const int64 k_MW_RLECompression;
extern const int64 k_PRIO_PGRP;
extern const int64 k_SOCKET_ENOCSI;
extern const int64 k_T_UNSET;
extern const int64 k_XML_ENTITY_DECL_NODE;
extern const int64 k_SQLT_UIN;
extern const int64 k_SQLT_VCS;
extern const int64 k_XSD_BYTE;
extern const int64 k_MW_ImageFatalError;
extern const int64 k_MW_MultiplyCompositeOp;
extern const int64 k_MW_NorthGravity;
extern const int64 k_MSG_EXCEPT;
extern const int64 k_SQLT_STR;
extern const int64 k_CURLOPT_FTP_SSL;
extern const int64 k_SOCKET_EAGAIN;
extern const int64 k_MW_UndefinedPreview;
extern const int64 k_MW_CopyCompositeOp;
extern const int64 k_MW_ModuleFatalError;
extern const int64 k_CONNECTION_TIMEOUT;
extern const int64 k_XSD_GDAY;
extern const int64 k_XSD_NMTOKEN;
extern const int64 k_MYSQLI_TYPE_DATETIME;
extern const int64 k_SIGTTIN;
extern const int64 k_SOCKET_ENOENT;
extern const int64 k_CURLOPT_CUSTOMREQUEST;
extern const int64 k_DOM_NAMESPACE_ERR;
extern const int64 k_MW_UndefinedCompression;
extern const int64 k_LDAP_OPT_DEREF;
extern const int64 k_T_CASE;
extern const int64 k_MW_EvenOddRule;
extern const int64 k_STREAM_NOTIFY_FILE_SIZE_IS;
extern const int64 k_MW_PeakSignalToNoiseRatioMetric;
extern const int64 k_SOAP_DOCUMENT;
extern const int64 k_CURLE_FTP_COULDNT_RETR_FILE;
extern const int64 k_MW_UndefinedIntent;
extern const int64 k_MW_YellowChannel;
extern const int64 k_WSDL_CACHE_NONE;
extern const int64 k_SIGTSTP;
extern const int64 k_SO_TYPE;
extern const int64 k_MW_NorthEastGravity;
extern const int64 k_INTL_MAX_LOCALE_LEN;
extern const int64 k_SIGTTOU;
extern const int64 k_MW_CacheError;
extern const int64 k_CURLINFO_PRETRANSFER_TIME;
extern const int64 k_SOCKET_ECONNABORTED;
extern const int64 k_SOCKET_ENOLINK;
extern const int64 k_MW_SrcInCompositeOp;
extern const int64 k_MW_GrayscalePreview;
extern const int64 k_MW_SegmentPreview;
extern const int64 k_SOCKET_EADDRNOTAVAIL;
extern const int64 k_CURLE_SSL_ENGINE_NOTFOUND;
extern const int64 k_XML_ERROR_RECURSIVE_ENTITY_REF;
extern const int64 k_SOAP_ACTOR_UNLIMATERECEIVER;
extern const int64 k_SQLT_CLOB;
extern const int64 k_MW_UndefinedRule;
extern const int64 k_SOCKET_EPFNOSUPPORT;
extern const int64 k_MW_DstOutCompositeOp;
extern const int64 k_MW_PreviousDispose;
extern const int64 k_MW_ConfigureError;
extern const int64 k_GLOB_MARK;
extern const int64 k_T_RETURN;
extern const int64 k_CURLAUTH_NTLM;
extern const StaticString k_MCRYPT_ENIGNA;
extern const int64 k_X509_PURPOSE_SMIME_ENCRYPT;
extern const int64 k_SOCKET_EREMCHG;
extern const int64 k_SOAP_PERSISTENCE_SESSION;
extern const StaticString k_MCRYPT_SAFER128;
extern const int64 k_ICONV_MIME_DECODE_CONTINUE_ON_ERROR;
extern const int64 k_OCI_DTYPE_ROWID;
extern const int64 k_MCRYPT_DECRYPT;
extern const int64 k_MW_YUVColorspace;
extern const int64 k_CREDITS_SAPI;
extern const int64 k_T_SL_EQUAL;
extern const int64 k_INI_ALL;
extern const int64 k_CURLOPT_COOKIEJAR;
extern const int64 k_UPLOAD_ERR_OK;
extern const int64 k_MW_CacheWarning;
extern const int64 k_HASH_HMAC;
extern const int64 k_MW_ReplaceMethod;
extern const int64 k_MSG_EOF;
extern const int64 k_U_BAD_VARIABLE_DEFINITION;
extern const int64 k_MW_GaussianFilter;
extern const int64 k_SOCKET_ENOLCK;
extern const int64 k_SEEK_CUR;
extern const int64 k_CURLOPT_FRESH_CONNECT;
extern const int64 k_GD_BUNDLED;
extern const int64 k_SEEK_END;
extern const int64 k_MW_SaturationIntent;
extern const int64 k_MSG_EOR;
extern const int64 k_MW_NoInterlace;
extern const int64 k_SIGUSR1;
extern const int64 k_U_SORT_KEY_TOO_SHORT_WARNING;
extern const int64 k_SIGXCPU;
extern const int64 k_SIGUSR2;
extern const int64 k_SOCKET_EBADE;
extern const int64 k_MYSQLI_PRI_KEY_FLAG;
extern const int64 k_SOCKET_EBADF;
extern const int64 k_CURLINFO_REQUEST_SIZE;
extern const int64 k_CURLOPT_TIMECONDITION;
extern const int64 k_FNM_PATHNAME;
extern const int64 k_CURL_TIMECOND_IFUNMODSINCE;
extern const int64 k_MW_SharpenPreview;
extern const int64 k_SQLT_BDOUBLE;
extern const int64 k_SOCKET_EBADR;
extern const int64 k_MW_PointFilter;
extern const int64 k_SOCKET_EOPNOTSUPP;
extern const int64 k_U_UNMATCHED_BRACES;
extern const int64 k_ENT_NOQUOTES;
extern const StaticString k_PHP_OS;
extern const int64 k_PSFS_FEED_ME;
extern const int64 k_LOG_WARNING;
extern const int64 k_SOCKET_ENOMEM;
extern const int64 k_CURLE_TELNET_OPTION_SYNTAX;
extern const int64 k_PATHINFO_FILENAME;
extern const StaticString k_PEAR_INSTALL_DIR;
extern const int64 k_PHP_URL_QUERY;
extern const int64 k_XSD_GMONTHDAY;
extern const int64 k_MW_UndefinedAlign;
extern const StaticString k_MCRYPT_BLOWFISH;
extern const int64 k_CURLE_FTP_CANT_GET_HOST;
extern const int64 k_PKCS7_NOSIGS;
extern const int64 k_XML_CDATA_SECTION_NODE;
extern const int64 k_U_MESSAGE_PARSE_ERROR;
extern const int64 k_SOCKET_EADV;
extern const int64 k_MW_QuantizePreview;
extern const int64 k_CURLOPT_QUOTE;
extern const int64 k_STREAM_CRYPTO_METHOD_SSLv3_SERVER;
extern const int64 k_STREAM_NOTIFY_CONNECT;
extern const int64 k_SOAP_AUTHENTICATION_BASIC;
extern const int64 k_IMG_FILTER_SELECTIVE_BLUR;
extern const int64 k_CURLINFO_SIZE_UPLOAD;
extern const int64 k_MW_BoxFilter;
extern const int64 k_OPENSSL_CIPHER_3DES;
extern const int64 k_SOCKET_ENONET;
extern const int64 k_PREG_PATTERN_ORDER;
extern const int64 k_SOCKET_EINVAL;
extern const StaticString k_MCRYPT_SAFER64;
extern const int64 k_T_DIV_EQUAL;
extern const int64 k_MW_ModuleError;
extern const int64 k_U_INVALID_TABLE_FILE;
extern const int64 k_T_ELSEIF;
extern const int64 k_T_STRING_CAST;


// Get Constant Table
Variant get_builtin_constant(CStrRef name) {
  DECLARE_SYSTEM_GLOBALS(g);
  const char* s = name.data();
  int64 hash = hash_string(s);
  switch (hash & 4095) {
    case 5:
      HASH_RETURN(0x22079DF7EF397005LL, k_MW_HSLColorspace, MW_HSLColorspace);
      break;
    case 6:
      HASH_RETURN(0x427ADB94318BA006LL, k_MB_CASE_LOWER, MB_CASE_LOWER);
      break;
    case 7:
      HASH_RETURN(0x3C9B524C0D75C007LL, k_LOG_LOCAL6, LOG_LOCAL6);
      HASH_RETURN(0x3F8D31CC5C991007LL, k_CURLOPT_NETRC, CURLOPT_NETRC);
      break;
    case 9:
      HASH_RETURN(0x2EAB3056565E0009LL, k_STREAM_NOTIFY_MIME_TYPE_IS, STREAM_NOTIFY_MIME_TYPE_IS);
      break;
    case 10:
      HASH_RETURN(0x7DC287493FD4600ALL, k_PATHINFO_FILENAME, PATHINFO_FILENAME);
      HASH_RETURN(0x59D30BBD3CC7D00ALL, k_SOCKET_ENOENT, SOCKET_ENOENT);
      break;
    case 11:
      HASH_RETURN(0x7A5A4FE5207B600BLL, k_MW_SwirlPreview, MW_SwirlPreview);
      break;
    case 19:
      HASH_RETURN(0x4F426AC7CDD8A013LL, k_MW_TypeError, MW_TypeError);
      break;
    case 20:
      HASH_RETURN(0x3883A319AEB61014LL, k_U_BRK_INIT_ERROR, U_BRK_INIT_ERROR);
      break;
    case 23:
      HASH_RETURN(0x73AE4B48D8F03017LL, k_STREAM_SHUT_WR, STREAM_SHUT_WR);
      break;
    case 32:
      HASH_RETURN(0x67901B3F70900020LL, k_SOCKET_EBADFD, SOCKET_EBADFD);
      break;
    case 35:
      HASH_RETURN(0x2B10C59571E39023LL, k_CURLOPT_CAPATH, CURLOPT_CAPATH);
      break;
    case 36:
      HASH_RETURN(0x2AB900E06ED1A024LL, k_MCRYPT_RIJNDAEL_128, MCRYPT_RIJNDAEL_128);
      break;
    case 41:
      HASH_RETURN(0x74D28B5FB562E029LL, k_ICONV_MIME_DECODE_CONTINUE_ON_ERROR, ICONV_MIME_DECODE_CONTINUE_ON_ERROR);
      break;
    case 42:
      HASH_RETURN(0x27AA50A19650502ALL, k_CURLE_FTP_COULDNT_SET_BINARY, CURLE_FTP_COULDNT_SET_BINARY);
      break;
    case 45:
      HASH_RETURN(0x369BD3C84577102DLL, k_MW_FileOpenError, MW_FileOpenError);
      break;
    case 46:
      HASH_RETURN(0x2EB86189B5FCF02ELL, k_UCOL_IDENTICAL, UCOL_IDENTICAL);
      HASH_RETURN(0x4FE908A1E1FC002ELL, k_MW_OilPaintPreview, MW_OilPaintPreview);
      break;
    case 53:
      HASH_RETURN(0x03D7422B63552035LL, k_MW_WarningException, MW_WarningException);
      break;
    case 55:
      HASH_RETURN(0x6223F293818E4037LL, k_MW_OverlineDecoration, MW_OverlineDecoration);
      break;
    case 56:
      HASH_RETURN(0x7BFDF81D16304038LL, k_LIBXML_NOENT, LIBXML_NOENT);
      HASH_RETURN(0x0D2E1084CDAD0038LL, k_SOCKET_EACCES, SOCKET_EACCES);
      break;
    case 57:
      HASH_RETURN(0x305D14A7AEA6E039LL, k_CURLE_HTTP_POST_ERROR, CURLE_HTTP_POST_ERROR);
      break;
    case 62:
      HASH_RETURN(0x5FD2CB246217903ELL, k_SOCKET_ENFILE, SOCKET_ENFILE);
      HASH_RETURN(0x5A685A8B923EF03ELL, k_GD_MAJOR_VERSION, GD_MAJOR_VERSION);
      break;
    case 66:
      HASH_RETURN(0x165DDF876D7B8042LL, k_MCC_ARG_WINDOW_MAX, MCC_ARG_WINDOW_MAX);
      break;
    case 67:
      HASH_RETURN(0x1B8359C060BEA043LL, k_MYSQLI_TYPE_FLOAT, MYSQLI_TYPE_FLOAT);
      break;
    case 70:
      HASH_RETURN(0x2EAC6C54274D9046LL, k_CURLE_FILESIZE_EXCEEDED, CURLE_FILESIZE_EXCEEDED);
      HASH_RETURN(0x120F5D0A6F7B6046LL, k_MW_QuadraticFilter, MW_QuadraticFilter);
      HASH_RETURN(0x58333A9A1EAD5046LL, k_OCI_DTYPE_LOB, OCI_DTYPE_LOB);
      HASH_RETURN(0x24E35407C7ECB046LL, k_LDAP_DEREF_FINDING, LDAP_DEREF_FINDING);
      break;
    case 72:
      HASH_RETURN(0x24D76667BF633048LL, k_MW_CorruptImageError, MW_CorruptImageError);
      break;
    case 73:
      HASH_RETURN(0x5DE3E748D9D8E049LL, k_IMG_ARC_CHORD, IMG_ARC_CHORD);
      break;
    case 76:
      HASH_RETURN(0x63640164CF34D04CLL, k_U_VARIABLE_RANGE_OVERLAP, U_VARIABLE_RANGE_OVERLAP);
      break;
    case 78:
      HASH_RETURN(0x65AB783463AC404ELL, k_PRIO_USER, PRIO_USER);
      break;
    case 83:
      HASH_RETURN(0x3834ADF336A48053LL, k_CURLE_BAD_CALLING_ORDER, CURLE_BAD_CALLING_ORDER);
      break;
    case 88:
      HASH_RETURN(0x191F3AC40DACA058LL, k_NOEXPR, NOEXPR);
      HASH_RETURN(0x5DECA34BD518F058LL, k_CURLOPT_SSLENGINE_DEFAULT, CURLOPT_SSLENGINE_DEFAULT);
      break;
    case 90:
      HASH_RETURN(0x3B233A808E27205ALL, k_X509_PURPOSE_SMIME_SIGN, X509_PURPOSE_SMIME_SIGN);
      break;
    case 91:
      HASH_RETURN(0x529FF2519242105BLL, k_MYSQL_BOTH, MYSQL_BOTH);
      break;
    case 93:
      HASH_RETURN(0x32FEF2218E3D005DLL, k_U_BRK_ERROR_START, U_BRK_ERROR_START);
      break;
    case 94:
      HASH_RETURN(0x0775673C011FE05ELL, k_M_SQRT3, M_SQRT3);
      HASH_RETURN(0x1066F0380935705ELL, k_CURLE_BAD_PASSWORD_ENTERED, CURLE_BAD_PASSWORD_ENTERED);
      HASH_RETURN(0x60E71BCBB155905ELL, k_OPENSSL_VERSION_NUMBER, OPENSSL_VERSION_NUMBER);
      break;
    case 95:
      HASH_RETURN(0x025C97AC83F2605FLL, k_PHP_EXTENSION_DIR, PHP_EXTENSION_DIR);
      HASH_RETURN(0x05BD0F7CB619405FLL, k_XHPROF_FLAGS_MEMORY, XHPROF_FLAGS_MEMORY);
      break;
    case 97:
      HASH_RETURN(0x0D39E8DB4B050061LL, k_CURLE_URL_MALFORMAT_USER, CURLE_URL_MALFORMAT_USER);
      break;
    case 99:
      HASH_RETURN(0x1B9FCA1518C08063LL, k_SQLT_VCS, SQLT_VCS);
      break;
    case 101:
      HASH_RETURN(0x4DBAD5248E28E065LL, k_GD_MINOR_VERSION, GD_MINOR_VERSION);
      break;
    case 102:
      HASH_RETURN(0x162869AD09667066LL, k_SOCKET_EMSGSIZE, SOCKET_EMSGSIZE);
      break;
    case 104:
      HASH_RETURN(0x58DE2F532062E068LL, k_DNS_HINFO, DNS_HINFO);
      break;
    case 105:
      HASH_RETURN(0x26831E046E602069LL, k_MYSQLI_PART_KEY_FLAG, MYSQLI_PART_KEY_FLAG);
      break;
    case 107:
      HASH_RETURN(0x48A3A28E7886406BLL, k_SOCKET_EREMOTEIO, SOCKET_EREMOTEIO);
      break;
    case 108:
      HASH_RETURN(0x1253AD3A8CEFA06CLL, k_PHPMCC_USED_SLOW_PATH, PHPMCC_USED_SLOW_PATH);
      break;
    case 110:
      HASH_RETURN(0x23364B3005FE106ELL, k_U_TRAILING_BACKSLASH, U_TRAILING_BACKSLASH);
      break;
    case 112:
      HASH_RETURN(0x43AD63E370BD6070LL, k_E_COMPILE_ERROR, E_COMPILE_ERROR);
      break;
    case 115:
      HASH_RETURN(0x708BF44942953073LL, k_MW_DstInCompositeOp, MW_DstInCompositeOp);
      HASH_RETURN(0x476F7EC294E4B073LL, k_MW_SolarizePreview, MW_SolarizePreview);
      break;
    case 118:
      HASH_RETURN(0x0116B9772230A076LL, k_FNM_CASEFOLD, FNM_CASEFOLD);
      break;
    case 122:
      HASH_RETURN(0x5C6D7235E403E07ALL, k_STREAM_CRYPTO_METHOD_TLS_SERVER, STREAM_CRYPTO_METHOD_TLS_SERVER);
      break;
    case 141:
      HASH_RETURN(0x40914964F267908DLL, k_CURLINFO_SPEED_DOWNLOAD, CURLINFO_SPEED_DOWNLOAD);
      break;
    case 143:
      HASH_RETURN(0x0A853395B8ABA08FLL, k_T_BOOLEAN_AND, T_BOOLEAN_AND);
      break;
    case 144:
      HASH_RETURN(0x23BF045B559AC090LL, k_T_EXTENDS, T_EXTENDS);
      break;
    case 145:
      HASH_RETURN(0x163178A011E18091LL, k_HTML_SPECIALCHARS, HTML_SPECIALCHARS);
      break;
    case 149:
      HASH_RETURN(0x3EFC91D453928095LL, k_ICONV_MIME_DECODE_STRICT, ICONV_MIME_DECODE_STRICT);
      break;
    case 151:
      HASH_RETURN(0x72B7498CEA160097LL, k_MCRYPT_SKIPJACK, MCRYPT_SKIPJACK);
      HASH_RETURN(0x6717E5225F186097LL, k_MW_CMYKColorspace, MW_CMYKColorspace);
      HASH_RETURN(0x249CC4EE18443097LL, k_OCI_SEEK_CUR, OCI_SEEK_CUR);
      HASH_RETURN(0x4088FE8774F8C097LL, k_T_ENDFOR, T_ENDFOR);
      break;
    case 154:
      HASH_RETURN(0x7DF1494DB1C9B09ALL, k_CURLOPT_TRANSFERTEXT, CURLOPT_TRANSFERTEXT);
      HASH_RETURN(0x291F64C52D9BC09ALL, k_MW_DullPreview, MW_DullPreview);
      break;
    case 155:
      HASH_RETURN(0x7BE020B47FF3209BLL, k_CURLFTPAUTH_TLS, CURLFTPAUTH_TLS);
      HASH_RETURN(0x6C7282D4A03D509BLL, k_U_STRINGPREP_CHECK_BIDI_ERROR, U_STRINGPREP_CHECK_BIDI_ERROR);
      break;
    case 157:
      HASH_RETURN(0x545C08575F9F909DLL, k_CURLE_SSL_PEER_CERTIFICATE, CURLE_SSL_PEER_CERTIFICATE);
      break;
    case 158:
      HASH_RETURN(0x741CE25AA8E7A09ELL, k_CURLE_SSL_ENGINE_SETFAILED, CURLE_SSL_ENGINE_SETFAILED);
      break;
    case 160:
      HASH_RETURN(0x3BCFF366A59C30A0LL, k_CURLM_CALL_MULTI_PERFORM, CURLM_CALL_MULTI_PERFORM);
      break;
    case 167:
      HASH_RETURN(0x40F1B698E86BD0A7LL, k_M_SQRTPI, M_SQRTPI);
      HASH_RETURN(0x34ED5F28955D50A7LL, k_MW_FileResource, MW_FileResource);
      break;
    case 168:
      HASH_RETURN(0x6BE87509C64100A8LL, k_LIBXML_ERR_NONE, LIBXML_ERR_NONE);
      break;
    case 176:
      HASH_RETURN(0x2F34C34383F430B0LL, k_LOG_DAEMON, LOG_DAEMON);
      break;
    case 177:
      HASH_RETURN(0x54E38A1069E2A0B1LL, k_IDNA_PUNYCODE_ERROR, IDNA_PUNYCODE_ERROR);
      HASH_RETURN(0x188AC91EC3F880B1LL, k_SQLT_ODT, SQLT_ODT);
      break;
    case 178:
      HASH_RETURN(0x042031889E8080B2LL, k_SOCKET_ENETUNREACH, SOCKET_ENETUNREACH);
      break;
    case 179:
      HASH_RETURN(0x1D504269BD2470B3LL, k_MW_BlackmanFilter, MW_BlackmanFilter);
      break;
    case 185:
      HASH_RETURN(0x143B4F841B5FB0B9LL, k_U_MULTIPLE_EXPONENTIAL_SYMBOLS, U_MULTIPLE_EXPONENTIAL_SYMBOLS);
      HASH_RETURN(0x44E041C232EDF0B9LL, k_T_THROW, T_THROW);
      break;
    case 188:
      HASH_RETURN(0x77BB9261EECFB0BCLL, k_MW_SouthGravity, MW_SouthGravity);
      HASH_RETURN(0x0E53DA129A4F70BCLL, k_LDAP_OPT_CLIENT_CONTROLS, LDAP_OPT_CLIENT_CONTROLS);
      break;
    case 190:
      HASH_RETURN(0x7C721A82712E90BELL, k_CURLOPT_CAINFO, CURLOPT_CAINFO);
      break;
    case 197:
      HASH_RETURN(0x3734E1F98D2EE0C5LL, k_MCC_ARG_SERVERS, MCC_ARG_SERVERS);
      HASH_RETURN(0x49A29C927887A0C5LL, k_XSD_IDREFS, XSD_IDREFS);
      break;
    case 199:
      HASH_RETURN(0x2CFE05AC8C3320C7LL, k_CURL_IPRESOLVE_WHATEVER, CURL_IPRESOLVE_WHATEVER);
      break;
    case 204:
      HASH_RETURN(0x4A55CB4BDF07F0CCLL, k_XML_ATTRIBUTE_IDREF, XML_ATTRIBUTE_IDREF);
      break;
    case 205:
      HASH_RETURN(0x3441A1ABA3FE80CDLL, k_MW_SubtractEvaluateOperator, MW_SubtractEvaluateOperator);
      break;
    case 206:
      HASH_RETURN(0x5EE85E31EEDC50CELL, k_SOCKET_ENOMEM, SOCKET_ENOMEM);
      break;
    case 209:
      HASH_RETURN(0x3909AB4B264710D1LL, k_SOCKET_ENOTBLK, SOCKET_ENOTBLK);
      HASH_RETURN(0x35A650DFB90F00D1LL, k_MW_FillToBorderMethod, MW_FillToBorderMethod);
      break;
    case 210:
      HASH_RETURN(0x2394038890C480D2LL, k_OCI_D_ROWID, OCI_D_ROWID);
      break;
    case 213:
      HASH_RETURN(0x778EDAC12F8690D5LL, k_ABMON_12, ABMON_12);
      break;
    case 217:
      HASH_RETURN(0x15C7DA341C93E0D9LL, k_XML_ERROR_ASYNC_ENTITY, XML_ERROR_ASYNC_ENTITY);
      HASH_RETURN(0x377526C0A21900D9LL, k_T_ENDFOREACH, T_ENDFOREACH);
      HASH_RETURN(0x36E917F3A3A030D9LL, k_T_IMPLEMENTS, T_IMPLEMENTS);
      break;
    case 220:
      HASH_RETURN(0x3E8E74A9BBD4C0DCLL, k_MW_FileOpenWarning, MW_FileOpenWarning);
      break;
    case 222:
      HASH_RETURN(0x3BC5DBA5FE7680DELL, k_U_STATE_OLD_WARNING, U_STATE_OLD_WARNING);
      break;
    case 223:
      HASH_RETURN(0x784F8EB628DD60DFLL, k_U_FMT_PARSE_ERROR_START, U_FMT_PARSE_ERROR_START);
      break;
    case 225:
      HASH_RETURN(0x6DD05D42DBBCA0E1LL, k_PHP_DATADIR, PHP_DATADIR);
      HASH_RETURN(0x5B2F10E9551430E1LL, k_MYSQLI_TYPE_LONGLONG, MYSQLI_TYPE_LONGLONG);
      break;
    case 227:
      HASH_RETURN(0x4FC6A9FA9B35E0E3LL, k_XML_PI_NODE, XML_PI_NODE);
      break;
    case 230:
      HASH_RETURN(0x6993BDC6091260E6LL, k_MW_OptionError, MW_OptionError);
      break;
    case 231:
      HASH_RETURN(0x61CA6A1041A950E7LL, k_U_INVALID_TABLE_FILE, U_INVALID_TABLE_FILE);
      break;
    case 232:
      HASH_RETURN(0x499D4EB129ABE0E8LL, k_T_FILE, T_FILE);
      break;
    case 240:
      HASH_RETURN(0x2A7F40F6572060F0LL, k_IMG_EFFECT_NORMAL, IMG_EFFECT_NORMAL);
      break;
    case 241:
      HASH_RETURN(0x445C45466A6F20F1LL, k_SOCKET_ENOBUFS, SOCKET_ENOBUFS);
      HASH_RETURN(0x2E4F54EADDE900F1LL, k_SOAP_ENC_ARRAY, SOAP_ENC_ARRAY);
      break;
    case 243:
      HASH_RETURN(0x45D607659E0CF0F3LL, k_MW_ReduceNoisePreview, MW_ReduceNoisePreview);
      break;
    case 246:
      HASH_RETURN(0x18F8A8B94217C0F6LL, k_MCC_DGRAM_NTRIES, MCC_DGRAM_NTRIES);
      break;
    case 249:
      HASH_RETURN(0x3E3A7A47D81BF0F9LL, k_LOG_INFO, LOG_INFO);
      HASH_RETURN(0x13E6D3157BAD80F9LL, k_CURLE_SSL_CIPHER, CURLE_SSL_CIPHER);
      break;
    case 251:
      HASH_RETURN(0x35614BB5666840FBLL, k_MW_NormalStretch, MW_NormalStretch);
      break;
    case 252:
      HASH_RETURN(0x3B90AAADEB96A0FCLL, k_SIGFPE, SIGFPE);
      break;
    case 256:
      HASH_RETURN(0x380AEF9D6199A100LL, k_T_NEW, T_NEW);
      break;
    case 258:
      HASH_RETURN(0x6DF3B76679016102LL, k_MW_MeanAbsoluteErrorMetric, MW_MeanAbsoluteErrorMetric);
      break;
    case 259:
      HASH_RETURN(0x2CB14D7BD7E77103LL, k_MW_AndEvaluateOperator, MW_AndEvaluateOperator);
      break;
    case 260:
      HASH_RETURN(0x4C4DEFD46F4CB104LL, k_T_OPEN_TAG_WITH_ECHO, T_OPEN_TAG_WITH_ECHO);
      break;
    case 262:
      HASH_RETURN(0x34C392F7D6EBB106LL, k_SOL_UDP, SOL_UDP);
      HASH_RETURN(0x5CC13D449E9A8106LL, k_U_ILLEGAL_ARGUMENT_ERROR, U_ILLEGAL_ARGUMENT_ERROR);
      break;
    case 267:
      HASH_RETURN(0x118B4C355CEFB10BLL, k_SOCKET_EMFILE, SOCKET_EMFILE);
      HASH_RETURN(0x14AD1681EF6B110BLL, k_U_MISPLACED_COMPOUND_FILTER, U_MISPLACED_COMPOUND_FILTER);
      break;
    case 270:
      HASH_RETURN(0x6415537DBCA4D10ELL, k_PM_STR, PM_STR);
      break;
    case 273:
      HASH_RETURN(0x06CBB3DB2B5C5111LL, k_GLOB_NOSORT, GLOB_NOSORT);
      break;
    case 275:
      HASH_RETURN(0x5612C4D49FAF3113LL, k_CREDITS_SAPI, CREDITS_SAPI);
      break;
    case 278:
      HASH_RETURN(0x508F323F0DE93116LL, k_SO_RCVLOWAT, SO_RCVLOWAT);
      break;
    case 280:
      HASH_RETURN(0x49038AFF177BC118LL, k_LOG_CRON, LOG_CRON);
      break;
    case 281:
      HASH_RETURN(0x3F0E0374DF40C119LL, k_U_REGEX_NUMBER_TOO_BIG, U_REGEX_NUMBER_TOO_BIG);
      break;
    case 283:
      HASH_RETURN(0x7D0F3DEAA815C11BLL, k_MYSQLI_AUTO_INCREMENT_FLAG, MYSQLI_AUTO_INCREMENT_FLAG);
      break;
    case 285:
      HASH_RETURN(0x0B391B824191411DLL, k_MYSQLI_TYPE_DOUBLE, MYSQLI_TYPE_DOUBLE);
      break;
    case 286:
      HASH_RETURN(0x2A5BA04D0218F11ELL, k_CASE_LOWER, CASE_LOWER);
      HASH_RETURN(0x090443FFB5C7011ELL, k_OCI_RETURN_NULLS, OCI_RETURN_NULLS);
      break;
    case 289:
      HASH_RETURN(0x51F00A16CBFFC121LL, k_MW_DifferenceCompositeOp, MW_DifferenceCompositeOp);
      break;
    case 290:
      HASH_RETURN(0x5589FB788F200122LL, k_OPENSSL_SSLV23_PADDING, OPENSSL_SSLV23_PADDING);
      break;
    case 292:
      HASH_RETURN(0x31DEDD534D889124LL, k_OCI_TEMP_BLOB, OCI_TEMP_BLOB);
      break;
    case 296:
      HASH_RETURN(0x46850CA539E9D128LL, k_MW_StreamFatalError, MW_StreamFatalError);
      break;
    case 297:
      HASH_RETURN(0x62498AF37C414129LL, k_IMG_ARC_EDGED, IMG_ARC_EDGED);
      HASH_RETURN(0x140415FCF4E4C129LL, k_DATE_RFC822, DATE_RFC822);
      break;
    case 298:
      HASH_RETURN(0x0AC536552E01212ALL, k_PNG_FILTER_UP, PNG_FILTER_UP);
      break;
    case 299:
      HASH_RETURN(0x4BF499AE6A95A12BLL, k_MCC_SERVER_UP, MCC_SERVER_UP);
      break;
    case 301:
      HASH_RETURN(0x09D8CFF143C5012DLL, k_MW_XorEvaluateOperator, MW_XorEvaluateOperator);
      break;
    case 302:
      HASH_RETURN(0x4A5FD0F4E5ADD12ELL, k_CURLOPT_HEADERFUNCTION, CURLOPT_HEADERFUNCTION);
      break;
    case 304:
      HASH_RETURN(0x188CA8C3A8F31130LL, k_OPENSSL_CIPHER_DES, OPENSSL_CIPHER_DES);
      break;
    case 310:
      HASH_RETURN(0x2A91B7F4FD759136LL, k_MCRYPT_TWOFISH, MCRYPT_TWOFISH);
      HASH_RETURN(0x685C0D44AF9AF136LL, k_MW_LineThroughDecoration, MW_LineThroughDecoration);
      break;
    case 312:
      HASH_RETURN(0x1C8F3D80A55E2138LL, k_SUNFUNCS_RET_TIMESTAMP, SUNFUNCS_RET_TIMESTAMP);
      break;
    case 313:
      HASH_RETURN(0x6E83FBC65D1B4139LL, k_IMG_GIF, IMG_GIF);
      HASH_RETURN(0x149CD063632D8139LL, k_CURLE_TELNET_OPTION_SYNTAX, CURLE_TELNET_OPTION_SYNTAX);
      break;
    case 314:
      HASH_RETURN(0x640BCCEAFB24A13ALL, k_MCC_TMO_MS, MCC_TMO_MS);
      break;
    case 316:
      HASH_RETURN(0x451AD21F509FD13CLL, k_XSD_BOOLEAN, XSD_BOOLEAN);
      break;
    case 317:
      HASH_RETURN(0x7D444AE389E2613DLL, k_CURLOPT_FILE, CURLOPT_FILE);
      break;
    case 320:
      HASH_RETURN(0x09FD8C5060C5B140LL, k_DEFAULT_INCLUDE_PATH, DEFAULT_INCLUDE_PATH);
      break;
    case 321:
      HASH_RETURN(0x7E983EF53BD42141LL, k_OPENSSL_ALGO_SHA1, OPENSSL_ALGO_SHA1);
      break;
    case 323:
      HASH_RETURN(0x6C175FA78ADC8143LL, k_LIBXML_NOWARNING, LIBXML_NOWARNING);
      HASH_RETURN(0x4DB37DBA76037143LL, k_U_USING_FALLBACK_WARNING, U_USING_FALLBACK_WARNING);
      break;
    case 324:
      HASH_RETURN(0x242982A365105144LL, k_PHPMCC_VERSION, PHPMCC_VERSION);
      break;
    case 326:
      HASH_RETURN(0x71E66725B71CB146LL, k_SOCKET_EUSERS, SOCKET_EUSERS);
      break;
    case 327:
      HASH_RETURN(0x79033164D561A147LL, k_CURL_IPRESOLVE_V6, CURL_IPRESOLVE_V6);
      break;
    case 331:
      HASH_RETURN(0x3E5116E246A5914BLL, k_SOCKET_ENOTSOCK, SOCKET_ENOTSOCK);
      break;
    case 333:
      HASH_RETURN(0x07E54C9273E4014DLL, k_MCC_ARG_TMO, MCC_ARG_TMO);
      break;
    case 335:
      HASH_RETURN(0x4DF9F0C632EB814FLL, k_MSG_EAGAIN, MSG_EAGAIN);
      break;
    case 337:
      HASH_RETURN(0x565FFA5ECBAD9151LL, k_SQLITE3_ASSOC, SQLITE3_ASSOC);
      HASH_RETURN(0x6A49D2B6B928F151LL, k_CURLE_FILE_COULDNT_READ_FILE, CURLE_FILE_COULDNT_READ_FILE);
      break;
    case 342:
      HASH_RETURN(0x259028A31473A156LL, k_LOG_LOCAL3, LOG_LOCAL3);
      break;
    case 344:
      HASH_RETURN(0x1E52A84F16CDB158LL, k_MW_NormalStyle, MW_NormalStyle);
      break;
    case 351:
      HASH_RETURN(0x2E4075B6078C815FLL, k_MW_CacheWarning, MW_CacheWarning);
      break;
    case 353:
      HASH_RETURN(0x70925BCCF19D2161LL, k_MW_ColorBurnCompositeOp, MW_ColorBurnCompositeOp);
      break;
    case 356:
      HASH_RETURN(0x24F8A02C16A17164LL, k_X509_PURPOSE_NS_SSL_SERVER, X509_PURPOSE_NS_SSL_SERVER);
      break;
    case 357:
      HASH_RETURN(0x085CED2CE2F67165LL, k_MW_ExtraExpandedStretch, MW_ExtraExpandedStretch);
      break;
    case 358:
      HASH_RETURN(0x53490BFB7D564166LL, k_T_OBJECT_OPERATOR, T_OBJECT_OPERATOR);
      break;
    case 362:
      HASH_RETURN(0x3236091988B9B16ALL, k_PHP_URL_PORT, PHP_URL_PORT);
      break;
    case 365:
      HASH_RETURN(0x49BCF050AF62516DLL, k_IMG_EFFECT_REPLACE, IMG_EFFECT_REPLACE);
      break;
    case 366:
      HASH_RETURN(0x758094C4288E216ELL, k_MW_CacheError, MW_CacheError);
      break;
    case 369:
      HASH_RETURN(0x3539B397F70E0171LL, k_XSD_FLOAT, XSD_FLOAT);
      break;
    case 372:
      HASH_RETURN(0x2DB8B7D39720D174LL, k_CURLOPT_FOLLOWLOCATION, CURLOPT_FOLLOWLOCATION);
      break;
    case 373:
      HASH_RETURN(0x31297DF89A1AB175LL, k_SUNFUNCS_RET_DOUBLE, SUNFUNCS_RET_DOUBLE);
      HASH_RETURN(0x764AF1C97F4E0175LL, k_CURLE_PARTIAL_FILE, CURLE_PARTIAL_FILE);
      break;
    case 375:
      HASH_RETURN(0x033A40C2EFB53177LL, k_MW_UndefinedType, MW_UndefinedType);
      break;
    case 376:
      HASH_RETURN(0x782044F13ADEF178LL, k_T_INCLUDE, T_INCLUDE);
      break;
    case 377:
      HASH_RETURN(0x44E30716A70FD179LL, k_SOCKET_EAFNOSUPPORT, SOCKET_EAFNOSUPPORT);
      break;
    case 378:
      HASH_RETURN(0x3C73805E2669F17ALL, k_CURLINFO_PRIVATE, CURLINFO_PRIVATE);
      break;
    case 379:
      HASH_RETURN(0x04789C02EC68317BLL, k_STREAM_PEEK, STREAM_PEEK);
      break;
    case 380:
      HASH_RETURN(0x1848F3513E3E717CLL, k_IMG_COLOR_TILED, IMG_COLOR_TILED);
      break;
    case 384:
      HASH_RETURN(0x50AF07DFFA51D180LL, k_EXTR_PREFIX_INVALID, EXTR_PREFIX_INVALID);
      HASH_RETURN(0x2D472DCACC4A7180LL, k_DNS_CNAME, DNS_CNAME);
      break;
    case 385:
      HASH_RETURN(0x2FDCB3E64ABEF181LL, k_MW_SoftLightCompositeOp, MW_SoftLightCompositeOp);
      break;
    case 388:
      HASH_RETURN(0x75232C75C3AE8184LL, k_MSG_ENOMSG, MSG_ENOMSG);
      break;
    case 396:
      HASH_RETURN(0x684493AD30D0018CLL, k_HPHP_TRIM_CHARLIST, HPHP_TRIM_CHARLIST);
      break;
    case 397:
      HASH_RETURN(0x4E8DCC2289B8218DLL, k_MW_CopyMagentaCompositeOp, MW_CopyMagentaCompositeOp);
      break;
    case 401:
      HASH_RETURN(0x691B371D350D7191LL, k_MCC_ARG_DEFAULT_PREFIX, MCC_ARG_DEFAULT_PREFIX);
      HASH_RETURN(0x4B68DEF2F07EB191LL, k_XML_LOCAL_NAMESPACE, XML_LOCAL_NAMESPACE);
      break;
    case 402:
      HASH_RETURN(0x23F9120DF08B6192LL, k_DAY_4, DAY_4);
      break;
    case 407:
      HASH_RETURN(0x723970AB4A10C197LL, k_INFO_ENVIRONMENT, INFO_ENVIRONMENT);
      break;
    case 408:
      HASH_RETURN(0x368063F7585BE198LL, k_EXTR_PREFIX_IF_EXISTS, EXTR_PREFIX_IF_EXISTS);
      HASH_RETURN(0x72A4B3A45D00C198LL, k_OPENSSL_KEYTYPE_EC, OPENSSL_KEYTYPE_EC);
      break;
    case 411:
      HASH_RETURN(0x69F13B2D4055419BLL, k_STREAM_CRYPTO_METHOD_SSLv3_SERVER, STREAM_CRYPTO_METHOD_SSLv3_SERVER);
      HASH_RETURN(0x28A19E59FA34619BLL, k_OCI_D_LOB, OCI_D_LOB);
      break;
    case 413:
      HASH_RETURN(0x23E9BE044083D19DLL, k_M_LNPI, M_LNPI);
      break;
    case 414:
      HASH_RETURN(0x24E3EB353DA4B19ELL, k_MYSQLI_REPORT_OFF, MYSQLI_REPORT_OFF);
      break;
    case 418:
      HASH_RETURN(0x6DFC0765EBAB81A2LL, k_MCRYPT_DECRYPT, MCRYPT_DECRYPT);
      break;
    case 421:
      HASH_RETURN(0x421DE792CD6961A5LL, k_U_MEMORY_ALLOCATION_ERROR, U_MEMORY_ALLOCATION_ERROR);
      break;
    case 422:
      HASH_RETURN(0x57B0D81DB48C41A6LL, k_OCI_B_NUM, OCI_B_NUM);
      break;
    case 423:
      HASH_RETURN(0x59937C7A8FE691A7LL, k_M_PI_2, M_PI_2);
      HASH_RETURN(0x1D7804BB22E7E1A7LL, k_LOG_NDELAY, LOG_NDELAY);
      break;
    case 425:
      HASH_RETURN(0x66F66C34345AE1A9LL, k_SOCKET_ECONNRESET, SOCKET_ECONNRESET);
      break;
    case 426:
      HASH_RETURN(0x41CEB68707B291AALL, k_U_INTERNAL_PROGRAM_ERROR, U_INTERNAL_PROGRAM_ERROR);
      break;
    case 427:
      HASH_RETURN(0x3D437EACE05F11ABLL, k_XML_ENTITY_DECL_NODE, XML_ENTITY_DECL_NODE);
      break;
    case 429:
      HASH_RETURN(0x434B13D254DEE1ADLL, k_STREAM_CRYPTO_METHOD_SSLv2_CLIENT, STREAM_CRYPTO_METHOD_SSLv2_CLIENT);
      HASH_RETURN(0x76DEA24C644F01ADLL, k_MW_SincFilter, MW_SincFilter);
      HASH_RETURN(0x7D900C62865A91ADLL, k_MYSQLI_TYPE_TIME, MYSQLI_TYPE_TIME);
      break;
    case 435:
      HASH_RETURN(0x2B43B6A242E051B3LL, k_GRAPHEME_EXTR_MAXBYTES, GRAPHEME_EXTR_MAXBYTES);
      break;
    case 436:
      HASH_RETURN(0x125E7D9D64F581B4LL, k_MW_CacheFatalError, MW_CacheFatalError);
      break;
    case 437:
      HASH_RETURN(0x31EAEC47352351B5LL, k_CURLOPT_ENCODING, CURLOPT_ENCODING);
      break;
    case 439:
      HASH_RETURN(0x59AAE1BAB6E251B7LL, k_SOCKET_ENODEV, SOCKET_ENODEV);
      HASH_RETURN(0x4B973B36D9D711B7LL, k_PNG_FILTER_SUB, PNG_FILTER_SUB);
      break;
    case 440:
      HASH_RETURN(0x134E8D31B1E7C1B8LL, k_XML_ERROR_NONE, XML_ERROR_NONE);
      HASH_RETURN(0x3338F347689101B8LL, k_MW_HanningFilter, MW_HanningFilter);
      HASH_RETURN(0x1C77297ADBA211B8LL, k_U_INVALID_TABLE_FORMAT, U_INVALID_TABLE_FORMAT);
      break;
    case 443:
      HASH_RETURN(0x0AFB77DBFC0841BBLL, k_E_CORE_WARNING, E_CORE_WARNING);
      break;
    case 444:
      HASH_RETURN(0x62CAA7398AB841BCLL, k_SQLT_BFLOAT, SQLT_BFLOAT);
      break;
    case 446:
      HASH_RETURN(0x05FB39895CB581BELL, k_UCOL_NON_IGNORABLE, UCOL_NON_IGNORABLE);
      break;
    case 447:
      HASH_RETURN(0x3CCBEA4C0CE031BFLL, k_LIBXML_NOEMPTYTAG, LIBXML_NOEMPTYTAG);
      break;
    case 449:
      HASH_RETURN(0x7D56706ABE12A1C1LL, k_MW_ResourceLimitError, MW_ResourceLimitError);
      break;
    case 450:
      HASH_RETURN(0x1702970FD93A71C2LL, k_MW_HammingFilter, MW_HammingFilter);
      break;
    case 452:
      HASH_RETURN(0x3F80D588B8A951C4LL, k_OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_PKCS1_OAEP_PADDING);
      break;
    case 454:
      HASH_RETURN(0x077B23F8471641C6LL, k_MSG_WAITALL, MSG_WAITALL);
      break;
    case 457:
      HASH_RETURN(0x23B24F5A215BC1C9LL, k_ASSERT_ACTIVE, ASSERT_ACTIVE);
      break;
    case 461:
      HASH_RETURN(0x7ADA5CA60966D1CDLL, k_MW_AddNoisePreview, MW_AddNoisePreview);
      break;
    case 462:
      HASH_RETURN(0x00DFD8C30BCED1CELL, k_T_FUNC_C, T_FUNC_C);
      break;
    case 464:
      HASH_RETURN(0x2C2F185F8164E1D0LL, k_SOCK_STREAM, SOCK_STREAM);
      break;
    case 465:
      HASH_RETURN(0x3E276CAB068B01D1LL, k_MYSQLI_INIT_COMMAND, MYSQLI_INIT_COMMAND);
      break;
    case 470:
      HASH_RETURN(0x53B27B033CEC71D6LL, k_COUNT_RECURSIVE, COUNT_RECURSIVE);
      break;
    case 471:
      HASH_RETURN(0x664A69917264B1D7LL, k_IMG_ARC_PIE, IMG_ARC_PIE);
      break;
    case 472:
      HASH_RETURN(0x089D261CA15031D8LL, k_SOAP_AUTHENTICATION_BASIC, SOAP_AUTHENTICATION_BASIC);
      break;
    case 473:
      HASH_RETURN(0x3C4BE0D0E97501D9LL, k_CURLE_FTP_WRITE_ERROR, CURLE_FTP_WRITE_ERROR);
      HASH_RETURN(0x44EE7CD09091A1D9LL, k_CURLE_HTTP_RANGE_ERROR, CURLE_HTTP_RANGE_ERROR);
      break;
    case 474:
      HASH_RETURN(0x471A3A9CAE2EB1DALL, k_STREAM_IPPROTO_IP, STREAM_IPPROTO_IP);
      break;
    case 478:
      HASH_RETURN(0x25EABAA903DCF1DELL, k_CURLM_INTERNAL_ERROR, CURLM_INTERNAL_ERROR);
      break;
    case 479:
      HASH_RETURN(0x147159A9911D11DFLL, k_T_REQUIRE, T_REQUIRE);
      break;
    case 481:
      HASH_RETURN(0x76A49DAC4A5F21E1LL, k_MW_ExclusionCompositeOp, MW_ExclusionCompositeOp);
      HASH_RETURN(0x1A70FFCD298CF1E1LL, k_MYSQLI_TYPE_STRING, MYSQLI_TYPE_STRING);
      break;
    case 483:
      HASH_RETURN(0x66493CAECEFAB1E3LL, k_UPLOAD_ERR_FORM_SIZE, UPLOAD_ERR_FORM_SIZE);
      break;
    case 487:
      HASH_RETURN(0x2E0D473C4F1F31E7LL, k_XML_ERROR_TAG_MISMATCH, XML_ERROR_TAG_MISMATCH);
      break;
    case 492:
      HASH_RETURN(0x48F4280605B5D1ECLL, k_T_IS_NOT_IDENTICAL, T_IS_NOT_IDENTICAL);
      break;
    case 493:
      HASH_RETURN(0x5E38D4F4DF3E81EDLL, k_MCC_ARG_POLL_TMO, MCC_ARG_POLL_TMO);
      HASH_RETURN(0x18C103CFDBD061EDLL, k_MCRYPT_BLOWFISH, MCRYPT_BLOWFISH);
      break;
    case 497:
      HASH_RETURN(0x2B9EA864B4CDF1F1LL, k_MW_SrcOutCompositeOp, MW_SrcOutCompositeOp);
      break;
    case 502:
      HASH_RETURN(0x2B5BC4677592F1F6LL, k_PKCS7_NOCERTS, PKCS7_NOCERTS);
      break;
    case 503:
      HASH_RETURN(0x78E26CB9768801F7LL, k_POSIX_X_OK, POSIX_X_OK);
      break;
    case 505:
      HASH_RETURN(0x56CE2F535F97A1F9LL, k_MW_CopyCyanCompositeOp, MW_CopyCyanCompositeOp);
      break;
    case 509:
      HASH_RETURN(0x44301A1317A401FDLL, k_FNM_PATHNAME, FNM_PATHNAME);
      HASH_RETURN(0x6A05B29805ED71FDLL, k_SOCKET_ENXIO, SOCKET_ENXIO);
      break;
    case 510:
      HASH_RETURN(0x41EB97A0D996B1FELL, k_LDAP_OPT_SIZELIMIT, LDAP_OPT_SIZELIMIT);
      break;
    case 512:
      HASH_RETURN(0x220AEBF3CE0DD200LL, k_CURLOPT_SSLCERTTYPE, CURLOPT_SSLCERTTYPE);
      HASH_RETURN(0x432F1693EB75E200LL, k_T_DOUBLE_CAST, T_DOUBLE_CAST);
      break;
    case 513:
      HASH_RETURN(0x10BBA645AF0F0201LL, k_MW_MultiplicativeGaussianNoise, MW_MultiplicativeGaussianNoise);
      HASH_RETURN(0x52472178725EB201LL, k_SIGTSTP, SIGTSTP);
      break;
    case 514:
      HASH_RETURN(0x7F565A8D62FC3202LL, k_CURLE_COULDNT_RESOLVE_HOST, CURLE_COULDNT_RESOLVE_HOST);
      break;
    case 515:
      HASH_RETURN(0x6275F0000C7BA203LL, k_SOCKET_EROFS, SOCKET_EROFS);
      HASH_RETURN(0x7B9363B88DB9B203LL, k_SOAP_COMPRESSION_ACCEPT, SOAP_COMPRESSION_ACCEPT);
      break;
    case 521:
      HASH_RETURN(0x5280025069C04209LL, k_SOCKET_ENOMSG, SOCKET_ENOMSG);
      break;
    case 524:
      HASH_RETURN(0x5247B815BD67F20CLL, k_PHP_LOCALSTATEDIR, PHP_LOCALSTATEDIR);
      break;
    case 525:
      HASH_RETURN(0x0D5ACF18B2D6320DLL, k_ERA, ERA);
      HASH_RETURN(0x43695032DF31A20DLL, k_XSD_SHORT, XSD_SHORT);
      break;
    case 534:
      HASH_RETURN(0x24C8AA4D07AC5216LL, k_MW_PlusCompositeOp, MW_PlusCompositeOp);
      break;
    case 535:
      HASH_RETURN(0x5ABC7FB06285B217LL, k_CRYPT_BLOWFISH, CRYPT_BLOWFISH);
      break;
    case 540:
      HASH_RETURN(0x2E47072D968CA21CLL, k_U_BAD_VARIABLE_DEFINITION, U_BAD_VARIABLE_DEFINITION);
      break;
    case 541:
      HASH_RETURN(0x2DF7204E47E6C21DLL, k_MW_MissingDelegateWarning, MW_MissingDelegateWarning);
      HASH_RETURN(0x6F790B9D7AF1821DLL, k_T_LOGICAL_AND, T_LOGICAL_AND);
      break;
    case 542:
      HASH_RETURN(0x171DD7FF1910C21ELL, k_DEBUG_LOG_USER, DEBUG_LOG_USER);
      break;
    case 543:
      HASH_RETURN(0x412CD1382CE0521FLL, k_DOM_NOT_FOUND_ERR, DOM_NOT_FOUND_ERR);
      HASH_RETURN(0x14133F8D7E51D21FLL, k_INFO_CREDITS, INFO_CREDITS);
      break;
    case 544:
      HASH_RETURN(0x0A17581916F41220LL, k_CURLE_FTP_SSL_FAILED, CURLE_FTP_SSL_FAILED);
      break;
    case 552:
      HASH_RETURN(0x29F2C3F8843D2228LL, k_SOCKET_ETIMEDOUT, SOCKET_ETIMEDOUT);
      HASH_RETURN(0x39051623AFC62228LL, k_SOAP_DOCUMENT, SOAP_DOCUMENT);
      break;
    case 553:
      HASH_RETURN(0x341A23ACEC9CE229LL, k_MCC_CONSISTENCY_IGNORE, MCC_CONSISTENCY_IGNORE);
      break;
    case 557:
      HASH_RETURN(0x47E23B8709BBF22DLL, k_OPENSSL_VERSION_TEXT, OPENSSL_VERSION_TEXT);
      HASH_RETURN(0x3C7A6BA33C6EC22DLL, k_MW_MaxEvaluateOperator, MW_MaxEvaluateOperator);
      HASH_RETURN(0x4E3A159B3A7D422DLL, k_MW_PeakSignalToNoiseRatioMetric, MW_PeakSignalToNoiseRatioMetric);
      break;
    case 560:
      HASH_RETURN(0x075DA4F5613C7230LL, k_MW_GreenChannel, MW_GreenChannel);
      break;
    case 563:
      HASH_RETURN(0x349855B7ABB09233LL, k_SIG_ERR, SIG_ERR);
      break;
    case 564:
      HASH_RETURN(0x20DE23C56C971234LL, k_DOM_INDEX_SIZE_ERR, DOM_INDEX_SIZE_ERR);
      break;
    case 565:
      HASH_RETURN(0x12DF89577506F235LL, k_MCC_DELETE_NOTFOUND, MCC_DELETE_NOTFOUND);
      HASH_RETURN(0x5EEB3A56F10EA235LL, k_LDAP_OPT_MATCHED_DN, LDAP_OPT_MATCHED_DN);
      break;
    case 566:
      HASH_RETURN(0x6EC0C8D3D9175236LL, k_T_PUBLIC, T_PUBLIC);
      break;
    case 569:
      HASH_RETURN(0x19F3B7F325559239LL, k_SOCKET_ESPIPE, SOCKET_ESPIPE);
      break;
    case 572:
      HASH_RETURN(0x4094703FB8A4623CLL, k_SOCKET_ENOANO, SOCKET_ENOANO);
      HASH_RETURN(0x0D125C842F3E223CLL, k_MCRYPT_SAFER64, MCRYPT_SAFER64);
      break;
    case 573:
      HASH_RETURN(0x1C790270BB9B823DLL, k_T_CASE, T_CASE);
      break;
    case 574:
      HASH_RETURN(0x5634BF0CE8EAB23ELL, k_DOM_VALIDATION_ERR, DOM_VALIDATION_ERR);
      HASH_RETURN(0x27F2762A0A00F23ELL, k_SO_SNDTIMEO, SO_SNDTIMEO);
      HASH_RETURN(0x3E25D27E876AC23ELL, k_U_SAFECLONE_ALLOCATED_WARNING, U_SAFECLONE_ALLOCATED_WARNING);
      break;
    case 575:
      HASH_RETURN(0x287AB2CF3F9B923FLL, k_PKCS7_DETACHED, PKCS7_DETACHED);
      break;
    case 578:
      HASH_RETURN(0x3ACFA7C2982C8242LL, k_MCC_ARG_DEBUG_LOGFILE, MCC_ARG_DEBUG_LOGFILE);
      break;
    case 582:
      HASH_RETURN(0x7F7B3D2EF8483246LL, k_CURLFTPSSL_TRY, CURLFTPSSL_TRY);
      break;
    case 583:
      HASH_RETURN(0x6018A619DB8D9247LL, k_CURLOPT_SSL_VERIFYHOST, CURLOPT_SSL_VERIFYHOST);
      break;
    case 584:
      HASH_RETURN(0x1381ADDF8A942248LL, k_MW_HueCompositeOp, MW_HueCompositeOp);
      HASH_RETURN(0x5EC35AD5B9A19248LL, k_MW_SubtractCompositeOp, MW_SubtractCompositeOp);
      break;
    case 587:
      HASH_RETURN(0x72229207EBA2224BLL, k_SIGTTIN, SIGTTIN);
      break;
    case 590:
      HASH_RETURN(0x73A7F14F205CC24ELL, k_XSD_QNAME, XSD_QNAME);
      break;
    case 591:
      HASH_RETURN(0x7A9D570E193F724FLL, k_IMG_EFFECT_ALPHABLEND, IMG_EFFECT_ALPHABLEND);
      HASH_RETURN(0x3C13389DB311F24FLL, k_IDNA_MALLOC_ERROR, IDNA_MALLOC_ERROR);
      HASH_RETURN(0x42BC8083C1F9124FLL, k_T_ENCAPSED_AND_WHITESPACE, T_ENCAPSED_AND_WHITESPACE);
      break;
    case 595:
      HASH_RETURN(0x355F9D2D97ECB253LL, k_XML_ERROR_INCORRECT_ENCODING, XML_ERROR_INCORRECT_ENCODING);
      break;
    case 597:
      HASH_RETURN(0x593FE694D1BB1255LL, k_MCC_PROXY_GET_OP, MCC_PROXY_GET_OP);
      HASH_RETURN(0x3EA72BED56FC6255LL, k_CURLOPT_UNRESTRICTED_AUTH, CURLOPT_UNRESTRICTED_AUTH);
      break;
    case 600:
      HASH_RETURN(0x2245E0B5CB0FE258LL, k_SOCKET_EBADE, SOCKET_EBADE);
      break;
    case 602:
      HASH_RETURN(0x417E7879E2D4525ALL, k_U_INVALID_RBT_SYNTAX, U_INVALID_RBT_SYNTAX);
      break;
    case 607:
      HASH_RETURN(0x5DF7F07E50E0B25FLL, k_MW_CenterAlign, MW_CenterAlign);
      break;
    case 610:
      HASH_RETURN(0x74E66DE996EE7262LL, k_CLOCK_PROCESS_CPUTIME_ID, CLOCK_PROCESS_CPUTIME_ID);
      break;
    case 613:
      HASH_RETURN(0x1C4252DFF3BD2265LL, k_MYSQLI_RPL_ADMIN, MYSQLI_RPL_ADMIN);
      break;
    case 616:
      HASH_RETURN(0x1B2F2E42374C3268LL, k_SOCKET_ENOSYS, SOCKET_ENOSYS);
      break;
    case 618:
      HASH_RETURN(0x5B55E1129AA9826ALL, k_MW_CatromFilter, MW_CatromFilter);
      break;
    case 621:
      HASH_RETURN(0x42FCCBA127F3B26DLL, k_DAY_3, DAY_3);
      break;
    case 622:
      HASH_RETURN(0x165965CF421BB26ELL, k_MYSQLI_CLIENT_INTERACTIVE, MYSQLI_CLIENT_INTERACTIVE);
      break;
    case 627:
      HASH_RETURN(0x56C6427F10C24273LL, k_STREAM_NOTIFY_COMPLETED, STREAM_NOTIFY_COMPLETED);
      break;
    case 628:
      HASH_RETURN(0x3659948CD65DB274LL, k_SOCKET_EBUSY, SOCKET_EBUSY);
      break;
    case 630:
      HASH_RETURN(0x113B3E85DF8FB276LL, k_M_LN10, M_LN10);
      HASH_RETURN(0x782069B95F67F276LL, k_SOCKET_EPROTO, SOCKET_EPROTO);
      break;
    case 631:
      HASH_RETURN(0x2BD53205C251B277LL, k_STREAM_SHUT_RD, STREAM_SHUT_RD);
      break;
    case 632:
      HASH_RETURN(0x64DE7307E05FD278LL, k_MW_UniformNoise, MW_UniformNoise);
      break;
    case 634:
      HASH_RETURN(0x14A7EDF65F3DD27ALL, k_CURLOPT_BINARYTRANSFER, CURLOPT_BINARYTRANSFER);
      break;
    case 635:
      HASH_RETURN(0x7A39A5C5CE68C27BLL, k_STREAM_NOTIFY_SEVERITY_WARN, STREAM_NOTIFY_SEVERITY_WARN);
      break;
    case 638:
      HASH_RETURN(0x4F255D7C3AE5B27ELL, k_IMAGETYPE_PSD, IMAGETYPE_PSD);
      break;
    case 642:
      HASH_RETURN(0x1623F1D4FA681282LL, k_XSD_ENTITIES, XSD_ENTITIES);
      break;
    case 643:
      HASH_RETURN(0x1BE9DEE4FDF90283LL, k_XSD_NOTATION, XSD_NOTATION);
      break;
    case 644:
      HASH_RETURN(0x73B37628DB24D284LL, k_LOG_LOCAL7, LOG_LOCAL7);
      HASH_RETURN(0x34CC1A9C86D9A284LL, k_U_ERROR_LIMIT, U_ERROR_LIMIT);
      break;
    case 645:
      HASH_RETURN(0x7B60B2C732ADA285LL, k_DATE_ATOM, DATE_ATOM);
      break;
    case 649:
      HASH_RETURN(0x790C72D9881D7289LL, k_LOCK_SH, LOCK_SH);
      HASH_RETURN(0x143F8F0A3E3B8289LL, k_CURLOPT_EGDSOCKET, CURLOPT_EGDSOCKET);
      break;
    case 651:
      HASH_RETURN(0x29E952E38690128BLL, k_CURLOPT_FTP_SSL, CURLOPT_FTP_SSL);
      break;
    case 652:
      HASH_RETURN(0x28AB5875C40CA28CLL, k_MCC_DGRAM_TMO_THRESHOLD, MCC_DGRAM_TMO_THRESHOLD);
      HASH_RETURN(0x228ECCDDE928928CLL, k_IMG_FILTER_EMBOSS, IMG_FILTER_EMBOSS);
      break;
    case 654:
      HASH_RETURN(0x42919790EC83E28ELL, k_UPLOAD_ERR_OK, UPLOAD_ERR_OK);
      break;
    case 659:
      HASH_RETURN(0x237C0278F4DEB293LL, k_PHP_URL_USER, PHP_URL_USER);
      break;
    case 663:
      HASH_RETURN(0x369DC1F8808DB297LL, k_LIBXML_NOCDATA, LIBXML_NOCDATA);
      break;
    case 668:
      HASH_RETURN(0x1A02746C3B3C729CLL, k_SOCKET_EPROTOTYPE, SOCKET_EPROTOTYPE);
      HASH_RETURN(0x7F2EEE1B4C19029CLL, k_SIGTTOU, SIGTTOU);
      break;
    case 669:
      HASH_RETURN(0x181A719752D0029DLL, k_SOCKET_ENOTEMPTY, SOCKET_ENOTEMPTY);
      HASH_RETURN(0x4E8CCB7CE850029DLL, k_DEBUG_LOG_REFERER, DEBUG_LOG_REFERER);
      break;
    case 671:
      HASH_RETURN(0x62F9F10FC177A29FLL, k_CURLINFO_HEADER_OUT, CURLINFO_HEADER_OUT);
      HASH_RETURN(0x1E7CF4E4B67AC29FLL, k_CURLE_FTP_COULDNT_GET_SIZE, CURLE_FTP_COULDNT_GET_SIZE);
      break;
    case 673:
      HASH_RETURN(0x2585AD895FB7F2A1LL, k_MW_ModuleError, MW_ModuleError);
      break;
    case 674:
      HASH_RETURN(0x4E64944034A9D2A2LL, k_CURLCLOSEPOLICY_LEAST_TRAFFIC, CURLCLOSEPOLICY_LEAST_TRAFFIC);
      break;
    case 676:
      HASH_RETURN(0x41B6ACF88D2C82A4LL, k_SQLT_AFC, SQLT_AFC);
      break;
    case 677:
      HASH_RETURN(0x1A209FE7F8F1C2A5LL, k_T_LIST, T_LIST);
      break;
    case 678:
      HASH_RETURN(0x455D174A426D42A6LL, k_SOAP_RPC, SOAP_RPC);
      HASH_RETURN(0x22BC948E7F8002A6LL, k_CURL_HTTP_VERSION_1_1, CURL_HTTP_VERSION_1_1);
      break;
    case 680:
      HASH_RETURN(0x4E4C6CF288C352A8LL, k_CURLOPT_PROXYPORT, CURLOPT_PROXYPORT);
      break;
    case 682:
      HASH_RETURN(0x189F588D3DE012AALL, k_SOCK_RAW, SOCK_RAW);
      HASH_RETURN(0x39200AAC022002AALL, k_MW_NoDecoration, MW_NoDecoration);
      HASH_RETURN(0x102A6D8614C5F2AALL, k_MW_ConfigureError, MW_ConfigureError);
      HASH_RETURN(0x51C0E50390FA62AALL, k_MW_UndefinedMetric, MW_UndefinedMetric);
      break;
    case 686:
      HASH_RETURN(0x1792BEA1445A82AELL, k_MW_UndefinedCompositeOp, MW_UndefinedCompositeOp);
      break;
    case 687:
      HASH_RETURN(0x20BEC282C625B2AFLL, k_M_E, M_E);
      HASH_RETURN(0x3F66E2A07F9A72AFLL, k_MW_PointFilter, MW_PointFilter);
      break;
    case 688:
      HASH_RETURN(0x35ED63A6253462B0LL, k_CURLOPT_FTP_CREATE_MISSING_DIRS, CURLOPT_FTP_CREATE_MISSING_DIRS);
      break;
    case 690:
      HASH_RETURN(0x35240EA20DAE42B2LL, k_IMG_COLOR_STYLEDBRUSHED, IMG_COLOR_STYLEDBRUSHED);
      break;
    case 692:
      HASH_RETURN(0x2E02DF17536A82B4LL, k_SQLITE3_NULL, SQLITE3_NULL);
      break;
    case 698:
      HASH_RETURN(0x5DF2939D286472BALL, k_ABMON_9, ABMON_9);
      break;
    case 699:
      HASH_RETURN(0x0F9902441019F2BBLL, k_MW_SrcInCompositeOp, MW_SrcInCompositeOp);
      break;
    case 700:
      HASH_RETURN(0x17E190EDE625F2BCLL, k_MCRYPT_CAST_256, MCRYPT_CAST_256);
      HASH_RETURN(0x621568120FA9A2BCLL, k_DATE_COOKIE, DATE_COOKIE);
      break;
    case 703:
      HASH_RETURN(0x1E73F96470FFF2BFLL, k_SOAP_USE_XSI_ARRAY_TYPE, SOAP_USE_XSI_ARRAY_TYPE);
      break;
    case 706:
      HASH_RETURN(0x3546D073D91FC2C2LL, k_MW_UndefinedDecoration, MW_UndefinedDecoration);
      HASH_RETURN(0x68B3775AF555B2C2LL, k_LDAP_DEREF_SEARCHING, LDAP_DEREF_SEARCHING);
      break;
    case 709:
      HASH_RETURN(0x38976DA1695812C5LL, k_U_MESSAGE_PARSE_ERROR, U_MESSAGE_PARSE_ERROR);
      break;
    case 710:
      HASH_RETURN(0x1E4F8F809E3F22C6LL, k_CURLOPT_FTPLISTONLY, CURLOPT_FTPLISTONLY);
      HASH_RETURN(0x6B97364DCE0B32C6LL, k_U_ILLEGAL_CHAR_IN_SEGMENT, U_ILLEGAL_CHAR_IN_SEGMENT);
      break;
    case 712:
      HASH_RETURN(0x6AF9238480B522C8LL, k_STREAM_SOCK_DGRAM, STREAM_SOCK_DGRAM);
      break;
    case 716:
      HASH_RETURN(0x1E05D97666E0D2CCLL, k_T_FMT_AMPM, T_FMT_AMPM);
      break;
    case 717:
      HASH_RETURN(0x7FCF03B11EE272CDLL, k_M_LOG2E, M_LOG2E);
      break;
    case 718:
      HASH_RETURN(0x4AC106C9FC2522CELL, k_SQLT_LBI, SQLT_LBI);
      break;
    case 722:
      HASH_RETURN(0x7D58E4C5EDB3E2D2LL, k_CURLCLOSEPOLICY_SLOWEST, CURLCLOSEPOLICY_SLOWEST);
      break;
    case 723:
      HASH_RETURN(0x4AA86A910F9062D3LL, k_PHP_OUTPUT_HANDLER_CONT, PHP_OUTPUT_HANDLER_CONT);
      break;
    case 724:
      HASH_RETURN(0x0A00C65D60AE52D4LL, k_CREDITS_GROUP, CREDITS_GROUP);
      HASH_RETURN(0x4FC0D94706C662D4LL, k_U_NO_SPACE_AVAILABLE, U_NO_SPACE_AVAILABLE);
      break;
    case 725:
      HASH_RETURN(0x3D93FDBE5D2ED2D5LL, k_IMAGETYPE_SWC, IMAGETYPE_SWC);
      break;
    case 727:
      HASH_RETURN(0x1A3C70DD642FC2D7LL, k_MW_UndefinedCap, MW_UndefinedCap);
      break;
    case 729:
      HASH_RETURN(0x55E4F13C45A2B2D9LL, k_MSG_IPC_NOWAIT, MSG_IPC_NOWAIT);
      break;
    case 731:
      HASH_RETURN(0x7D3641290CD902DBLL, k_POSIX_W_OK, POSIX_W_OK);
      break;
    case 734:
      HASH_RETURN(0x7A1801943EC752DELL, k_U_UNDEFINED_SEGMENT_REFERENCE, U_UNDEFINED_SEGMENT_REFERENCE);
      break;
    case 748:
      HASH_RETURN(0x0CD5F3B4B12E32ECLL, k_T_DOC_COMMENT, T_DOC_COMMENT);
      break;
    case 750:
      HASH_RETURN(0x2FBB7CC292C9D2EELL, k_LOG_LOCAL5, LOG_LOCAL5);
      HASH_RETURN(0x43EB2A36480A22EELL, k_PNG_FILTER_NONE, PNG_FILTER_NONE);
      break;
    case 761:
      HASH_RETURN(0x2FC79D110F9502F9LL, k_CURLAUTH_NTLM, CURLAUTH_NTLM);
      break;
    case 762:
      HASH_RETURN(0x68D4466D8E0A82FALL, k_PREG_RECURSION_LIMIT_ERROR, PREG_RECURSION_LIMIT_ERROR);
      break;
    case 764:
      HASH_RETURN(0x334AAA38C97C62FCLL, k_SORT_STRING, SORT_STRING);
      break;
    case 765:
      HASH_RETURN(0x4B38D50E1636B2FDLL, k_MYSQLI_ZEROFILL_FLAG, MYSQLI_ZEROFILL_FLAG);
      break;
    case 768:
      HASH_RETURN(0x0F9BEB1F63F43300LL, k_XSD_DATETIME, XSD_DATETIME);
      break;
    case 769:
      HASH_RETURN(0x1143A1E38AA4C301LL, k_MW_CorruptImageFatalError, MW_CorruptImageFatalError);
      break;
    case 777:
      HASH_RETURN(0x22DC0CE9518CB309LL, k_ABMON_6, ABMON_6);
      break;
    case 779:
      HASH_RETURN(0x49566FE0BA32030BLL, k_GLOB_AVAILABLE_FLAGS, GLOB_AVAILABLE_FLAGS);
      break;
    case 782:
      HASH_RETURN(0x7AE584489D4A930ELL, k_CURLE_OBSOLETE, CURLE_OBSOLETE);
      break;
    case 786:
      HASH_RETURN(0x0ECCA8FCF9730312LL, k_CURLMSG_DONE, CURLMSG_DONE);
      break;
    case 787:
      HASH_RETURN(0x7AE91B1CE7FFA313LL, k_IMG_ARC_ROUNDED, IMG_ARC_ROUNDED);
      HASH_RETURN(0x3ABE09B351C61313LL, k_MW_BesselFilter, MW_BesselFilter);
      break;
    case 800:
      HASH_RETURN(0x4761F8F65A845320LL, k_MW_MirrorVirtualPixelMethod, MW_MirrorVirtualPixelMethod);
      break;
    case 801:
      HASH_RETURN(0x0FB546F53B431321LL, k_CURLOPT_REFERER, CURLOPT_REFERER);
      HASH_RETURN(0x3529B27DB9D81321LL, k_U_MISPLACED_CURSOR_OFFSET, U_MISPLACED_CURSOR_OFFSET);
      break;
    case 803:
      HASH_RETURN(0x7979E954F1B70323LL, k_SORT_LOCALE_STRING, SORT_LOCALE_STRING);
      break;
    case 805:
      HASH_RETURN(0x5DFD78B059539325LL, k_MW_MeanSquaredErrorMetric, MW_MeanSquaredErrorMetric);
      HASH_RETURN(0x774A979412A0B325LL, k_POSIX_S_IFREG, POSIX_S_IFREG);
      break;
    case 807:
      HASH_RETURN(0x323226035FA4A327LL, k_LDAP_OPT_DEREF, LDAP_OPT_DEREF);
      break;
    case 810:
      HASH_RETURN(0x53FA16BBA877F32ALL, k_MW_MapResource, MW_MapResource);
      HASH_RETURN(0x1DB39D1B2F05232ALL, k_U_REGEX_ERROR_START, U_REGEX_ERROR_START);
      break;
    case 816:
      HASH_RETURN(0x7795727FCCA4A330LL, k_XML_ELEMENT_NODE, XML_ELEMENT_NODE);
      HASH_RETURN(0x1D1C33835BAF5330LL, k_DEBUG_LOG_POST, DEBUG_LOG_POST);
      break;
    case 817:
      HASH_RETURN(0x399E19BFA1EF7331LL, k_CURLM_BAD_EASY_HANDLE, CURLM_BAD_EASY_HANDLE);
      break;
    case 819:
      HASH_RETURN(0x5710E7D860D48333LL, k_CREDITS_MODULES, CREDITS_MODULES);
      break;
    case 821:
      HASH_RETURN(0x1AA4CD54F6D53335LL, k_STREAM_NOTIFY_FILE_SIZE_IS, STREAM_NOTIFY_FILE_SIZE_IS);
      HASH_RETURN(0x7F7E8227E089D335LL, k_MW_ModuleFatalError, MW_ModuleFatalError);
      break;
    case 828:
      HASH_RETURN(0x3486E1F13CD4833CLL, k_SOAP_ENC_OBJECT, SOAP_ENC_OBJECT);
      HASH_RETURN(0x12593ED93669A33CLL, k_CURLOPT_INFILESIZE, CURLOPT_INFILESIZE);
      break;
    case 829:
      HASH_RETURN(0x1B0C5A86F9AC033DLL, k_CURLOPT_IPRESOLVE, CURLOPT_IPRESOLVE);
      break;
    case 831:
      HASH_RETURN(0x020A4209EF17233FLL, k_MYSQLI_READ_DEFAULT_FILE, MYSQLI_READ_DEFAULT_FILE);
      break;
    case 833:
      HASH_RETURN(0x200848FE3FE25341LL, k_MW_RelativeIntent, MW_RelativeIntent);
      HASH_RETURN(0x6887A46ACAA8A341LL, k_WNOHANG, WNOHANG);
      break;
    case 834:
      HASH_RETURN(0x48DCEDA680CD2342LL, k_U_INVALID_PROPERTY_PATTERN, U_INVALID_PROPERTY_PATTERN);
      break;
    case 836:
      HASH_RETURN(0x31CED6F609F44344LL, k_SOCKET_ETIME, SOCKET_ETIME);
      break;
    case 837:
      HASH_RETURN(0x77757027A1C85345LL, k_CURLINFO_SPEED_UPLOAD, CURLINFO_SPEED_UPLOAD);
      HASH_RETURN(0x34813AEE6859D345LL, k_U_AMBIGUOUS_ALIAS_WARNING, U_AMBIGUOUS_ALIAS_WARNING);
      break;
    case 841:
      HASH_RETURN(0x6EFCAB50D6EE8349LL, k_MW_OpaqueOpacity, MW_OpaqueOpacity);
      break;
    case 843:
      HASH_RETURN(0x19BEC0973D8DB34BLL, k_MCRYPT_LOKI97, MCRYPT_LOKI97);
      break;
    case 844:
      HASH_RETURN(0x140C8260945D834CLL, k_CURLE_FTP_COULDNT_RETR_FILE, CURLE_FTP_COULDNT_RETR_FILE);
      break;
    case 846:
      HASH_RETURN(0x08CFBA5329A0834ELL, k_MCC_RXDGRAM_MAX, MCC_RXDGRAM_MAX);
      HASH_RETURN(0x5071218CCED8534ELL, k_INFO_MODULES, INFO_MODULES);
      break;
    case 847:
      HASH_RETURN(0x216FEB6549BC634FLL, k_DEBUG_LOG_NONE, DEBUG_LOG_NONE);
      HASH_RETURN(0x68C61080F8E5D34FLL, k_MW_InCompositeOp, MW_InCompositeOp);
      HASH_RETURN(0x17FF6A906E8A834FLL, k_T_DOUBLE_COLON, T_DOUBLE_COLON);
      break;
    case 852:
      HASH_RETURN(0x30E8CD0D7596D354LL, k_STREAM_SERVER_LISTEN, STREAM_SERVER_LISTEN);
      break;
    case 857:
      HASH_RETURN(0x3FD34044ACB34359LL, k_STREAM_MKDIR_RECURSIVE, STREAM_MKDIR_RECURSIVE);
      break;
    case 858:
      HASH_RETURN(0x22801028245F135ALL, k_MCRYPT_SERPENT, MCRYPT_SERPENT);
      HASH_RETURN(0x5397F98E0316535ALL, k_U_INVALID_CHAR_FOUND, U_INVALID_CHAR_FOUND);
      HASH_RETURN(0x40D02305AC4C135ALL, k_SIGCLD, SIGCLD);
      break;
    case 859:
      HASH_RETURN(0x2A2B82F82056C35BLL, k_UCOL_DEFAULT_STRENGTH, UCOL_DEFAULT_STRENGTH);
      break;
    case 863:
      HASH_RETURN(0x0F910BA0E3F8F35FLL, k_MCRYPT_DEV_URANDOM, MCRYPT_DEV_URANDOM);
      break;
    case 864:
      HASH_RETURN(0x371DC37A0607D360LL, k_MCC_ARG_FB_SERIALIZE_ENABLED, MCC_ARG_FB_SERIALIZE_ENABLED);
      break;
    case 867:
      HASH_RETURN(0x594B91873B32D363LL, k_U_MULTIPLE_DECIMAL_SEPERATORS, U_MULTIPLE_DECIMAL_SEPERATORS);
      break;
    case 870:
      HASH_RETURN(0x2FFF697373A2B366LL, k_LC_NUMERIC, LC_NUMERIC);
      HASH_RETURN(0x519FF69D856DA366LL, k_CURLE_BAD_FUNCTION_ARGUMENT, CURLE_BAD_FUNCTION_ARGUMENT);
      break;
    case 871:
      HASH_RETURN(0x0325787AD2DA4367LL, k_CURLOPT_PROXY, CURLOPT_PROXY);
      break;
    case 873:
      HASH_RETURN(0x0D55442B282D7369LL, k_WSDL_CACHE_MEMORY, WSDL_CACHE_MEMORY);
      break;
    case 874:
      HASH_RETURN(0x21EF9D5B5074D36ALL, k_MCC_DOWN_ON_TIMEOUT, MCC_DOWN_ON_TIMEOUT);
      break;
    case 875:
      HASH_RETURN(0x198D20310CD0036BLL, k_T_BOOL_CAST, T_BOOL_CAST);
      break;
    case 876:
      HASH_RETURN(0x30EB29BDEA5C136CLL, k_SOCKET_ENOTUNIQ, SOCKET_ENOTUNIQ);
      break;
    case 878:
      HASH_RETURN(0x24FFA35440DD236ELL, k_MYSQL_NUM, MYSQL_NUM);
      break;
    case 882:
      HASH_RETURN(0x14349C4DD3636372LL, k_MCRYPT_XTEA, MCRYPT_XTEA);
      HASH_RETURN(0x3F9D615E26D5B372LL, k_T_AS, T_AS);
      break;
    case 886:
      HASH_RETURN(0x54A96BB48C682376LL, k_XHPROF_FLAGS_NO_BUILTINS, XHPROF_FLAGS_NO_BUILTINS);
      break;
    case 889:
      HASH_RETURN(0x66A60F42072BF379LL, k_OCI_B_BLOB, OCI_B_BLOB);
      break;
    case 890:
      HASH_RETURN(0x1CE0CA042A91037ALL, k_STR_PAD_LEFT, STR_PAD_LEFT);
      break;
    case 894:
      HASH_RETURN(0x690439A851C2937ELL, k_DNS_NAPTR, DNS_NAPTR);
      HASH_RETURN(0x1078EBC4EDB2D37ELL, k_MYSQLI_TYPE_NULL, MYSQLI_TYPE_NULL);
      break;
    case 896:
      HASH_RETURN(0x6ECB38F9F400C380LL, k_SOCKET_ESTRPIPE, SOCKET_ESTRPIPE);
      break;
    case 897:
      HASH_RETURN(0x388556C05BC0D381LL, k_SIGCONT, SIGCONT);
      break;
    case 901:
      HASH_RETURN(0x4A03134D4796B385LL, k_CURLINFO_REDIRECT_TIME, CURLINFO_REDIRECT_TIME);
      break;
    case 905:
      HASH_RETURN(0x0F65936884163389LL, k_MW_ImageFatalError, MW_ImageFatalError);
      HASH_RETURN(0x5CA3FFC20BED4389LL, k_MW_ShearPreview, MW_ShearPreview);
      break;
    case 907:
      HASH_RETURN(0x1A92401EE5EDA38BLL, k_MYSQL_CLIENT_IGNORE_SPACE, MYSQL_CLIENT_IGNORE_SPACE);
      break;
    case 913:
      HASH_RETURN(0x413EB10196557391LL, k_MW_UndefinedResolution, MW_UndefinedResolution);
      break;
    case 915:
      HASH_RETURN(0x4DF0A43082631393LL, k_FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE, FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE);
      break;
    case 921:
      HASH_RETURN(0x7536C3C6B3140399LL, k_MW_MonitorFatalError, MW_MonitorFatalError);
      break;
    case 925:
      HASH_RETURN(0x0B63E2C05F99139DLL, k_LDAP_OPT_TIMELIMIT, LDAP_OPT_TIMELIMIT);
      break;
    case 933:
      HASH_RETURN(0x7D4257DF684E23A5LL, k_E_CORE_ERROR, E_CORE_ERROR);
      break;
    case 936:
      HASH_RETURN(0x3BBB1A5A5501E3A8LL, k_CURLOPT_PRIVATE, CURLOPT_PRIVATE);
      break;
    case 937:
      HASH_RETURN(0x0B8B3957C8BAB3A9LL, k_MW_ErrorException, MW_ErrorException);
      break;
    case 940:
      HASH_RETURN(0x34BC31E4554FD3ACLL, k_LIBXML_NOBLANKS, LIBXML_NOBLANKS);
      break;
    case 944:
      HASH_RETURN(0x2ACD3EF18A9043B0LL, k_MYSQLI_CLIENT_NO_SCHEMA, MYSQLI_CLIENT_NO_SCHEMA);
      break;
    case 945:
      HASH_RETURN(0x2035AAFE6B3A33B1LL, k_OCI_SYSDATE, OCI_SYSDATE);
      break;
    case 946:
      HASH_RETURN(0x63EB39F3D345F3B2LL, k_STREAM_REPORT_ERRORS, STREAM_REPORT_ERRORS);
      HASH_RETURN(0x46F02DF0C232F3B2LL, k_SOCKET_ENONET, SOCKET_ENONET);
      break;
    case 947:
      HASH_RETURN(0x7A9FA5A6050B23B3LL, k_U_MISSING_SEGMENT_CLOSE, U_MISSING_SEGMENT_CLOSE);
      break;
    case 950:
      HASH_RETURN(0x3CC3CB3BC40793B6LL, k_LDAP_OPT_ERROR_STRING, LDAP_OPT_ERROR_STRING);
      break;
    case 954:
      HASH_RETURN(0x51D56DE3761713BALL, k_MCRYPT_CRYPT, MCRYPT_CRYPT);
      HASH_RETURN(0x1F8C9ECCA43E23BALL, k_MW_SemiCondensedStretch, MW_SemiCondensedStretch);
      break;
    case 955:
      HASH_RETURN(0x592B54B3464DC3BBLL, k_SOCKET_ERESTART, SOCKET_ERESTART);
      break;
    case 957:
      HASH_RETURN(0x211874E4DFCA83BDLL, k_T_RETURN, T_RETURN);
      break;
    case 959:
      HASH_RETURN(0x6DDD00AF7D5703BFLL, k_PHP_PREFIX, PHP_PREFIX);
      HASH_RETURN(0x1E4ECFDAB4C683BFLL, k_LOG_LPR, LOG_LPR);
      break;
    case 960:
      HASH_RETURN(0x618AD241D7EF83C0LL, k_MW_FloodfillMethod, MW_FloodfillMethod);
      break;
    case 962:
      HASH_RETURN(0x642995D84F4603C2LL, k_CURLAUTH_BASIC, CURLAUTH_BASIC);
      break;
    case 969:
      HASH_RETURN(0x51FFBFDA902D43C9LL, k_SOAP_COMPRESSION_GZIP, SOAP_COMPRESSION_GZIP);
      HASH_RETURN(0x4DB9C3ACC4D1E3C9LL, k_MW_PointMethod, MW_PointMethod);
      break;
    case 971:
      HASH_RETURN(0x6723C5CCCE1C53CBLL, k_DATE_RFC1123, DATE_RFC1123);
      break;
    case 974:
      HASH_RETURN(0x58FC90A2D0AB23CELL, k_SOAP_PERSISTENCE_REQUEST, SOAP_PERSISTENCE_REQUEST);
      break;
    case 978:
      HASH_RETURN(0x08791F21085DE3D2LL, k_GD_BUNDLED, GD_BUNDLED);
      break;
    case 979:
      HASH_RETURN(0x0898FB0BC51483D3LL, k_U_CE_NOT_FOUND_ERROR, U_CE_NOT_FOUND_ERROR);
      HASH_RETURN(0x5161581BF71593D3LL, k_SIGTERM, SIGTERM);
      break;
    case 984:
      HASH_RETURN(0x5D2BC68C7A1F53D8LL, k_SUNFUNCS_RET_STRING, SUNFUNCS_RET_STRING);
      HASH_RETURN(0x515149D35870B3D8LL, k_MW_RLECompression, MW_RLECompression);
      break;
    case 987:
      HASH_RETURN(0x4BAFEFF8509AB3DBLL, k_MW_HuePreview, MW_HuePreview);
      break;
    case 988:
      HASH_RETURN(0x2BACE243439BE3DCLL, k_U_MALFORMED_SET, U_MALFORMED_SET);
      break;
    case 991:
      HASH_RETURN(0x4F623035829943DFLL, k_SIGVTALRM, SIGVTALRM);
      break;
    case 992:
      HASH_RETURN(0x22194AB670F923E0LL, k_MW_ShortPixel, MW_ShortPixel);
      break;
    case 998:
      HASH_RETURN(0x73653B67F129A3E6LL, k_MCC_HAVE_DEBUG_LOG, MCC_HAVE_DEBUG_LOG);
      break;
    case 999:
      HASH_RETURN(0x1B4A82CDE6A203E7LL, k_IMG_GD2_RAW, IMG_GD2_RAW);
      break;
    case 1013:
      HASH_RETURN(0x5C1CAE9BE066C3F5LL, k_MYSQLI_REPORT_ERROR, MYSQLI_REPORT_ERROR);
      break;
    case 1016:
      HASH_RETURN(0x56A1DD618F5E63F8LL, k_MCC_POOLPREFIX_LEN, MCC_POOLPREFIX_LEN);
      HASH_RETURN(0x61B92D6E153063F8LL, k_MCC_ARG_COMPRESSION_THRESHOLD, MCC_ARG_COMPRESSION_THRESHOLD);
      break;
    case 1017:
      HASH_RETURN(0x2889D4C7118163F9LL, k_MB_OVERLOAD_STRING, MB_OVERLOAD_STRING);
      break;
    case 1021:
      HASH_RETURN(0x2E0208671FEC33FDLL, k_SOAP_1_2, SOAP_1_2);
      break;
    case 1022:
      HASH_RETURN(0x47865D1C68BA03FELL, k_CURLOPT_PORT, CURLOPT_PORT);
      break;
    case 1023:
      HASH_RETURN(0x055F8F9DAF6E73FFLL, k_MW_BlobFatalError, MW_BlobFatalError);
      break;
    case 1027:
      HASH_RETURN(0x44D1DA387595A403LL, k_SORT_REGULAR, SORT_REGULAR);
      break;
    case 1034:
      HASH_RETURN(0x4D583E498929E40ALL, k_CURLOPT_MUTE, CURLOPT_MUTE);
      break;
    case 1036:
      HASH_RETURN(0x56303306D7C0D40CLL, k_SIG_DFL, SIG_DFL);
      break;
    case 1037:
      HASH_RETURN(0x3C2A2247DD4DC40DLL, k_MCC_ARG_CONN_TMO, MCC_ARG_CONN_TMO);
      HASH_RETURN(0x3FD0ED62DC81140DLL, k_MYSQLI_UNIQUE_KEY_FLAG, MYSQLI_UNIQUE_KEY_FLAG);
      break;
    case 1038:
      HASH_RETURN(0x7F3AA86098A5040ELL, k_T_CONTINUE, T_CONTINUE);
      break;
    case 1042:
      HASH_RETURN(0x0439717F9D2E1412LL, k_DEBUG_LOG_IP, DEBUG_LOG_IP);
      HASH_RETURN(0x6F1875824B546412LL, k_MW_YCCColorspace, MW_YCCColorspace);
      break;
    case 1043:
      HASH_RETURN(0x4B3C9CDC8FC11413LL, k_SQLT_FLT, SQLT_FLT);
      break;
    case 1044:
      HASH_RETURN(0x40CCA04176521414LL, k_FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE, FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE);
      break;
    case 1046:
      HASH_RETURN(0x0EFF3CB5E042F416LL, k_CURLOPT_FORBID_REUSE, CURLOPT_FORBID_REUSE);
      HASH_RETURN(0x5C1326E47B270416LL, k_U_BRK_UNCLOSED_SET, U_BRK_UNCLOSED_SET);
      break;
    case 1047:
      HASH_RETURN(0x452AAD8C245A3417LL, k_SOAP_LITERAL, SOAP_LITERAL);
      break;
    case 1049:
      HASH_RETURN(0x3515808C6B65B419LL, k_IMG_JPG, IMG_JPG);
      break;
    case 1053:
      HASH_RETURN(0x1E9C173187F3941DLL, k_U_BRK_MALFORMED_RULE_TAG, U_BRK_MALFORMED_RULE_TAG);
      break;
    case 1056:
      HASH_RETURN(0x1640565007A90420LL, k_DOM_NO_MODIFICATION_ALLOWED_ERR, DOM_NO_MODIFICATION_ALLOWED_ERR);
      break;
    case 1066:
      HASH_RETURN(0x61A7D060422F542ALL, k_XSD_NONNEGATIVEINTEGER, XSD_NONNEGATIVEINTEGER);
      break;
    case 1067:
      HASH_RETURN(0x1467C96E65B5642BLL, k_XML_ERROR_MISPLACED_XML_PI, XML_ERROR_MISPLACED_XML_PI);
      break;
    case 1071:
      HASH_RETURN(0x5F38698397CF242FLL, k_MW_FatalErrorException, MW_FatalErrorException);
      break;
    case 1072:
      HASH_RETURN(0x6AADD2C591BBC430LL, k_PHP_OS, PHP_OS);
      break;
    case 1075:
      HASH_RETURN(0x37EB3256E1517433LL, k_SOCKET_EREMCHG, SOCKET_EREMCHG);
      break;
    case 1076:
      HASH_RETURN(0x2938A99748C20434LL, k_MCC_HAVE_FB_SERIALIZATION, MCC_HAVE_FB_SERIALIZATION);
      break;
    case 1077:
      HASH_RETURN(0x703818F00F369435LL, k_ABMON_4, ABMON_4);
      HASH_RETURN(0x7FC3740ECCB00435LL, k_MW_SaturationIntent, MW_SaturationIntent);
      HASH_RETURN(0x11942C70E9C49435LL, k_MW_AreaResource, MW_AreaResource);
      break;
    case 1080:
      HASH_RETURN(0x6E98E18DE6B7F438LL, k_MW_MonitorError, MW_MonitorError);
      break;
    case 1081:
      HASH_RETURN(0x2AD0F20CF9DAA439LL, k_SQLT_BFILEE, SQLT_BFILEE);
      break;
    case 1082:
      HASH_RETURN(0x006037A9C1AC943ALL, k_DEBUG_LOG_ALL, DEBUG_LOG_ALL);
      break;
    case 1084:
      HASH_RETURN(0x302C6C1AC180543CLL, k_U_PRIMARY_TOO_LONG_ERROR, U_PRIMARY_TOO_LONG_ERROR);
      break;
    case 1087:
      HASH_RETURN(0x233FEA38B4A4843FLL, k_MCRYPT_SAFERPLUS, MCRYPT_SAFERPLUS);
      break;
    case 1089:
      HASH_RETURN(0x7CD8EC893580A441LL, k_MW_OutCompositeOp, MW_OutCompositeOp);
      break;
    case 1090:
      HASH_RETURN(0x3123C2EEF1C6B442LL, k_SOAP_SINGLE_ELEMENT_ARRAYS, SOAP_SINGLE_ELEMENT_ARRAYS);
      HASH_RETURN(0x1FAAE5BE3607D442LL, k_T_SWITCH, T_SWITCH);
      break;
    case 1091:
      HASH_RETURN(0x007A01CB4FC8B443LL, k_T_ENDWHILE, T_ENDWHILE);
      break;
    case 1095:
      HASH_RETURN(0x2EB10EFD3490D447LL, k_MCRYPT_IDEA, MCRYPT_IDEA);
      HASH_RETURN(0x1EDDB4235B624447LL, k_MW_CopyBlackCompositeOp, MW_CopyBlackCompositeOp);
      break;
    case 1096:
      HASH_RETURN(0x7A514EA9EBBD1448LL, k_MW_JPEGPreview, MW_JPEGPreview);
      break;
    case 1097:
      HASH_RETURN(0x36ECFC6074D5F449LL, k_DOM_SYNTAX_ERR, DOM_SYNTAX_ERR);
      HASH_RETURN(0x1F7B1A30472A6449LL, k_FILE_USE_INCLUDE_PATH, FILE_USE_INCLUDE_PATH);
      HASH_RETURN(0x3214C18660AB1449LL, k_U_UNTERMINATED_QUOTE, U_UNTERMINATED_QUOTE);
      break;
    case 1101:
      HASH_RETURN(0x282E6AABD1BDC44DLL, k_T_ELSE, T_ELSE);
      break;
    case 1104:
      HASH_RETURN(0x43E392D03B394450LL, k_MW_ReplaceMethod, MW_ReplaceMethod);
      break;
    case 1108:
      HASH_RETURN(0x23D78E911FEA2454LL, k_T_CHARACTER, T_CHARACTER);
      break;
    case 1111:
      HASH_RETURN(0x4FDF0D9A8930E457LL, k_XML_HTML_DOCUMENT_NODE, XML_HTML_DOCUMENT_NODE);
      break;
    case 1117:
      HASH_RETURN(0x6FC496B3F19F345DLL, k_PHP_INT_MAX, PHP_INT_MAX);
      break;
    case 1118:
      HASH_RETURN(0x226CB6C562E6C45ELL, k_MW_LightenCompositeOp, MW_LightenCompositeOp);
      break;
    case 1120:
      HASH_RETURN(0x16988B3565B5C460LL, k_DOM_HIERARCHY_REQUEST_ERR, DOM_HIERARCHY_REQUEST_ERR);
      HASH_RETURN(0x698A3061C4731460LL, k_U_ILLEGAL_CHARACTER, U_ILLEGAL_CHARACTER);
      break;
    case 1121:
      HASH_RETURN(0x065D455238423461LL, k_ERA_T_FMT, ERA_T_FMT);
      HASH_RETURN(0x01D279BEED84F461LL, k_GLOB_ONLYDIR, GLOB_ONLYDIR);
      break;
    case 1124:
      HASH_RETURN(0x1A8FFF593757E464LL, k_MW_ConfigureFatalError, MW_ConfigureFatalError);
      break;
    case 1125:
      HASH_RETURN(0x443F331662C8C465LL, k_LOCK_UN, LOCK_UN);
      break;
    case 1126:
      HASH_RETURN(0x6C5E618A94DB9466LL, k_U_MULTIPLE_POST_CONTEXTS, U_MULTIPLE_POST_CONTEXTS);
      break;
    case 1130:
      HASH_RETURN(0x4E4B002DD36A846ALL, k_MCC_POLL_TMO_US, MCC_POLL_TMO_US);
      break;
    case 1131:
      HASH_RETURN(0x39F71AD2140F346BLL, k_IMG_FILTER_MEAN_REMOVAL, IMG_FILTER_MEAN_REMOVAL);
      HASH_RETURN(0x6FB5FA98BB57746BLL, k_MW_IntegerPixel, MW_IntegerPixel);
      break;
    case 1133:
      HASH_RETURN(0x6672402F0997546DLL, k_LIBXML_VERSION, LIBXML_VERSION);
      break;
    case 1138:
      HASH_RETURN(0x6174D79B08BC6472LL, k_APACHE_MAP, APACHE_MAP);
      break;
    case 1141:
      HASH_RETURN(0x3F32B9AC6D36A475LL, k_MCC_ARG_MIRROR_CFG_NAME, MCC_ARG_MIRROR_CFG_NAME);
      break;
    case 1142:
      HASH_RETURN(0x1B0827C12937E476LL, k_MCRYPT_MODE_ECB, MCRYPT_MODE_ECB);
      break;
    case 1144:
      HASH_RETURN(0x100C13A9559F8478LL, k_SOCKET_ESHUTDOWN, SOCKET_ESHUTDOWN);
      break;
    case 1145:
      HASH_RETURN(0x40431455AC3E3479LL, k_ERA_D_T_FMT, ERA_D_T_FMT);
      break;
    case 1146:
      HASH_RETURN(0x39C972A1DEE8047ALL, k_SOAP_ACTOR_NONE, SOAP_ACTOR_NONE);
      HASH_RETURN(0x7445D5623ED5F47ALL, k_XSD_NCNAME, XSD_NCNAME);
      break;
    case 1147:
      HASH_RETURN(0x2515EB7B28BCA47BLL, k_CREDITS_GENERAL, CREDITS_GENERAL);
      HASH_RETURN(0x17A61EFF29DB047BLL, k_ABMON_5, ABMON_5);
      HASH_RETURN(0x3FEB4E858C24C47BLL, k_U_UNSUPPORTED_ERROR, U_UNSUPPORTED_ERROR);
      break;
    case 1148:
      HASH_RETURN(0x0916CC6A5D9BD47CLL, k_U_INVALID_FUNCTION, U_INVALID_FUNCTION);
      break;
    case 1150:
      HASH_RETURN(0x3F5A101418D7B47ELL, k_XSD_LANGUAGE, XSD_LANGUAGE);
      break;
    case 1153:
      HASH_RETURN(0x7DF7ED94B7585481LL, k_MW_DespecklePreview, MW_DespecklePreview);
      HASH_RETURN(0x2B3F87F4D6560481LL, k_MYSQLI_REPORT_STRICT, MYSQLI_REPORT_STRICT);
      break;
    case 1156:
      HASH_RETURN(0x06C04B5A183A1484LL, k_SOCKET_ENODATA, SOCKET_ENODATA);
      HASH_RETURN(0x1D7DFF1817C3E484LL, k_MW_ResourceLimitWarning, MW_ResourceLimitWarning);
      HASH_RETURN(0x27FDB27550017484LL, k_OCI_SEEK_SET, OCI_SEEK_SET);
      break;
    case 1159:
      HASH_RETURN(0x5AF69B2C92692487LL, k_T_LOGICAL_XOR, T_LOGICAL_XOR);
      break;
    case 1163:
      HASH_RETURN(0x70B6E904F99F348BLL, k_PHP_LIBDIR, PHP_LIBDIR);
      break;
    case 1165:
      HASH_RETURN(0x4E9CE5DA1576348DLL, k_POSIX_S_IFBLK, POSIX_S_IFBLK);
      break;
    case 1167:
      HASH_RETURN(0x272492CFFFED348FLL, k_MW_YellowChannel, MW_YellowChannel);
      break;
    case 1173:
      HASH_RETURN(0x779F00F0255B8495LL, k_MW_UndefinedResource, MW_UndefinedResource);
      break;
    case 1174:
      HASH_RETURN(0x6CD22582D88D5496LL, k_PNG_ALL_FILTERS, PNG_ALL_FILTERS);
      HASH_RETURN(0x651B6E7DE0C45496LL, k_T_OR_EQUAL, T_OR_EQUAL);
      break;
    case 1179:
      HASH_RETURN(0x06DE4595C4FE649BLL, k_MW_HardLightCompositeOp, MW_HardLightCompositeOp);
      break;
    case 1185:
      HASH_RETURN(0x3FBA8EE3472A44A1LL, k_MW_LanczosFilter, MW_LanczosFilter);
      break;
    case 1186:
      HASH_RETURN(0x1EE9096F3433C4A2LL, k_SOCKET_ENOTDIR, SOCKET_ENOTDIR);
      break;
    case 1188:
      HASH_RETURN(0x23BD33212F0464A4LL, k_SOCKET_EDQUOT, SOCKET_EDQUOT);
      break;
    case 1191:
      HASH_RETURN(0x46DB00B5F0A234A7LL, k_OCI_B_CFILEE, OCI_B_CFILEE);
      break;
    case 1198:
      HASH_RETURN(0x68F6A316CAE374AELL, k_CURLOPT_SSLVERSION, CURLOPT_SSLVERSION);
      break;
    case 1200:
      HASH_RETURN(0x53D42B9772EFE4B0LL, k_SOCKET_ENOMEDIUM, SOCKET_ENOMEDIUM);
      break;
    case 1202:
      HASH_RETURN(0x19E592A258C334B2LL, k_MW_YCbCrColorspace, MW_YCbCrColorspace);
      break;
    case 1205:
      HASH_RETURN(0x3F2BFA3068E094B5LL, k_IDNA_INVALID_LENGTH, IDNA_INVALID_LENGTH);
      break;
    case 1206:
      HASH_RETURN(0x03CFF8CF8581B4B6LL, k_CURLOPT_TIMECONDITION, CURLOPT_TIMECONDITION);
      break;
    case 1207:
      HASH_RETURN(0x31EF12DD3D2224B7LL, k_MCC_ARG_NZLIB_COMPRESSION, MCC_ARG_NZLIB_COMPRESSION);
      HASH_RETURN(0x797DEF582C49B4B7LL, k_LDAP_DEREF_ALWAYS, LDAP_DEREF_ALWAYS);
      break;
    case 1208:
      HASH_RETURN(0x69CFF21DFDA9D4B8LL, k_XML_ATTRIBUTE_NODE, XML_ATTRIBUTE_NODE);
      break;
    case 1209:
      HASH_RETURN(0x15A254798D93A4B9LL, k_OCI_SEEK_END, OCI_SEEK_END);
      break;
    case 1210:
      HASH_RETURN(0x7190396E5D0AD4BALL, k_ASSERT_QUIET_EVAL, ASSERT_QUIET_EVAL);
      break;
    case 1211:
      HASH_RETURN(0x711D323D3B6644BBLL, k_CURLOPT_SSLKEYPASSWD, CURLOPT_SSLKEYPASSWD);
      break;
    case 1212:
      HASH_RETURN(0x3BE48BA0D85894BCLL, k_MW_AlphaChannel, MW_AlphaChannel);
      break;
    case 1214:
      HASH_RETURN(0x621C4ED98EF454BELL, k_XSD_DURATION, XSD_DURATION);
      break;
    case 1215:
      HASH_RETURN(0x6D0374D2EC3A64BFLL, k_OCI_BOTH, OCI_BOTH);
      break;
    case 1216:
      HASH_RETURN(0x2755BB25E49D44C0LL, k_XSD_UNSIGNEDBYTE, XSD_UNSIGNEDBYTE);
      break;
    case 1218:
      HASH_RETURN(0x1F74CFE2D30104C2LL, k_IMG_FILTER_SMOOTH, IMG_FILTER_SMOOTH);
      break;
    case 1220:
      HASH_RETURN(0x589C7B7CE97304C4LL, k_MW_BumpmapCompositeOp, MW_BumpmapCompositeOp);
      break;
    case 1221:
      HASH_RETURN(0x4B704A9CBC7ED4C5LL, k_U_ZERO_ERROR, U_ZERO_ERROR);
      break;
    case 1224:
      HASH_RETURN(0x152F61B46F7444C8LL, k_MW_MaxRGB, MW_MaxRGB);
      break;
    case 1227:
      HASH_RETURN(0x6B7CB71BCB0BF4CBLL, k_XML_ERROR_UNDEFINED_ENTITY, XML_ERROR_UNDEFINED_ENTITY);
      break;
    case 1228:
      HASH_RETURN(0x2D0BEACE978184CCLL, k_DNS_SOA, DNS_SOA);
      break;
    case 1229:
      HASH_RETURN(0x0A4074925F29C4CDLL, k_CURLINFO_CONTENT_LENGTH_DOWNLOAD, CURLINFO_CONTENT_LENGTH_DOWNLOAD);
      break;
    case 1230:
      HASH_RETURN(0x03C5D552422834CELL, k_MW_LongPixel, MW_LongPixel);
      break;
    case 1231:
      HASH_RETURN(0x4D12E388F00434CFLL, k_AF_INET6, AF_INET6);
      break;
    case 1236:
      HASH_RETURN(0x6D4BF2FC509F14D4LL, k_CURLOPT_NOBODY, CURLOPT_NOBODY);
      HASH_RETURN(0x3FA1E3B801B644D4LL, k_MYSQLI_OPT_LOCAL_INFILE, MYSQLI_OPT_LOCAL_INFILE);
      break;
    case 1237:
      HASH_RETURN(0x336D1DEA1207A4D5LL, k_U_REGEX_INVALID_FLAG, U_REGEX_INVALID_FLAG);
      break;
    case 1240:
      HASH_RETURN(0x5AEB1F7D69EBF4D8LL, k_CURLOPT_WRITEFUNCTION, CURLOPT_WRITEFUNCTION);
      break;
    case 1242:
      HASH_RETURN(0x585F029786E184DALL, k_STREAM_SOCK_SEQPACKET, STREAM_SOCK_SEQPACKET);
      break;
    case 1244:
      HASH_RETURN(0x74117A5B7E2DC4DCLL, k_MW_NonZeroRule, MW_NonZeroRule);
      HASH_RETURN(0x7115CEB4F47E14DCLL, k_MW_StaticGravity, MW_StaticGravity);
      break;
    case 1248:
      HASH_RETURN(0x4A4834C3967104E0LL, k_MW_DivideEvaluateOperator, MW_DivideEvaluateOperator);
      break;
    case 1249:
      HASH_RETURN(0x7138FB985FD4A4E1LL, k_CURLOPT_INFILE, CURLOPT_INFILE);
      break;
    case 1250:
      HASH_RETURN(0x6D01485DA58D74E2LL, k_MW_UndefinedCompression, MW_UndefinedCompression);
      break;
    case 1253:
      HASH_RETURN(0x46A3CE35AD2734E5LL, k_MW_UndefinedStyle, MW_UndefinedStyle);
      break;
    case 1258:
      HASH_RETURN(0x76CD4525B68C64EALL, k_SIGIO, SIGIO);
      break;
    case 1261:
      HASH_RETURN(0x7B44D93198FDD4EDLL, k_STREAM_FILTER_READ, STREAM_FILTER_READ);
      break;
    case 1264:
      HASH_RETURN(0x7CD011F60F63F4F0LL, k_U_BRK_RULE_SYNTAX, U_BRK_RULE_SYNTAX);
      break;
    case 1265:
      HASH_RETURN(0x072A4A6DA80F74F1LL, k_MCC_DELETE_DELETED, MCC_DELETE_DELETED);
      break;
    case 1266:
      HASH_RETURN(0x2D39FFEEF43E34F2LL, k_SIGSEGV, SIGSEGV);
      break;
    case 1267:
      HASH_RETURN(0x6F900C618583E4F3LL, k_NULL, NULL);
      break;
    case 1270:
      HASH_RETURN(0x20F5E850402104F6LL, k_IMAGETYPE_JP2, IMAGETYPE_JP2);
      break;
    case 1275:
      HASH_RETURN(0x3A3158BE899A04FBLL, k_U_INVALID_STATE_ERROR, U_INVALID_STATE_ERROR);
      break;
    case 1280:
      HASH_RETURN(0x45B6E0587D35A500LL, k_MW_GRAYColorspace, MW_GRAYColorspace);
      break;
    case 1281:
      HASH_RETURN(0x56CF4A6CEAE2B501LL, k_CURLE_OPERATION_TIMEOUTED, CURLE_OPERATION_TIMEOUTED);
      break;
    case 1283:
      HASH_RETURN(0x0EF53B552C2FA503LL, k_CRYPT_STD_DES, CRYPT_STD_DES);
      break;
    case 1287:
      HASH_RETURN(0x201290F9235F6507LL, k_T_EXIT, T_EXIT);
      break;
    case 1288:
      HASH_RETURN(0x39A673D017140508LL, k_E_PARSE, E_PARSE);
      HASH_RETURN(0x47650B1056B2F508LL, k_CURLFTPSSL_CONTROL, CURLFTPSSL_CONTROL);
      HASH_RETURN(0x55CA230EA6731508LL, k_SQLT_INT, SQLT_INT);
      break;
    case 1290:
      HASH_RETURN(0x1111973C6C2A650ALL, k_MW_BlurPreview, MW_BlurPreview);
      break;
    case 1293:
      HASH_RETURN(0x0EA3ED561350150DLL, k_XSD_1999_TIMEINSTANT, XSD_1999_TIMEINSTANT);
      break;
    case 1296:
      HASH_RETURN(0x26083912D9CBE510LL, k_MSG_PEEK, MSG_PEEK);
      break;
    case 1298:
      HASH_RETURN(0x06C0B14E2320D512LL, k_CURLE_READ_ERROR, CURLE_READ_ERROR);
      break;
    case 1304:
      HASH_RETURN(0x163B88C01BC8A518LL, k_U_BRK_RULE_EMPTY_SET, U_BRK_RULE_EMPTY_SET);
      break;
    case 1306:
      HASH_RETURN(0x50053271437C951ALL, k_ICONV_IMPL, ICONV_IMPL);
      HASH_RETURN(0x3C2A59931D2B751ALL, k_PKCS7_NOATTR, PKCS7_NOATTR);
      break;
    case 1307:
      HASH_RETURN(0x578F4640791FD51BLL, k_SQLT_CFILEE, SQLT_CFILEE);
      break;
    case 1311:
      HASH_RETURN(0x1854F1B8D378751FLL, k_XML_ERROR_NO_ELEMENTS, XML_ERROR_NO_ELEMENTS);
      break;
    case 1312:
      HASH_RETURN(0x24F1342D32B6B520LL, k_ULOC_VALID_LOCALE, ULOC_VALID_LOCALE);
      HASH_RETURN(0x1B33A8314BE85520LL, k_MYSQLI_BOTH, MYSQLI_BOTH);
      HASH_RETURN(0x2BE3A7281E58A520LL, k_SIGILL, SIGILL);
      break;
    case 1314:
      HASH_RETURN(0x459970987FA25522LL, k_XSD_BYTE, XSD_BYTE);
      HASH_RETURN(0x37EF6C3EE7B15522LL, k_T_TRY, T_TRY);
      break;
    case 1323:
      HASH_RETURN(0x47C626DD0F7B152BLL, k_XML_ERROR_PARTIAL_CHAR, XML_ERROR_PARTIAL_CHAR);
      break;
    case 1327:
      HASH_RETURN(0x4B558BF8FBD0952FLL, k_SOCKET_ENOLINK, SOCKET_ENOLINK);
      break;
    case 1328:
      HASH_RETURN(0x0D8261B6FE375530LL, k_XSD_DECIMAL, XSD_DECIMAL);
      break;
    case 1330:
      HASH_RETURN(0x11C0A42F3CEB5532LL, k_XSD_ENTITY, XSD_ENTITY);
      break;
    case 1331:
      HASH_RETURN(0x6C13C3409FEED533LL, k_CREDITS_FULLPAGE, CREDITS_FULLPAGE);
      break;
    case 1334:
      HASH_RETURN(0x19DFD448EE084536LL, k_CURLOPT_FTPPORT, CURLOPT_FTPPORT);
      break;
    case 1335:
      HASH_RETURN(0x5AAE8BB5B61AE537LL, k_CURLOPT_FTP_USE_EPRT, CURLOPT_FTP_USE_EPRT);
      break;
    case 1343:
      HASH_RETURN(0x05C037D5171AE53FLL, k_CURLOPT_COOKIEJAR, CURLOPT_COOKIEJAR);
      break;
    case 1346:
      HASH_RETURN(0x471C7648E1966542LL, k_UCOL_FRENCH_COLLATION, UCOL_FRENCH_COLLATION);
      HASH_RETURN(0x197D4758552EF542LL, k_STREAM_URL_STAT_QUIET, STREAM_URL_STAT_QUIET);
      HASH_RETURN(0x449C124585357542LL, k_CURLINFO_EFFECTIVE_URL, CURLINFO_EFFECTIVE_URL);
      break;
    case 1350:
      HASH_RETURN(0x655E760BB6D14546LL, k_SQLT_BDOUBLE, SQLT_BDOUBLE);
      break;
    case 1353:
      HASH_RETURN(0x3BF1743611D1A549LL, k_MW_StreamWarning, MW_StreamWarning);
      break;
    case 1355:
      HASH_RETURN(0x0E42C0323399554BLL, k_MCC_PROXY_UPDATE_OP, MCC_PROXY_UPDATE_OP);
      HASH_RETURN(0x6E211606EA57F54BLL, k_SOCKET_ENOTTY, SOCKET_ENOTTY);
      break;
    case 1358:
      HASH_RETURN(0x294650C8405A654ELL, k_PSFS_FEED_ME, PSFS_FEED_ME);
      HASH_RETURN(0x07E1E24DDF43454ELL, k_ABMON_8, ABMON_8);
      break;
    case 1359:
      HASH_RETURN(0x7DD73051C5ABD54FLL, k_MW_RegistryFatalError, MW_RegistryFatalError);
      break;
    case 1364:
      HASH_RETURN(0x79335A1990735554LL, k_SIGINT, SIGINT);
      break;
    case 1365:
      HASH_RETURN(0x46C77A0EF3296555LL, k_CURLOPT_POSTQUOTE, CURLOPT_POSTQUOTE);
      break;
    case 1367:
      HASH_RETURN(0x430E45DAE8E5F557LL, k_PHP_CONFIG_FILE_SCAN_DIR, PHP_CONFIG_FILE_SCAN_DIR);
      HASH_RETURN(0x489184A8A7FF7557LL, k_XML_ERROR_UNCLOSED_CDATA_SECTION, XML_ERROR_UNCLOSED_CDATA_SECTION);
      break;
    case 1369:
      HASH_RETURN(0x04D6FFBBAC8C1559LL, k_MW_UndefinedMethod, MW_UndefinedMethod);
      break;
    case 1370:
      HASH_RETURN(0x277B4DBBBF37155ALL, k_SOCKET_EISCONN, SOCKET_EISCONN);
      HASH_RETURN(0x0D50B1F78E3ED55ALL, k_XSD_ANYXML, XSD_ANYXML);
      HASH_RETURN(0x0CFE7AF65E2B655ALL, k_MW_BlobError, MW_BlobError);
      break;
    case 1372:
      HASH_RETURN(0x2692040725F4855CLL, k_ICONV_VERSION, ICONV_VERSION);
      break;
    case 1373:
      HASH_RETURN(0x2228E63D6B01455DLL, k_MCC_ARG_MIRROR_CFG, MCC_ARG_MIRROR_CFG);
      HASH_RETURN(0x693322BFA32D955DLL, k_WSDL_CACHE_BOTH, WSDL_CACHE_BOTH);
      HASH_RETURN(0x573E323057AF155DLL, k_CURLOPT_MAXCONNECTS, CURLOPT_MAXCONNECTS);
      break;
    case 1375:
      HASH_RETURN(0x5C0358DEF5D2555FLL, k_MCC_CONN_NTRIES, MCC_CONN_NTRIES);
      break;
    case 1380:
      HASH_RETURN(0x1A8D83C5AC4A7564LL, k_XML_ERROR_SYNTAX, XML_ERROR_SYNTAX);
      break;
    case 1384:
      HASH_RETURN(0x7915DFB18792B568LL, k_EXTR_OVERWRITE, EXTR_OVERWRITE);
      break;
    case 1385:
      HASH_RETURN(0x3EEA52457CCB2569LL, k_E_WARNING, E_WARNING);
      break;
    case 1386:
      HASH_RETURN(0x7463815F2AD9F56ALL, k_MW_UnderlineDecoration, MW_UnderlineDecoration);
      HASH_RETURN(0x4D09382249CA056ALL, k_T_IS_SMALLER_OR_EQUAL, T_IS_SMALLER_OR_EQUAL);
      break;
    case 1387:
      HASH_RETURN(0x6A5CDC059D57156BLL, k_T_ENDDECLARE, T_ENDDECLARE);
      break;
    case 1388:
      HASH_RETURN(0x55334A910497356CLL, k_SOCKET_EPROTONOSUPPORT, SOCKET_EPROTONOSUPPORT);
      break;
    case 1389:
      HASH_RETURN(0x1FE0E0BB7E5F156DLL, k_SQLITE3_OPEN_READONLY, SQLITE3_OPEN_READONLY);
      break;
    case 1393:
      HASH_RETURN(0x394B9F5608338571LL, k_MCRYPT_ARCFOUR, MCRYPT_ARCFOUR);
      break;
    case 1394:
      HASH_RETURN(0x6B42984521110572LL, k_MW_CorruptImageWarning, MW_CorruptImageWarning);
      break;
    case 1396:
      HASH_RETURN(0x5E374C828C6DE574LL, k_MCC_WINDOW_MAX, MCC_WINDOW_MAX);
      HASH_RETURN(0x636C871213F37574LL, k_MCRYPT_ENCRYPT, MCRYPT_ENCRYPT);
      break;
    case 1397:
      HASH_RETURN(0x1911D163F3648575LL, k_MW_ConstantVirtualPixelMethod, MW_ConstantVirtualPixelMethod);
      break;
    case 1407:
      HASH_RETURN(0x461FD6AD1B05D57FLL, k_MYSQLI_TYPE_INTERVAL, MYSQLI_TYPE_INTERVAL);
      break;
    case 1408:
      HASH_RETURN(0x3E8690B39E8F9580LL, k_PHP_URL_SCHEME, PHP_URL_SCHEME);
      break;
    case 1413:
      HASH_RETURN(0x6B5949C7180ED585LL, k_GRAPHEME_EXTR_COUNT, GRAPHEME_EXTR_COUNT);
      break;
    case 1415:
      HASH_RETURN(0x41EC17ABDC632587LL, k_INFO_VARIABLES, INFO_VARIABLES);
      break;
    case 1422:
      HASH_RETURN(0x62729803227A958ELL, k_CURLE_ABORTED_BY_CALLBACK, CURLE_ABORTED_BY_CALLBACK);
      break;
    case 1424:
      HASH_RETURN(0x6D29B833F9D68590LL, k_CURLOPT_COOKIEFILE, CURLOPT_COOKIEFILE);
      HASH_RETURN(0x0727AB750B46F590LL, k_OPENSSL_CIPHER_RC2_40, OPENSSL_CIPHER_RC2_40);
      break;
    case 1425:
      HASH_RETURN(0x4C237622094F3591LL, k_XSD_GMONTH, XSD_GMONTH);
      break;
    case 1428:
      HASH_RETURN(0x0939FC6C2398A594LL, k_SOCKET_ECHRNG, SOCKET_ECHRNG);
      HASH_RETURN(0x09AC72E7E80FE594LL, k_MW_CharcoalDrawingPreview, MW_CharcoalDrawingPreview);
      break;
    case 1433:
      HASH_RETURN(0x2879B59F4E8B7599LL, k_UCOL_LOWER_FIRST, UCOL_LOWER_FIRST);
      HASH_RETURN(0x74BD1873B3D4C599LL, k_MW_QuantumRange, MW_QuantumRange);
      break;
    case 1434:
      HASH_RETURN(0x7B9C1DEF8C78259ALL, k_SOCKET_ECONNREFUSED, SOCKET_ECONNREFUSED);
      break;
    case 1437:
      HASH_RETURN(0x37371F798991459DLL, k_SOCKET_EBADSLT, SOCKET_EBADSLT);
      break;
    case 1443:
      HASH_RETURN(0x18B0DDF31986A5A3LL, k_XSD_NAME, XSD_NAME);
      break;
    case 1446:
      HASH_RETURN(0x5E0FD5E63D4CD5A6LL, k_MW_RollPreview, MW_RollPreview);
      HASH_RETURN(0x281F40E1E16E25A6LL, k_MYSQLI_NOT_NULL_FLAG, MYSQLI_NOT_NULL_FLAG);
      break;
    case 1450:
      HASH_RETURN(0x1B690B48EB8335AALL, k_LOG_PID, LOG_PID);
      break;
    case 1451:
      HASH_RETURN(0x5FF83688511395ABLL, k_M_2_SQRTPI, M_2_SQRTPI);
      break;
    case 1453:
      HASH_RETURN(0x3A0170FF604015ADLL, k_MW_BrightnessPreview, MW_BrightnessPreview);
      HASH_RETURN(0x10FE425AEE9885ADLL, k_T_ENDSWITCH, T_ENDSWITCH);
      break;
    case 1454:
      HASH_RETURN(0x749E9580B463E5AELL, k_MON_5, MON_5);
      break;
    case 1455:
      HASH_RETURN(0x035C8656F0D6A5AFLL, k_IMG_COLOR_TRANSPARENT, IMG_COLOR_TRANSPARENT);
      break;
    case 1458:
      HASH_RETURN(0x45697C201C6C55B2LL, k_UCOL_QUATERNARY, UCOL_QUATERNARY);
      break;
    case 1465:
      HASH_RETURN(0x3FE2E5DB834865B9LL, k_XML_SAX_IMPL, XML_SAX_IMPL);
      HASH_RETURN(0x59E3CB50C7FCB5B9LL, k_SIGIOT, SIGIOT);
      break;
    case 1466:
      HASH_RETURN(0x1DC0E76406F095BALL, k_CURLOPT_FTPAPPEND, CURLOPT_FTPAPPEND);
      break;
    case 1474:
      HASH_RETURN(0x7E9D9B62B151F5C2LL, k_U_MULTIPLE_PERMILL_SYMBOLS, U_MULTIPLE_PERMILL_SYMBOLS);
      break;
    case 1475:
      HASH_RETURN(0x3B0F00B36B8E75C3LL, k_MW_PaletteMatteType, MW_PaletteMatteType);
      HASH_RETURN(0x252B12A8DE87A5C3LL, k_MYSQLI_TYPE_TINY, MYSQLI_TYPE_TINY);
      break;
    case 1480:
      HASH_RETURN(0x6812CCAE80BF05C8LL, k_SOCKET_EL2NSYNC, SOCKET_EL2NSYNC);
      HASH_RETURN(0x6A09AF437CD245C8LL, k_T_INC, T_INC);
      break;
    case 1481:
      HASH_RETURN(0x15873E5F393AB5C9LL, k_MCC_ARG_CONN_NTRIES, MCC_ARG_CONN_NTRIES);
      break;
    case 1487:
      HASH_RETURN(0x7029FB652ACD15CFLL, k_SQLITE3_FLOAT, SQLITE3_FLOAT);
      break;
    case 1488:
      HASH_RETURN(0x56E7F7F6085F25D0LL, k_UCOL_ALTERNATE_HANDLING, UCOL_ALTERNATE_HANDLING);
      HASH_RETURN(0x2B3E49A5D68A55D0LL, k_MW_DstAtopCompositeOp, MW_DstAtopCompositeOp);
      break;
    case 1490:
      HASH_RETURN(0x4BC23844AAAE55D2LL, k_GLOB_NOCHECK, GLOB_NOCHECK);
      break;
    case 1492:
      HASH_RETURN(0x10381BE6DEC9E5D4LL, k_PREG_NO_ERROR, PREG_NO_ERROR);
      HASH_RETURN(0x1C75A5C262B725D4LL, k_DATE_RFC2822, DATE_RFC2822);
      break;
    case 1496:
      HASH_RETURN(0x53EE03F19DCA15D8LL, k_MSG_OOB, MSG_OOB);
      break;
    case 1500:
      HASH_RETURN(0x0C6A80B75AE295DCLL, k_MW_PixelsPerCentimeterResolution, MW_PixelsPerCentimeterResolution);
      break;
    case 1501:
      HASH_RETURN(0x2C095BBEF25D45DDLL, k_SIGALRM, SIGALRM);
      break;
    case 1502:
      HASH_RETURN(0x2DEE9B77FCBAE5DELL, k_MYSQL_CLIENT_COMPRESS, MYSQL_CLIENT_COMPRESS);
      break;
    case 1507:
      HASH_RETURN(0x5E0F41BB026D55E3LL, k_STREAM_CRYPTO_METHOD_SSLv23_CLIENT, STREAM_CRYPTO_METHOD_SSLv23_CLIENT);
      break;
    case 1508:
      HASH_RETURN(0x65E0924A3F7F85E4LL, k_U_VARIABLE_RANGE_EXHAUSTED, U_VARIABLE_RANGE_EXHAUSTED);
      break;
    case 1511:
      HASH_RETURN(0x533DE31D0A7305E7LL, k_FNM_NOESCAPE, FNM_NOESCAPE);
      break;
    case 1513:
      HASH_RETURN(0x7CD211F10A9BB5E9LL, k_SIGPROF, SIGPROF);
      break;
    case 1515:
      HASH_RETURN(0x335CAD4518E8E5EBLL, k_MW_StreamError, MW_StreamError);
      break;
    case 1517:
      HASH_RETURN(0x04AC44206DABD5EDLL, k_MCC_ARG_DGRAM_TMO_WEIGHT, MCC_ARG_DGRAM_TMO_WEIGHT);
      break;
    case 1519:
      HASH_RETURN(0x78F830721EABD5EFLL, k_MYSQLI_TYPE_MEDIUM_BLOB, MYSQLI_TYPE_MEDIUM_BLOB);
      break;
    case 1523:
      HASH_RETURN(0x62699EC4D91315F3LL, k_MW_UndefinedException, MW_UndefinedException);
      break;
    case 1524:
      HASH_RETURN(0x040DBC4A68F435F4LL, k_PREG_SET_ORDER, PREG_SET_ORDER);
      break;
    case 1526:
      HASH_RETURN(0x7D413354DBE2D5F6LL, k_UCOL_STRENGTH, UCOL_STRENGTH);
      break;
    case 1527:
      HASH_RETURN(0x7BF86292A876E5F7LL, k_LDAP_OPT_ERROR_NUMBER, LDAP_OPT_ERROR_NUMBER);
      break;
    case 1529:
      HASH_RETURN(0x6AFA1034674B65F9LL, k_MW_EastGravity, MW_EastGravity);
      break;
    case 1531:
      HASH_RETURN(0x011725839BB515FBLL, k_X509_PURPOSE_SSL_SERVER, X509_PURPOSE_SSL_SERVER);
      break;
    case 1534:
      HASH_RETURN(0x7CFDCB01D09925FELL, k_MW_LuminizeCompositeOp, MW_LuminizeCompositeOp);
      break;
    case 1537:
      HASH_RETURN(0x367A7A5337BBA601LL, k_MCC_ARG_DELETE_PROXY, MCC_ARG_DELETE_PROXY);
      HASH_RETURN(0x5332ACDFDA1FF601LL, k_XSD_INTEGER, XSD_INTEGER);
      HASH_RETURN(0x51378EF3DAB8A601LL, k_MYSQLI_STORE_RESULT, MYSQLI_STORE_RESULT);
      break;
    case 1539:
      HASH_RETURN(0x27741597BB08C603LL, k_CURLE_FTP_USER_PASSWORD_INCORRECT, CURLE_FTP_USER_PASSWORD_INCORRECT);
      break;
    case 1540:
      HASH_RETURN(0x65B0B1DFE2D7B604LL, k_CURLAUTH_GSSNEGOTIATE, CURLAUTH_GSSNEGOTIATE);
      break;
    case 1548:
      HASH_RETURN(0x45FC5C46C22B560CLL, k_CURLE_WRITE_ERROR, CURLE_WRITE_ERROR);
      break;
    case 1550:
      HASH_RETURN(0x50B2E544D35D160ELL, k_CURLOPT_PROXYAUTH, CURLOPT_PROXYAUTH);
      break;
    case 1551:
      HASH_RETURN(0x66D60AD02C4C960FLL, k_PHP_URL_HOST, PHP_URL_HOST);
      HASH_RETURN(0x5FBF2BBBCD48160FLL, k_T_VAR, T_VAR);
      break;
    case 1558:
      HASH_RETURN(0x4E64CC2434B19616LL, k_IMG_FILTER_BRIGHTNESS, IMG_FILTER_BRIGHTNESS);
      HASH_RETURN(0x093E9290B2EF8616LL, k_T_CLASS_C, T_CLASS_C);
      break;
    case 1560:
      HASH_RETURN(0x173AC303C51D7618LL, k_T_WHITESPACE, T_WHITESPACE);
      break;
    case 1570:
      HASH_RETURN(0x4206ADEB9D059622LL, k_DNS_MX, DNS_MX);
      HASH_RETURN(0x61E805D70BAAA622LL, k_U_UNQUOTED_SPECIAL, U_UNQUOTED_SPECIAL);
      break;
    case 1571:
      HASH_RETURN(0x4DC4205C6A930623LL, k_MCC_ARG_PERSISTENT, MCC_ARG_PERSISTENT);
      HASH_RETURN(0x28D3269E52080623LL, k_SOCKET_ENOSR, SOCKET_ENOSR);
      HASH_RETURN(0x06B5709915BF2623LL, k_CURLE_FAILED_INIT, CURLE_FAILED_INIT);
      HASH_RETURN(0x356E3482E31B1623LL, k_MW_UnframeMode, MW_UnframeMode);
      break;
    case 1572:
      HASH_RETURN(0x4250A97FE47A5624LL, k_CURL_VERSION_LIBZ, CURL_VERSION_LIBZ);
      break;
    case 1573:
      HASH_RETURN(0x74C57495C48A2625LL, k_CURLOPT_PROXYTYPE, CURLOPT_PROXYTYPE);
      break;
    case 1577:
      HASH_RETURN(0x4FF31C1C1C0F4629LL, k_ULOC_ACTUAL_LOCALE, ULOC_ACTUAL_LOCALE);
      break;
    case 1578:
      HASH_RETURN(0x2C757E45D392262ALL, k_EXTR_PREFIX_SAME, EXTR_PREFIX_SAME);
      HASH_RETURN(0x201D79E87496762ALL, k_MW_UndefinedRule, MW_UndefinedRule);
      break;
    case 1582:
      HASH_RETURN(0x3C07A491DFAB062ELL, k_CURLINFO_PRETRANSFER_TIME, CURLINFO_PRETRANSFER_TIME);
      HASH_RETURN(0x0FF0E5E69A87962ELL, k_WUNTRACED, WUNTRACED);
      break;
    case 1583:
      HASH_RETURN(0x69D80EB693E0162FLL, k_CURLOPT_USERPWD, CURLOPT_USERPWD);
      HASH_RETURN(0x5A05A5EF04EF762FLL, k_MW_DstCompositeOp, MW_DstCompositeOp);
      break;
    case 1591:
      HASH_RETURN(0x4B9820BB7315E637LL, k_U_BRK_MISMATCHED_PAREN, U_BRK_MISMATCHED_PAREN);
      break;
    case 1592:
      HASH_RETURN(0x02AB8992456CC638LL, k_DEBUG_LOG_AGENT, DEBUG_LOG_AGENT);
      break;
    case 1593:
      HASH_RETURN(0x3A13FB735D863639LL, k_SQLITE3_TEXT, SQLITE3_TEXT);
      break;
    case 1594:
      HASH_RETURN(0x6F01ED04CDEA063ALL, k_SQLITE3_INTEGER, SQLITE3_INTEGER);
      HASH_RETURN(0x6365CD9A0B57B63ALL, k_CURLOPT_HTTP200ALIASES, CURLOPT_HTTP200ALIASES);
      break;
    case 1599:
      HASH_RETURN(0x34DC73ABB362C63FLL, k_MW_NorthWestGravity, MW_NorthWestGravity);
      break;
    case 1602:
      HASH_RETURN(0x2902E44A32F74642LL, k_XML_ATTRIBUTE_ENUMERATION, XML_ATTRIBUTE_ENUMERATION);
      HASH_RETURN(0x33BB1059C979E642LL, k_POSIX_S_IFIFO, POSIX_S_IFIFO);
      break;
    case 1603:
      HASH_RETURN(0x56DCBD0054C97643LL, k_PREG_BACKTRACK_LIMIT_ERROR, PREG_BACKTRACK_LIMIT_ERROR);
      break;
    case 1610:
      HASH_RETURN(0x3B5E417C2BC1064ALL, k_SOCKET_EISNAM, SOCKET_EISNAM);
      break;
    case 1612:
      HASH_RETURN(0x0714AB515519064CLL, k_SOCKET_ECONNABORTED, SOCKET_ECONNABORTED);
      break;
    case 1614:
      HASH_RETURN(0x693E8CE5A4BDB64ELL, k_UPLOAD_ERR_EXTENSION, UPLOAD_ERR_EXTENSION);
      break;
    case 1615:
      HASH_RETURN(0x0F0BCFC5B7D9564FLL, k_MW_LineInterlace, MW_LineInterlace);
      break;
    case 1618:
      HASH_RETURN(0x6F2036553475E652LL, k_IMG_GD2_COMPRESSED, IMG_GD2_COMPRESSED);
      HASH_RETURN(0x31C84658D22E4652LL, k_T_OPEN_TAG, T_OPEN_TAG);
      break;
    case 1620:
      HASH_RETURN(0x1A5E3F3A09409654LL, k_ABDAY_3, ABDAY_3);
      break;
    case 1621:
      HASH_RETURN(0x577B9D2AD53EF655LL, k_MYSQLI_NO_DATA, MYSQLI_NO_DATA);
      break;
    case 1622:
      HASH_RETURN(0x5836A6364F894656LL, k_SOCKET_EINPROGRESS, SOCKET_EINPROGRESS);
      break;
    case 1626:
      HASH_RETURN(0x3A13EC9C59F4165ALL, k_PHP_OUTPUT_HANDLER_START, PHP_OUTPUT_HANDLER_START);
      break;
    case 1628:
      HASH_RETURN(0x35181A573537365CLL, k_STREAM_ENFORCE_SAFE_MODE, STREAM_ENFORCE_SAFE_MODE);
      HASH_RETURN(0x232DEB0238C1565CLL, k_SOCKET_EADV, SOCKET_EADV);
      break;
    case 1633:
      HASH_RETURN(0x594396F7F695B661LL, k_SOCKET_EOPNOTSUPP, SOCKET_EOPNOTSUPP);
      break;
    case 1635:
      HASH_RETURN(0x527DBB739B4F5663LL, k_DATE_W3C, DATE_W3C);
      break;
    case 1636:
      HASH_RETURN(0x3D193EE0BAC99664LL, k_SOCKET_ELOOP, SOCKET_ELOOP);
      break;
    case 1640:
      HASH_RETURN(0x07F3CE6F91820668LL, k_LOG_DEBUG, LOG_DEBUG);
      break;
    case 1642:
      HASH_RETURN(0x0B878628BB55666ALL, k_MCC_PORT_DEFAULT, MCC_PORT_DEFAULT);
      HASH_RETURN(0x49C7314634E6366ALL, k_LOG_USER, LOG_USER);
      break;
    case 1652:
      HASH_RETURN(0x3A3C1B143EAB6674LL, k_MW_SpreadPreview, MW_SpreadPreview);
      break;
    case 1654:
      HASH_RETURN(0x72FF6CA950BC5676LL, k_XML_COMMENT_NODE, XML_COMMENT_NODE);
      break;
    case 1655:
      HASH_RETURN(0x3E0F46D27EEF1677LL, k_U_FMT_PARSE_ERROR_LIMIT, U_FMT_PARSE_ERROR_LIMIT);
      break;
    case 1659:
      HASH_RETURN(0x4B9782CE0E21D67BLL, k_MW_ScreenCompositeOp, MW_ScreenCompositeOp);
      break;
    case 1663:
      HASH_RETURN(0x20AFB1446DAC467FLL, k_MW_CopyGreenCompositeOp, MW_CopyGreenCompositeOp);
      break;
    case 1664:
      HASH_RETURN(0x6941704F7A3A4680LL, k_T_MOD_EQUAL, T_MOD_EQUAL);
      break;
    case 1669:
      HASH_RETURN(0x353E4A8C9EA0E685LL, k_MW_RotatePreview, MW_RotatePreview);
      break;
    case 1671:
      HASH_RETURN(0x213D650546EC9687LL, k_IMG_FILTER_GRAYSCALE, IMG_FILTER_GRAYSCALE);
      break;
    case 1674:
      HASH_RETURN(0x549BA1E91A68068ALL, k_UPLOAD_ERR_NO_TMP_DIR, UPLOAD_ERR_NO_TMP_DIR);
      break;
    case 1677:
      HASH_RETURN(0x56C3923D320DA68DLL, k_MW_TrueColorType, MW_TrueColorType);
      HASH_RETURN(0x7A21D43E0067868DLL, k_U_REGEX_BAD_ESCAPE_SEQUENCE, U_REGEX_BAD_ESCAPE_SEQUENCE);
      break;
    case 1678:
      HASH_RETURN(0x4AD5D039F33E068ELL, k_U_REGEX_ERROR_LIMIT, U_REGEX_ERROR_LIMIT);
      HASH_RETURN(0x6D38BED4F9B5E68ELL, k_MYSQLI_GROUP_FLAG, MYSQLI_GROUP_FLAG);
      break;
    case 1684:
      HASH_RETURN(0x4F52C13DD1F62694LL, k_XML_NOTATION_NODE, XML_NOTATION_NODE);
      break;
    case 1685:
      HASH_RETURN(0x3AA13E3175564695LL, k_MON_2, MON_2);
      break;
    case 1691:
      HASH_RETURN(0x2C7D797DADA9C69BLL, k_MW_SrcOverCompositeOp, MW_SrcOverCompositeOp);
      break;
    case 1693:
      HASH_RETURN(0x420C3B126DE3D69DLL, k_MW_FloatPixel, MW_FloatPixel);
      break;
    case 1695:
      HASH_RETURN(0x0D64A754EC74369FLL, k_CURL_VERSION_SSL, CURL_VERSION_SSL);
      break;
    case 1697:
      HASH_RETURN(0x6FBA9F728C5836A1LL, k_MCC_NODELAY, MCC_NODELAY);
      break;
    case 1698:
      HASH_RETURN(0x752BFAD2BED0F6A2LL, k_T_CATCH, T_CATCH);
      break;
    case 1700:
      HASH_RETURN(0x69CFCC774FFB46A4LL, k_PKCS7_NOVERIFY, PKCS7_NOVERIFY);
      HASH_RETURN(0x691114B93042A6A4LL, k_T_INT_CAST, T_INT_CAST);
      break;
    case 1703:
      HASH_RETURN(0x756037040434A6A7LL, k_DNS_AAAA, DNS_AAAA);
      break;
    case 1707:
      HASH_RETURN(0x603174EB69B9D6ABLL, k_IMAGETYPE_SWF, IMAGETYPE_SWF);
      break;
    case 1713:
      HASH_RETURN(0x13B67015F66776B1LL, k_MW_DelegateError, MW_DelegateError);
      break;
    case 1716:
      HASH_RETURN(0x31E9FAA3813766B4LL, k_MCC_DGRAM_TMO_WEIGHT, MCC_DGRAM_TMO_WEIGHT);
      HASH_RETURN(0x0809501EC57106B4LL, k_IMG_FILTER_COLORIZE, IMG_FILTER_COLORIZE);
      break;
    case 1723:
      HASH_RETURN(0x382F450B2DF1C6BBLL, k_SQLITE3_NUM, SQLITE3_NUM);
      HASH_RETURN(0x1D0C5FE6684436BBLL, k_MW_MultiplyCompositeOp, MW_MultiplyCompositeOp);
      HASH_RETURN(0x3CE71ED37919B6BBLL, k_U_INVALID_ID, U_INVALID_ID);
      break;
    case 1727:
      HASH_RETURN(0x7F09B219DD62B6BFLL, k_FORCE_DEFLATE, FORCE_DEFLATE);
      break;
    case 1730:
      HASH_RETURN(0x28DA6E111BED76C2LL, k_U_MULTIPLE_ANTE_CONTEXTS, U_MULTIPLE_ANTE_CONTEXTS);
      break;
    case 1733:
      HASH_RETURN(0x33153DFC262E76C5LL, k_XSD_BASE64BINARY, XSD_BASE64BINARY);
      break;
    case 1737:
      HASH_RETURN(0x23BD1300773736C9LL, k_SOCKET_EWOULDBLOCK, SOCKET_EWOULDBLOCK);
      break;
    case 1740:
      HASH_RETURN(0x6F04597B140A96CCLL, k_SOL_TCP, SOL_TCP);
      break;
    case 1743:
      HASH_RETURN(0x40222ED008C456CFLL, k_MCC_CONN_TMO_MS, MCC_CONN_TMO_MS);
      break;
    case 1744:
      HASH_RETURN(0x1724D37E8935E6D0LL, k_STREAM_NOTIFY_FAILURE, STREAM_NOTIFY_FAILURE);
      break;
    case 1745:
      HASH_RETURN(0x6544B14F39B016D1LL, k_SOCKET_EAGAIN, SOCKET_EAGAIN);
      break;
    case 1752:
      HASH_RETURN(0x30E37E8FDCF0A6D8LL, k_U_PARSE_ERROR_LIMIT, U_PARSE_ERROR_LIMIT);
      break;
    case 1753:
      HASH_RETURN(0x3E4C4F24639EE6D9LL, k_SOCKET_EREMOTE, SOCKET_EREMOTE);
      break;
    case 1758:
      HASH_RETURN(0x2AD352CA317456DELL, k_T_SL_EQUAL, T_SL_EQUAL);
      break;
    case 1761:
      HASH_RETURN(0x63C9F5A35DE6E6E1LL, k_MYSQLI_TYPE_SET, MYSQLI_TYPE_SET);
      break;
    case 1763:
      HASH_RETURN(0x5FABFDCB8225A6E3LL, k_LOG_UUCP, LOG_UUCP);
      break;
    case 1766:
      HASH_RETURN(0x5A375DEB3587B6E6LL, k_MW_DisplaceCompositeOp, MW_DisplaceCompositeOp);
      break;
    case 1767:
      HASH_RETURN(0x548883D60E9096E7LL, k_MYSQLI_TYPE_TIMESTAMP, MYSQLI_TYPE_TIMESTAMP);
      break;
    case 1768:
      HASH_RETURN(0x300FB4FDC555A6E8LL, k_IMG_FILTER_NEGATE, IMG_FILTER_NEGATE);
      break;
    case 1772:
      HASH_RETURN(0x1805BFEFC053E6ECLL, k_LOG_LOCAL4, LOG_LOCAL4);
      HASH_RETURN(0x6D2FDA24541BF6ECLL, k_MYSQLI_MULTIPLE_KEY_FLAG, MYSQLI_MULTIPLE_KEY_FLAG);
      break;
    case 1774:
      HASH_RETURN(0x144F99BEDEF4C6EELL, k_XML_ERROR_JUNK_AFTER_DOC_ELEMENT, XML_ERROR_JUNK_AFTER_DOC_ELEMENT);
      HASH_RETURN(0x2293332FF8FFE6EELL, k_SOCKET_EXDEV, SOCKET_EXDEV);
      break;
    case 1777:
      HASH_RETURN(0x3E8BC8B28AC606F1LL, k_MW_MissingDelegateError, MW_MissingDelegateError);
      break;
    case 1785:
      HASH_RETURN(0x18146CB6242F56F9LL, k_MW_TransparentOpacity, MW_TransparentOpacity);
      break;
    case 1787:
      HASH_RETURN(0x64399C8ED2D806FBLL, k_DIRECTORY_SEPARATOR, DIRECTORY_SEPARATOR);
      break;
    case 1789:
      HASH_RETURN(0x2502BB56AD3B06FDLL, k_SOCKET_ESOCKTNOSUPPORT, SOCKET_ESOCKTNOSUPPORT);
      HASH_RETURN(0x07FCB05E8D49F6FDLL, k_MW_AnyStyle, MW_AnyStyle);
      break;
    case 1793:
      HASH_RETURN(0x6DD31F8F8D1BC701LL, k_LOG_NOWAIT, LOG_NOWAIT);
      break;
    case 1803:
      HASH_RETURN(0x038DCF9D35BB370BLL, k_PHPMCC_NEW_HANDLE, PHPMCC_NEW_HANDLE);
      break;
    case 1810:
      HASH_RETURN(0x68C5E4A4577BB712LL, k_U_REGEX_PROPERTY_SYNTAX, U_REGEX_PROPERTY_SYNTAX);
      break;
    case 1812:
      HASH_RETURN(0x260BC1D181858714LL, k_OPENSSL_CIPHER_3DES, OPENSSL_CIPHER_3DES);
      break;
    case 1814:
      HASH_RETURN(0x6BE145E729972716LL, k_U_INVARIANT_CONVERSION_ERROR, U_INVARIANT_CONVERSION_ERROR);
      break;
    case 1818:
      HASH_RETURN(0x0EFB8EB113D4E71ALL, k_DNS_A6, DNS_A6);
      break;
    case 1820:
      HASH_RETURN(0x792D92EA13AE471CLL, k_CURLOPT_INTERFACE, CURLOPT_INTERFACE);
      break;
    case 1821:
      HASH_RETURN(0x188542CC6A9BD71DLL, k_SQLITE3_OPEN_CREATE, SQLITE3_OPEN_CREATE);
      break;
    case 1823:
      HASH_RETURN(0x041E99953E9DC71FLL, k_PREG_GREP_INVERT, PREG_GREP_INVERT);
      break;
    case 1825:
      HASH_RETURN(0x639180A8AC631721LL, k_GD_RELEASE_VERSION, GD_RELEASE_VERSION);
      break;
    case 1826:
      HASH_RETURN(0x395FC3A9CD571722LL, k_CURLOPT_STDERR, CURLOPT_STDERR);
      break;
    case 1828:
      HASH_RETURN(0x5BADEE146DF33724LL, k_MW_QuantizePreview, MW_QuantizePreview);
      HASH_RETURN(0x1ADA9DB736DCD724LL, k_U_RULE_MASK_ERROR, U_RULE_MASK_ERROR);
      break;
    case 1829:
      HASH_RETURN(0x2B620D69A2299725LL, k_MW_CopyYellowCompositeOp, MW_CopyYellowCompositeOp);
      break;
    case 1830:
      HASH_RETURN(0x648120A99666F726LL, k_MCRYPT_TRIPLEDES, MCRYPT_TRIPLEDES);
      break;
    case 1834:
      HASH_RETURN(0x6EECBB6F29B1B72ALL, k_MB_OVERLOAD_REGEX, MB_OVERLOAD_REGEX);
      break;
    case 1838:
      HASH_RETURN(0x1F175B4F9F33C72ELL, k_MCC_PROXY_ARITH_OP, MCC_PROXY_ARITH_OP);
      break;
    case 1842:
      HASH_RETURN(0x292EF9B0EA4AE732LL, k_MW_SrcCompositeOp, MW_SrcCompositeOp);
      break;
    case 1847:
      HASH_RETURN(0x67DF05DCFD4E1737LL, k_MCC_ARG_NODELAY, MCC_ARG_NODELAY);
      break;
    case 1848:
      HASH_RETURN(0x0EDAA0C1735C3738LL, k_MW_YIQColorspace, MW_YIQColorspace);
      break;
    case 1852:
      HASH_RETURN(0x57D9975BA586973CLL, k_MCRYPT_RAND, MCRYPT_RAND);
      break;
    case 1855:
      HASH_RETURN(0x650E641CC0E3873FLL, k_CONNECTION_ABORTED, CONNECTION_ABORTED);
      break;
    case 1857:
      HASH_RETURN(0x0941509526468741LL, k_SOCKET_EISDIR, SOCKET_EISDIR);
      break;
    case 1860:
      HASH_RETURN(0x32D82FB8CCF6B744LL, k_GRAPHEME_EXTR_MAXCHARS, GRAPHEME_EXTR_MAXCHARS);
      break;
    case 1861:
      HASH_RETURN(0x31CF63F42018C745LL, k_CURLOPT_COOKIE, CURLOPT_COOKIE);
      HASH_RETURN(0x1D4B894BEEDF4745LL, k_T_CONSTANT_ENCAPSED_STRING, T_CONSTANT_ENCAPSED_STRING);
      break;
    case 1862:
      HASH_RETURN(0x33B6CA0ED5797746LL, k_MW_RootMeanSquaredErrorMetric, MW_RootMeanSquaredErrorMetric);
      break;
    case 1866:
      HASH_RETURN(0x15405967EC1DE74ALL, k_MW_DstOutCompositeOp, MW_DstOutCompositeOp);
      break;
    case 1874:
      HASH_RETURN(0x01A68F55AB8FB752LL, k_T_ENDIF, T_ENDIF);
      break;
    case 1875:
      HASH_RETURN(0x579054DAC7BEA753LL, k_SEEK_CUR, SEEK_CUR);
      break;
    case 1876:
      HASH_RETURN(0x3F1C931FB1410754LL, k_XSD_NEGATIVEINTEGER, XSD_NEGATIVEINTEGER);
      break;
    case 1877:
      HASH_RETURN(0x2FA7F648C4AD1755LL, k_T_EVAL, T_EVAL);
      break;
    case 1883:
      HASH_RETURN(0x0FB449265D3FA75BLL, k_MW_CopyCompositeOp, MW_CopyCompositeOp);
      break;
    case 1884:
      HASH_RETURN(0x772C219B5A46075CLL, k_MW_PixelsPerInchResolution, MW_PixelsPerInchResolution);
      break;
    case 1887:
      HASH_RETURN(0x7825179695D2575FLL, k_MCC_GET_RECORD_ERRORS, MCC_GET_RECORD_ERRORS);
      break;
    case 1888:
      HASH_RETURN(0x287530C302633760LL, k_MCC_ARG_MIRROR_CFG_SERVERPOOLS, MCC_ARG_MIRROR_CFG_SERVERPOOLS);
      HASH_RETURN(0x3A01C3205E2C1760LL, k_CURL_TIMECOND_LASTMOD, CURL_TIMECOND_LASTMOD);
      break;
    case 1890:
      HASH_RETURN(0x57AA9835923EE762LL, k_UCOL_OFF, UCOL_OFF);
      break;
    case 1891:
      HASH_RETURN(0x0647DE45E5710763LL, k_PSFS_ERR_FATAL, PSFS_ERR_FATAL);
      HASH_RETURN(0x5FC6D86D2BE50763LL, k_CURLE_FTP_WEIRD_USER_REPLY, CURLE_FTP_WEIRD_USER_REPLY);
      break;
    case 1892:
      HASH_RETURN(0x6633A488203B1764LL, k_T_DIV_EQUAL, T_DIV_EQUAL);
      break;
    case 1893:
      HASH_RETURN(0x133DA7547CDC9765LL, k_PREG_SPLIT_NO_EMPTY, PREG_SPLIT_NO_EMPTY);
      HASH_RETURN(0x4CEC52E1E8FEC765LL, k_IMG_ARC_NOFILL, IMG_ARC_NOFILL);
      break;
    case 1894:
      HASH_RETURN(0x501EDBA82DA56766LL, k_MCC_ARG_CONSISTENT_HASHING_PREFIXES, MCC_ARG_CONSISTENT_HASHING_PREFIXES);
      break;
    case 1895:
      HASH_RETURN(0x54A74F763794C767LL, k_CURLOPT_CRLF, CURLOPT_CRLF);
      HASH_RETURN(0x05D6298339507767LL, k_MW_ReplaceCompositeOp, MW_ReplaceCompositeOp);
      break;
    case 1896:
      HASH_RETURN(0x448607F579E9C768LL, k_SOCKET_EIDRM, SOCKET_EIDRM);
      HASH_RETURN(0x565D48E6A30DD768LL, k_OCI_B_BIN, OCI_B_BIN);
      break;
    case 1902:
      HASH_RETURN(0x71A04AD5ED9D876ELL, k_IMG_WBMP, IMG_WBMP);
      break;
    case 1908:
      HASH_RETURN(0x2F1A49A33C675774LL, k_SIGCHLD, SIGCHLD);
      break;
    case 1911:
      HASH_RETURN(0x626AC3D2E1FAE777LL, k_CURL_NETRC_OPTIONAL, CURL_NETRC_OPTIONAL);
      break;
    case 1914:
      HASH_RETURN(0x0BC84FD0103FA77ALL, k_MCC_IPPROTO_TCP, MCC_IPPROTO_TCP);
      break;
    case 1916:
      HASH_RETURN(0x78193C84413D077CLL, k_MW_FrameMode, MW_FrameMode);
      break;
    case 1922:
      HASH_RETURN(0x03B141A69794D782LL, k_PHP_URL_QUERY, PHP_URL_QUERY);
      HASH_RETURN(0x1343FDD056926782LL, k_CURLOPT_COOKIESESSION, CURLOPT_COOKIESESSION);
      HASH_RETURN(0x1117821E1B069782LL, k_CURLE_SSL_ENGINE_NOTFOUND, CURLE_SSL_ENGINE_NOTFOUND);
      break;
    case 1924:
      HASH_RETURN(0x7A4B8593A23CC784LL, k_T_END_HEREDOC, T_END_HEREDOC);
      break;
    case 1926:
      HASH_RETURN(0x5ADD2A9E70C23786LL, k_XSD_GYEAR, XSD_GYEAR);
      break;
    case 1929:
      HASH_RETURN(0x7BEA68732FFA8789LL, k_MW_UndefinedFilter, MW_UndefinedFilter);
      HASH_RETURN(0x7CAD868BF5F07789LL, k_U_SORT_KEY_TOO_SHORT_WARNING, U_SORT_KEY_TOO_SHORT_WARNING);
      HASH_RETURN(0x3F36CD494FD4C789LL, k_SIGHUP, SIGHUP);
      break;
    case 1934:
      HASH_RETURN(0x762066131D7B278ELL, k_IMG_COLOR_BRUSHED, IMG_COLOR_BRUSHED);
      break;
    case 1935:
      HASH_RETURN(0x63ACEEDBF49D678FLL, k_MCRYPT_RIJNDAEL_256, MCRYPT_RIJNDAEL_256);
      break;
    case 1936:
      HASH_RETURN(0x4128B3B8BD6F0790LL, k_DATE_ISO8601, DATE_ISO8601);
      HASH_RETURN(0x35AD2988BE853790LL, k_MW_BZipCompression, MW_BZipCompression);
      break;
    case 1937:
      HASH_RETURN(0x58B82AB623312791LL, k_MW_GrayscalePreview, MW_GrayscalePreview);
      break;
    case 1939:
      HASH_RETURN(0x4A97C20CE8EB5793LL, k_SOCKET_EPIPE, SOCKET_EPIPE);
      HASH_RETURN(0x7A2A02F8D8F28793LL, k_MW_PeakAbsoluteErrorMetric, MW_PeakAbsoluteErrorMetric);
      break;
    case 1941:
      HASH_RETURN(0x536D4F77BF80F795LL, k_SOAP_ENCODED, SOAP_ENCODED);
      break;
    case 1949:
      HASH_RETURN(0x1382424778D8979DLL, k_SOCKET_EPFNOSUPPORT, SOCKET_EPFNOSUPPORT);
      break;
    case 1952:
      HASH_RETURN(0x4900DF8C3B1F47A0LL, k_DOM_WRONG_DOCUMENT_ERR, DOM_WRONG_DOCUMENT_ERR);
      break;
    case 1963:
      HASH_RETURN(0x5099501095EEB7ABLL, k_MW_UnrecognizedDispose, MW_UnrecognizedDispose);
      HASH_RETURN(0x4E78DA139192B7ABLL, k_MYSQLI_TYPE_NEWDATE, MYSQLI_TYPE_NEWDATE);
      break;
    case 1966:
      HASH_RETURN(0x37C2AE2BAABEC7AELL, k_LOG_AUTHPRIV, LOG_AUTHPRIV);
      break;
    case 1969:
      HASH_RETURN(0x6496036DB407B7B1LL, k_T_PRIVATE, T_PRIVATE);
      break;
    case 1972:
      HASH_RETURN(0x6F874FE3ABDF17B4LL, k_MW_DrawWarning, MW_DrawWarning);
      break;
    case 1973:
      HASH_RETURN(0x36AD2EE9B5FB47B5LL, k_ABMON_1, ABMON_1);
      break;
    case 1974:
      HASH_RETURN(0x4F7A901EB149E7B6LL, k_LC_MONETARY, LC_MONETARY);
      break;
    case 1975:
      HASH_RETURN(0x0EB4E2C64D0C67B7LL, k_MW_UndefinedPixel, MW_UndefinedPixel);
      break;
    case 1976:
      HASH_RETURN(0x5A792FBC3B6C27B8LL, k_CURLOPT_HTTPGET, CURLOPT_HTTPGET);
      HASH_RETURN(0x1D077550A75167B8LL, k_CURL_NETRC_IGNORED, CURL_NETRC_IGNORED);
      break;
    case 1982:
      HASH_RETURN(0x444C8C4C24BC27BELL, k_LOG_EMERG, LOG_EMERG);
      HASH_RETURN(0x0873640DDAF3A7BELL, k_CURLOPT_SSLCERT, CURLOPT_SSLCERT);
      break;
    case 1983:
      HASH_RETURN(0x665928FDFBC3C7BFLL, k_U_MALFORMED_VARIABLE_REFERENCE, U_MALFORMED_VARIABLE_REFERENCE);
      HASH_RETURN(0x0A31065FCEBF77BFLL, k_T_SR, T_SR);
      break;
    case 1988:
      HASH_RETURN(0x3215B126C795F7C4LL, k_MYSQLI_CLIENT_FOUND_ROWS, MYSQLI_CLIENT_FOUND_ROWS);
      break;
    case 1991:
      HASH_RETURN(0x070B1673707BB7C7LL, k_MW_XYZColorspace, MW_XYZColorspace);
      break;
    case 1993:
      HASH_RETURN(0x78E6D9AB7B1F77C9LL, k_CURLOPT_FTP_USE_EPSV, CURLOPT_FTP_USE_EPSV);
      HASH_RETURN(0x195236F07FE8D7C9LL, k_OPENSSL_ALGO_MD2, OPENSSL_ALGO_MD2);
      break;
    case 1995:
      HASH_RETURN(0x61A887EB9132F7CBLL, k_LIBXML_NONET, LIBXML_NONET);
      HASH_RETURN(0x2C99C566869427CBLL, k_CURLPROXY_HTTP, CURLPROXY_HTTP);
      break;
    case 1997:
      HASH_RETURN(0x27733194860247CDLL, k_CURLINFO_REDIRECT_COUNT, CURLINFO_REDIRECT_COUNT);
      break;
    case 2006:
      HASH_RETURN(0x313F6CCD237977D6LL, k_XSD_IDREF, XSD_IDREF);
      break;
    case 2009:
      HASH_RETURN(0x03CC1DAC7413F7D9LL, k_XML_ERROR_BAD_CHAR_REF, XML_ERROR_BAD_CHAR_REF);
      HASH_RETURN(0x6001284C876B17D9LL, k_MW_GammaPreview, MW_GammaPreview);
      break;
    case 2011:
      HASH_RETURN(0x38F10B0B143D47DBLL, k_IMAGETYPE_PNG, IMAGETYPE_PNG);
      break;
    case 2014:
      HASH_RETURN(0x379335F89D4EA7DELL, k_CURLE_HTTP_PORT_FAILED, CURLE_HTTP_PORT_FAILED);
      break;
    case 2020:
      HASH_RETURN(0x5C6968EBD7E647E4LL, k_SOCKET_EINVAL, SOCKET_EINVAL);
      HASH_RETURN(0x7B2A807DE31127E4LL, k_POSIX_R_OK, POSIX_R_OK);
      break;
    case 2022:
      HASH_RETURN(0x63D643FEF95D17E6LL, k_CURLOPT_VERBOSE, CURLOPT_VERBOSE);
      break;
    case 2030:
      HASH_RETURN(0x28DD5960595917EELL, k_U_BRK_INTERNAL_ERROR, U_BRK_INTERNAL_ERROR);
      break;
    case 2032:
      HASH_RETURN(0x464500713ED9B7F0LL, k_LDAP_OPT_RESTART, LDAP_OPT_RESTART);
      break;
    case 2041:
      HASH_RETURN(0x579FA9D42A0DE7F9LL, k_EXTR_SKIP, EXTR_SKIP);
      HASH_RETURN(0x0947FED54DD737F9LL, k_CURL_VERSION_IPV6, CURL_VERSION_IPV6);
      break;
    case 2042:
      HASH_RETURN(0x37A1799ECE3A77FALL, k_OCI_DTYPE_FILE, OCI_DTYPE_FILE);
      break;
    case 2044:
      HASH_RETURN(0x20DB841B6D8487FCLL, k_MW_ImageError, MW_ImageError);
      HASH_RETURN(0x5B880AEFC81517FCLL, k_CLOCK_REALTIME, CLOCK_REALTIME);
      break;
    case 2045:
      HASH_RETURN(0x49327DA0861697FDLL, k_IMG_XPM, IMG_XPM);
      break;
    case 2049:
      HASH_RETURN(0x12BCEA0A7E8F1801LL, k_MCC_ARG_UDP_REPLY_PORTS, MCC_ARG_UDP_REPLY_PORTS);
      break;
    case 2050:
      HASH_RETURN(0x0367293F7FF58802LL, k_U_REGEX_INVALID_BACK_REF, U_REGEX_INVALID_BACK_REF);
      break;
    case 2053:
      HASH_RETURN(0x46405EB950EFB805LL, k_MW_FaxCompression, MW_FaxCompression);
      break;
    case 2056:
      HASH_RETURN(0x19279D6DB4F70808LL, k_HASH_HMAC, HASH_HMAC);
      HASH_RETURN(0x3CADC65B210C7808LL, k_SIGSYS, SIGSYS);
      break;
    case 2057:
      HASH_RETURN(0x65E88B54E276D809LL, k_MCRYPT_BLOWFISH_COMPAT, MCRYPT_BLOWFISH_COMPAT);
      break;
    case 2059:
      HASH_RETURN(0x1283FEC64E20380BLL, k_U_STRINGPREP_PROHIBITED_ERROR, U_STRINGPREP_PROHIBITED_ERROR);
      break;
    case 2061:
      HASH_RETURN(0x3FE76D87A11F780DLL, k_MW_ButtCap, MW_ButtCap);
      break;
    case 2063:
      HASH_RETURN(0x17CC1D98A80E180FLL, k_CURLE_SSL_CERTPROBLEM, CURLE_SSL_CERTPROBLEM);
      break;
    case 2064:
      HASH_RETURN(0x33952DD5D2646810LL, k_XML_NAMESPACE_DECL_NODE, XML_NAMESPACE_DECL_NODE);
      break;
    case 2065:
      HASH_RETURN(0x33A0B703BE508811LL, k_E_USER_ERROR, E_USER_ERROR);
      HASH_RETURN(0x30E55E9F164FF811LL, k_MW_WestGravity, MW_WestGravity);
      break;
    case 2066:
      HASH_RETURN(0x34192513C8751812LL, k_SQLT_BIN, SQLT_BIN);
      break;
    case 2071:
      HASH_RETURN(0x192E88872DDA2817LL, k_OCI_B_NTY, OCI_B_NTY);
      break;
    case 2072:
      HASH_RETURN(0x574CCEE9AF16E818LL, k_CURLE_UNKNOWN_TELNET_OPTION, CURLE_UNKNOWN_TELNET_OPTION);
      break;
    case 2074:
      HASH_RETURN(0x14A2F28E9D9E581ALL, k_MW_WandError, MW_WandError);
      HASH_RETURN(0x77922EEE8970081ALL, k_MW_ForgetGravity, MW_ForgetGravity);
      break;
    case 2079:
      HASH_RETURN(0x5B7713B85F5D981FLL, k_MW_NorthEastGravity, MW_NorthEastGravity);
      break;
    case 2083:
      HASH_RETURN(0x345D832025A65823LL, k_IMAGETYPE_BMP, IMAGETYPE_BMP);
      break;
    case 2086:
      HASH_RETURN(0x19D7B9306EFAC826LL, k_T_CLASS, T_CLASS);
      break;
    case 2092:
      HASH_RETURN(0x071B51CF8A72482CLL, k_PKCS7_NOCHAIN, PKCS7_NOCHAIN);
      break;
    case 2093:
      HASH_RETURN(0x388D47E32D74182DLL, k_SQLITE3_OPEN_READWRITE, SQLITE3_OPEN_READWRITE);
      break;
    case 2094:
      HASH_RETURN(0x154F2D870C9D282ELL, k_LC_ALL, LC_ALL);
      HASH_RETURN(0x4BC3971B0CBF782ELL, k_MW_ObliqueStyle, MW_ObliqueStyle);
      HASH_RETURN(0x27D637FD3FD5582ELL, k_U_COLLATOR_VERSION_MISMATCH, U_COLLATOR_VERSION_MISMATCH);
      break;
    case 2095:
      HASH_RETURN(0x5E50FB86E399C82FLL, k_U_BRK_UNRECOGNIZED_OPTION, U_BRK_UNRECOGNIZED_OPTION);
      break;
    case 2099:
      HASH_RETURN(0x5F50413E37549833LL, k_MW_BlueChannel, MW_BlueChannel);
      break;
    case 2100:
      HASH_RETURN(0x030936AF1A6C6834LL, k_LC_MESSAGES, LC_MESSAGES);
      HASH_RETURN(0x46F6871193CE7834LL, k_SEEK_END, SEEK_END);
      break;
    case 2102:
      HASH_RETURN(0x24A11AD381891836LL, k_CURLOPT_DNS_USE_GLOBAL_CACHE, CURLOPT_DNS_USE_GLOBAL_CACHE);
      HASH_RETURN(0x6613FF05B85FD836LL, k_MW_AbsoluteIntent, MW_AbsoluteIntent);
      break;
    case 2103:
      HASH_RETURN(0x584AD726A54D7837LL, k_STREAM_PF_INET6, STREAM_PF_INET6);
      HASH_RETURN(0x4F3E0D57B2562837LL, k_CURLE_OUT_OF_MEMORY, CURLE_OUT_OF_MEMORY);
      break;
    case 2105:
      HASH_RETURN(0x2011D11D55C07839LL, k_MCC_ARG_NPOOLPREFIX, MCC_ARG_NPOOLPREFIX);
      break;
    case 2109:
      HASH_RETURN(0x6C960B8716F2B83DLL, k_SOAP_ACTOR_UNLIMATERECEIVER, SOAP_ACTOR_UNLIMATERECEIVER);
      break;
    case 2110:
      HASH_RETURN(0x53C20120DCBEC83ELL, k_ENT_COMPAT, ENT_COMPAT);
      break;
    case 2111:
      HASH_RETURN(0x75356FA2FC21583FLL, k_GLOB_NOESCAPE, GLOB_NOESCAPE);
      break;
    case 2112:
      HASH_RETURN(0x6CF1C1A2820B7840LL, k_U_BRK_ASSIGN_ERROR, U_BRK_ASSIGN_ERROR);
      break;
    case 2113:
      HASH_RETURN(0x60693C58E7379841LL, k_MCC_ARG_DEBUG, MCC_ARG_DEBUG);
      break;
    case 2114:
      HASH_RETURN(0x06F461C01A127842LL, k_INI_SYSTEM, INI_SYSTEM);
      HASH_RETURN(0x3E0060C421772842LL, k_CURLE_FTP_ACCESS_DENIED, CURLE_FTP_ACCESS_DENIED);
      break;
    case 2117:
      HASH_RETURN(0x27B0A348C67FC845LL, k_STREAM_NOTIFY_AUTH_REQUIRED, STREAM_NOTIFY_AUTH_REQUIRED);
      HASH_RETURN(0x74E3A184D1378845LL, k_MW_ExpandedStretch, MW_ExpandedStretch);
      break;
    case 2119:
      HASH_RETURN(0x2A7B2DAC5D786847LL, k_U_STRINGPREP_UNASSIGNED_ERROR, U_STRINGPREP_UNASSIGNED_ERROR);
      break;
    case 2121:
      HASH_RETURN(0x02FBD61BF653A849LL, k_M_LOG10E, M_LOG10E);
      break;
    case 2129:
      HASH_RETURN(0x5D3D57A12F025851LL, k_UCOL_NORMALIZATION_MODE, UCOL_NORMALIZATION_MODE);
      HASH_RETURN(0x2EA281C863FF3851LL, k_U_STRING_NOT_TERMINATED_WARNING, U_STRING_NOT_TERMINATED_WARNING);
      break;
    case 2131:
      HASH_RETURN(0x42461339B9C65853LL, k_PEAR_INSTALL_DIR, PEAR_INSTALL_DIR);
      HASH_RETURN(0x27916C6508584853LL, k_MYSQLI_RPL_SLAVE, MYSQLI_RPL_SLAVE);
      break;
    case 2134:
      HASH_RETURN(0x49F51C300540C856LL, k_T_FOR, T_FOR);
      break;
    case 2140:
      HASH_RETURN(0x25CDD385D0DF085CLL, k_FALSE, FALSE);
      HASH_RETURN(0x4714E01C3C39785CLL, k_XSD_1999_NAMESPACE, XSD_1999_NAMESPACE);
      break;
    case 2142:
      HASH_RETURN(0x077D2273E186585ELL, k_PHP_INT_SIZE, PHP_INT_SIZE);
      HASH_RETURN(0x5FA43EBB9F0F985ELL, k_T_STRING_CAST, T_STRING_CAST);
      break;
    case 2144:
      HASH_RETURN(0x7CFEE5419ADF8860LL, k_SOCKET_EPERM, SOCKET_EPERM);
      break;
    case 2146:
      HASH_RETURN(0x40F39F69B1D46862LL, k_T_BOOLEAN_OR, T_BOOLEAN_OR);
      break;
    case 2149:
      HASH_RETURN(0x70F168CA811F8865LL, k_T_ARRAY_CAST, T_ARRAY_CAST);
      break;
    case 2153:
      HASH_RETURN(0x758294CA60EFC869LL, k_XML_ELEMENT_DECL_NODE, XML_ELEMENT_DECL_NODE);
      break;
    case 2155:
      HASH_RETURN(0x5EE2191D3CFA886BLL, k_CREDITS_ALL, CREDITS_ALL);
      HASH_RETURN(0x64EAE61C324E786BLL, k_SOCKET_ENOSTR, SOCKET_ENOSTR);
      HASH_RETURN(0x7C12D02C6A19D86BLL, k_CURLOPT_URL, CURLOPT_URL);
      break;
    case 2156:
      HASH_RETURN(0x790B315ECC2EE86CLL, k_MW_BilevelType, MW_BilevelType);
      break;
    case 2163:
      HASH_RETURN(0x465B3D22688A5873LL, k_MW_ImpulseNoise, MW_ImpulseNoise);
      break;
    case 2164:
      HASH_RETURN(0x0EFEA98354284874LL, k_UPLOAD_ERR_INI_SIZE, UPLOAD_ERR_INI_SIZE);
      break;
    case 2165:
      HASH_RETURN(0x2EE21BA57B82B875LL, k_DNS_PTR, DNS_PTR);
      HASH_RETURN(0x1599D857F2708875LL, k_U_PARSE_ERROR, U_PARSE_ERROR);
      break;
    case 2166:
      HASH_RETURN(0x37D152A35A3E6876LL, k_OCI_ASSOC, OCI_ASSOC);
      break;
    case 2167:
      HASH_RETURN(0x2F75598DE6463877LL, k_CURLINFO_SSL_VERIFYRESULT, CURLINFO_SSL_VERIFYRESULT);
      break;
    case 2168:
      HASH_RETURN(0x2F9FFC1169FAB878LL, k_MW_WandFatalError, MW_WandFatalError);
      break;
    case 2169:
      HASH_RETURN(0x031F7DBCABC84879LL, k_CURLE_FTP_PORT_FAILED, CURLE_FTP_PORT_FAILED);
      HASH_RETURN(0x45C713C0CF69E879LL, k_T_CURLY_OPEN, T_CURLY_OPEN);
      break;
    case 2170:
      HASH_RETURN(0x2240C503C9BFB87ALL, k_X509_PURPOSE_SSL_CLIENT, X509_PURPOSE_SSL_CLIENT);
      break;
    case 2172:
      HASH_RETURN(0x2C335891BDF0487CLL, k_CURLOPT_PASSWDFUNCTION, CURLOPT_PASSWDFUNCTION);
      break;
    case 2175:
      HASH_RETURN(0x5AAA6387AA31687FLL, k_DOM_INUSE_ATTRIBUTE_ERR, DOM_INUSE_ATTRIBUTE_ERR);
      HASH_RETURN(0x4BCFA64F4A5A587FLL, k_XML_OPTION_TARGET_ENCODING, XML_OPTION_TARGET_ENCODING);
      HASH_RETURN(0x27367C3E2B2DA87FLL, k_SQLT_LNG, SQLT_LNG);
      break;
    case 2176:
      HASH_RETURN(0x0E3C35A225716880LL, k_MW_UndefinedColorspace, MW_UndefinedColorspace);
      break;
    case 2178:
      HASH_RETURN(0x77A65A9BBD798882LL, k_XML_ATTRIBUTE_NMTOKENS, XML_ATTRIBUTE_NMTOKENS);
      HASH_RETURN(0x0120F1CB87C56882LL, k_ASSERT_BAIL, ASSERT_BAIL);
      HASH_RETURN(0x318F26B448ED5882LL, k_SOCK_DGRAM, SOCK_DGRAM);
      HASH_RETURN(0x79457CDE8DCE5882LL, k_T_UNSET, T_UNSET);
      break;
    case 2180:
      HASH_RETURN(0x0C510EF549D02884LL, k_CURLFTPAUTH_SSL, CURLFTPAUTH_SSL);
      break;
    case 2181:
      HASH_RETURN(0x765F082D54FAA885LL, k_OCI_SYSOPER, OCI_SYSOPER);
      break;
    case 2183:
      HASH_RETURN(0x37C2795D03D77887LL, k_MW_GrayscaleType, MW_GrayscaleType);
      break;
    case 2184:
      HASH_RETURN(0x1FCCE341BB995888LL, k_MW_MiterJoin, MW_MiterJoin);
      break;
    case 2186:
      HASH_RETURN(0x6B505CF72E0EB88ALL, k_CURLOPT_MAXREDIRS, CURLOPT_MAXREDIRS);
      break;
    case 2197:
      HASH_RETURN(0x22B98ADA0CE2D895LL, k_U_ILLEGAL_PAD_POSITION, U_ILLEGAL_PAD_POSITION);
      HASH_RETURN(0x03A102A1EF8DA895LL, k_OCI_DEFAULT, OCI_DEFAULT);
      break;
    case 2198:
      HASH_RETURN(0x72B940DF50000896LL, k_MW_ColorDodgeCompositeOp, MW_ColorDodgeCompositeOp);
      break;
    case 2200:
      HASH_RETURN(0x2FEC23E876B5C898LL, k_XML_ATTRIBUTE_ENTITY, XML_ATTRIBUTE_ENTITY);
      break;
    case 2202:
      HASH_RETURN(0x3740A89ECE65589ALL, k_SOL_SOCKET, SOL_SOCKET);
      HASH_RETURN(0x300C182E4A25089ALL, k_T_LINE, T_LINE);
      break;
    case 2205:
      HASH_RETURN(0x5C853574E144989DLL, k_MW_CharPixel, MW_CharPixel);
      break;
    case 2209:
      HASH_RETURN(0x15653FAD67FAD8A1LL, k_AF_UNIX, AF_UNIX);
      break;
    case 2211:
      HASH_RETURN(0x0A5955E4DEB8C8A3LL, k_SQLT_NTY, SQLT_NTY);
      break;
    case 2214:
      HASH_RETURN(0x2C360E8A69F738A6LL, k_U_MULTIPLE_CURSORS, U_MULTIPLE_CURSORS);
      break;
    case 2217:
      HASH_RETURN(0x24E10F7B53B4E8A9LL, k_U_UNEXPECTED_TOKEN, U_UNEXPECTED_TOKEN);
      break;
    case 2220:
      HASH_RETURN(0x484BB3BB4F7598ACLL, k_MSG_EOR, MSG_EOR);
      HASH_RETURN(0x32D78DF4B542B8ACLL, k_SQLT_BLOB, SQLT_BLOB);
      break;
    case 2227:
      HASH_RETURN(0x11532565DA65F8B3LL, k_OCI_B_BFILE, OCI_B_BFILE);
      break;
    case 2229:
      HASH_RETURN(0x5F6E900C4AED48B5LL, k_XML_TEXT_NODE, XML_TEXT_NODE);
      break;
    case 2231:
      HASH_RETURN(0x5C8411EE9DE9B8B7LL, k_SOCKET_ENOLCK, SOCKET_ENOLCK);
      break;
    case 2233:
      HASH_RETURN(0x02F11043EA15F8B9LL, k_ABMON_3, ABMON_3);
      break;
    case 2234:
      HASH_RETURN(0x6BC20D4DEBB4E8BALL, k_CRNCYSTR, CRNCYSTR);
      HASH_RETURN(0x34B08D613DB728BALL, k_PKCS7_NOSIGS, PKCS7_NOSIGS);
      break;
    case 2237:
      HASH_RETURN(0x07FC64F8B870A8BDLL, k_STREAM_SOCK_RAW, STREAM_SOCK_RAW);
      HASH_RETURN(0x0F97E4968AEBE8BDLL, k_MW_PerceptualIntent, MW_PerceptualIntent);
      HASH_RETURN(0x1CAD112F1B5CF8BDLL, k_MCC_ACCESSPOINT_UP, MCC_ACCESSPOINT_UP);
      break;
    case 2238:
      HASH_RETURN(0x7EA3BE3E8331B8BELL, k_CURLOPT_HTTP_VERSION, CURLOPT_HTTP_VERSION);
      break;
    case 2239:
      HASH_RETURN(0x486D3F04BDC408BFLL, k_PNG_NO_FILTER, PNG_NO_FILTER);
      break;
    case 2245:
      HASH_RETURN(0x23CA1AEA4CDA68C5LL, k_U_BRK_HEX_DIGITS_EXPECTED, U_BRK_HEX_DIGITS_EXPECTED);
      break;
    case 2249:
      HASH_RETURN(0x5A82E7A362F938C9LL, k_SOCKET_EBADF, SOCKET_EBADF);
      break;
    case 2251:
      HASH_RETURN(0x02AF23FBAF73B8CBLL, k_MW_LosslessJPEGCompression, MW_LosslessJPEGCompression);
      break;
    case 2254:
      HASH_RETURN(0x746DBA3493DA28CELL, k_X509_PURPOSE_ANY, X509_PURPOSE_ANY);
      break;
    case 2257:
      HASH_RETURN(0x5A3CDD027D1B98D1LL, k_MW_ThresholdCompositeOp, MW_ThresholdCompositeOp);
      break;
    case 2259:
      HASH_RETURN(0x7E29F1A55B1348D3LL, k_SORT_DESC, SORT_DESC);
      HASH_RETURN(0x5EF153AF8AC5A8D3LL, k_CURLE_UNSUPPORTED_PROTOCOL, CURLE_UNSUPPORTED_PROTOCOL);
      break;
    case 2260:
      HASH_RETURN(0x6A7AD33CDF49E8D4LL, k_SORT_NUMERIC, SORT_NUMERIC);
      break;
    case 2272:
      HASH_RETURN(0x43A223E650D4E8E0LL, k_MW_ModuleWarning, MW_ModuleWarning);
      HASH_RETURN(0x5320CFF3F9BEE8E0LL, k_MW_OptimizeType, MW_OptimizeType);
      break;
    case 2276:
      HASH_RETURN(0x7A2B5AADC981A8E4LL, k_U_MISPLACED_ANCHOR_START, U_MISPLACED_ANCHOR_START);
      break;
    case 2278:
      HASH_RETURN(0x5E9B400E452458E6LL, k_MON_8, MON_8);
      HASH_RETURN(0x54679881E76768E6LL, k_MCRYPT_RC6, MCRYPT_RC6);
      break;
    case 2283:
      HASH_RETURN(0x655FC9A5A7A468EBLL, k_UCOL_UPPER_FIRST, UCOL_UPPER_FIRST);
      break;
    case 2287:
      HASH_RETURN(0x4F1FC9EF358F48EFLL, k_PCRE_VERSION, PCRE_VERSION);
      break;
    case 2290:
      HASH_RETURN(0x707028E4908748F2LL, k_STREAM_NOTIFY_CONNECT, STREAM_NOTIFY_CONNECT);
      break;
    case 2293:
      HASH_RETURN(0x4B4926CD21E9E8F5LL, k_T_LOGICAL_OR, T_LOGICAL_OR);
      break;
    case 2295:
      HASH_RETURN(0x23FD459A654E88F7LL, k_MYSQLI_TYPE_YEAR, MYSQLI_TYPE_YEAR);
      break;
    case 2296:
      HASH_RETURN(0x173A4363512CC8F8LL, k_MW_ColorizeCompositeOp, MW_ColorizeCompositeOp);
      break;
    case 2298:
      HASH_RETURN(0x4A765DF8CC5BA8FALL, k_UCOL_ON, UCOL_ON);
      break;
    case 2300:
      HASH_RETURN(0x4F7A2A658BB568FCLL, k_SOCKET_EFAULT, SOCKET_EFAULT);
      break;
    case 2302:
      HASH_RETURN(0x76D357E7C04318FELL, k_SOAP_PERSISTENCE_SESSION, SOAP_PERSISTENCE_SESSION);
      break;
    case 2312:
      HASH_RETURN(0x03378600DF2B6908LL, k_CURL_TIMECOND_IFMODSINCE, CURL_TIMECOND_IFMODSINCE);
      break;
    case 2314:
      HASH_RETURN(0x110DFB34EFB0A90ALL, k_SQLT_STR, SQLT_STR);
      break;
    case 2315:
      HASH_RETURN(0x1047DF1F1BF2990BLL, k_MW_ColorSeparationType, MW_ColorSeparationType);
      break;
    case 2319:
      HASH_RETURN(0x09480BF69F8BD90FLL, k_MON_4, MON_4);
      break;
    case 2323:
      HASH_RETURN(0x0112B569D0962913LL, k_CURLE_FTP_BAD_DOWNLOAD_RESUME, CURLE_FTP_BAD_DOWNLOAD_RESUME);
      break;
    case 2324:
      HASH_RETURN(0x31370A258E78D914LL, k_XSD_NAMESPACE, XSD_NAMESPACE);
      HASH_RETURN(0x2C343F827292F914LL, k_U_ILLEGAL_ESCAPE_SEQUENCE, U_ILLEGAL_ESCAPE_SEQUENCE);
      HASH_RETURN(0x0174B285BF9FB914LL, k_IDNA_NO_ACE_PREFIX, IDNA_NO_ACE_PREFIX);
      break;
    case 2325:
      HASH_RETURN(0x2D84211FD73C7915LL, k_SEEK_SET, SEEK_SET);
      break;
    case 2326:
      HASH_RETURN(0x05F207C1FFDC0916LL, k_MCC_TCP_INACTIVITY_TMO_DEFAULT, MCC_TCP_INACTIVITY_TMO_DEFAULT);
      HASH_RETURN(0x388C3D22F9225916LL, k_MW_ResetMethod, MW_ResetMethod);
      break;
    case 2327:
      HASH_RETURN(0x29E763F1CCCCA917LL, k_CURLM_BAD_HANDLE, CURLM_BAD_HANDLE);
      HASH_RETURN(0x7D90050F0D6A5917LL, k_U_UNSUPPORTED_PROPERTY, U_UNSUPPORTED_PROPERTY);
      break;
    case 2335:
      HASH_RETURN(0x7E75714DA4B7F91FLL, k_OCI_DESCRIBE_ONLY, OCI_DESCRIBE_ONLY);
      break;
    case 2337:
      HASH_RETURN(0x66841F72C3513921LL, k_PATHINFO_BASENAME, PATHINFO_BASENAME);
      break;
    case 2339:
      HASH_RETURN(0x6F24996DA2E26923LL, k_LOG_ODELAY, LOG_ODELAY);
      break;
    case 2341:
      HASH_RETURN(0x68541380F4E53925LL, k_CURLE_COULDNT_RESOLVE_PROXY, CURLE_COULDNT_RESOLVE_PROXY);
      break;
    case 2344:
      HASH_RETURN(0x7A87A43C047C6928LL, k_CODESET, CODESET);
      break;
    case 2345:
      HASH_RETURN(0x26653F979C3D9929LL, k_CURLE_FTP_WEIRD_PASS_REPLY, CURLE_FTP_WEIRD_PASS_REPLY);
      break;
    case 2346:
      HASH_RETURN(0x285FD5301BE9792ALL, k_PHP_BINARY_READ, PHP_BINARY_READ);
      break;
    case 2348:
      HASH_RETURN(0x6CF2F9707E6BE92CLL, k_SOCKET_EBADR, SOCKET_EBADR);
      break;
    case 2350:
      HASH_RETURN(0x1BFDA67089F8A92ELL, k_MW_AddEvaluateOperator, MW_AddEvaluateOperator);
      HASH_RETURN(0x62D2366B6E78092ELL, k_U_REGEX_SET_CONTAINS_STRING, U_REGEX_SET_CONTAINS_STRING);
      break;
    case 2353:
      HASH_RETURN(0x472D172E9FD61931LL, k_CURLOPT_SSLENGINE, CURLOPT_SSLENGINE);
      HASH_RETURN(0x7756005C96A67931LL, k_U_MALFORMED_PRAGMA, U_MALFORMED_PRAGMA);
      break;
    case 2358:
      HASH_RETURN(0x3105C07A2DC1E936LL, k_LIBXML_NOERROR, LIBXML_NOERROR);
      HASH_RETURN(0x67FC6A5469828936LL, k_SO_ERROR, SO_ERROR);
      break;
    case 2360:
      HASH_RETURN(0x3FFF6279F204E938LL, k_SOAP_WAIT_ONE_WAY_CALLS, SOAP_WAIT_ONE_WAY_CALLS);
      break;
    case 2362:
      HASH_RETURN(0x0404A4649D9EC93ALL, k_IDNA_CONTAINS_NON_LDH, IDNA_CONTAINS_NON_LDH);
      break;
    case 2365:
      HASH_RETURN(0x40272409CA10393DLL, k_MCRYPT_ENIGNA, MCRYPT_ENIGNA);
      break;
    case 2367:
      HASH_RETURN(0x09EA912F5BFF493FLL, k_CURLCLOSEPOLICY_OLDEST, CURLCLOSEPOLICY_OLDEST);
      break;
    case 2371:
      HASH_RETURN(0x58EEBE21FA018943LL, k_ABDAY_2, ABDAY_2);
      break;
    case 2374:
      HASH_RETURN(0x0EC74FD23BF5F946LL, k_XSD_POSITIVEINTEGER, XSD_POSITIVEINTEGER);
      break;
    case 2375:
      HASH_RETURN(0x16DC2D0D5C490947LL, k_LOG_MAIL, LOG_MAIL);
      break;
    case 2383:
      HASH_RETURN(0x2CD008FE18C4F94FLL, k_MW_LeftAlign, MW_LeftAlign);
      break;
    case 2387:
      HASH_RETURN(0x7859C5EE9AD71953LL, k_IMAGETYPE_JPX, IMAGETYPE_JPX);
      HASH_RETURN(0x734EC3FA084E8953LL, k_MW_LABColorspace, MW_LABColorspace);
      break;
    case 2388:
      HASH_RETURN(0x02CF2AE2FD7E8954LL, k_CURLE_LDAP_SEARCH_FAILED, CURLE_LDAP_SEARCH_FAILED);
      break;
    case 2389:
      HASH_RETURN(0x33960F1673FEE955LL, k_U_MULTIPLE_COMPOUND_FILTERS, U_MULTIPLE_COMPOUND_FILTERS);
      break;
    case 2390:
      HASH_RETURN(0x5C955010382FB956LL, k_SOCKET_EL3RST, SOCKET_EL3RST);
      break;
    case 2393:
      HASH_RETURN(0x032787AF5C785959LL, k_PEAR_EXTENSION_DIR, PEAR_EXTENSION_DIR);
      break;
    case 2396:
      HASH_RETURN(0x16EB68A181FE395CLL, k_FILE_IGNORE_NEW_LINES, FILE_IGNORE_NEW_LINES);
      HASH_RETURN(0x735DAB190723D95CLL, k_CRYPT_EXT_DES, CRYPT_EXT_DES);
      break;
    case 2397:
      HASH_RETURN(0x098E806BB5F1095DLL, k_MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH, MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH);
      break;
    case 2400:
      HASH_RETURN(0x44D60610A7FD3960LL, k_SOCKET_EUNATCH, SOCKET_EUNATCH);
      break;
    case 2402:
      HASH_RETURN(0x13AC56A6C39A2962LL, k_FB_UNSERIALIZE_NONSTRING_VALUE, FB_UNSERIALIZE_NONSTRING_VALUE);
      HASH_RETURN(0x4DC3AFA568EB5962LL, k_MW_UndefinedChannel, MW_UndefinedChannel);
      break;
    case 2405:
      HASH_RETURN(0x03EFBFF5CA1E4965LL, k_E_ERROR, E_ERROR);
      break;
    case 2410:
      HASH_RETURN(0x09A70C497AC6D96ALL, k_CURLFTPSSL_NONE, CURLFTPSSL_NONE);
      HASH_RETURN(0x10CF3B121D72D96ALL, k_MW_RegistryError, MW_RegistryError);
      break;
    case 2412:
      HASH_RETURN(0x70B8FC059341196CLL, k_MW_UndefinedPathUnits, MW_UndefinedPathUnits);
      HASH_RETURN(0x30FF028F540E696CLL, k_MW_LZWCompression, MW_LZWCompression);
      break;
    case 2413:
      HASH_RETURN(0x039F36758709D96DLL, k_SOCKET_EHOSTUNREACH, SOCKET_EHOSTUNREACH);
      HASH_RETURN(0x7785CA5E2CE3196DLL, k_CURLOPT_SSLKEY, CURLOPT_SSLKEY);
      break;
    case 2416:
      HASH_RETURN(0x420AE31E6D527970LL, k_STREAM_CLIENT_ASYNC_CONNECT, STREAM_CLIENT_ASYNC_CONNECT);
      HASH_RETURN(0x28E040F9106FA970LL, k_CURLOPT_DNS_CACHE_TIMEOUT, CURLOPT_DNS_CACHE_TIMEOUT);
      break;
    case 2419:
      HASH_RETURN(0x4BCC0F7A51724973LL, k_UCOL_SHIFTED, UCOL_SHIFTED);
      HASH_RETURN(0x3CF067AC5B261973LL, k_SOCK_RDM, SOCK_RDM);
      break;
    case 2424:
      HASH_RETURN(0x3DBA922036C2D978LL, k_IMAGETYPE_JPC, IMAGETYPE_JPC);
      break;
    case 2425:
      HASH_RETURN(0x3F5848029B6E4979LL, k_MW_HermiteFilter, MW_HermiteFilter);
      break;
    case 2426:
      HASH_RETURN(0x4092130A2E6AA97ALL, k_PHP_URL_PATH, PHP_URL_PATH);
      break;
    case 2427:
      HASH_RETURN(0x357DB71C9E8E097BLL, k_IDNA_CONTAINS_ACE_PREFIX, IDNA_CONTAINS_ACE_PREFIX);
      break;
    case 2428:
      HASH_RETURN(0x674AA8DD33D1497CLL, k_LIBXML_ERR_FATAL, LIBXML_ERR_FATAL);
      break;
    case 2429:
      HASH_RETURN(0x358E5276A4AB697DLL, k_IMAGETYPE_GIF, IMAGETYPE_GIF);
      break;
    case 2431:
      HASH_RETURN(0x635C75864E19797FLL, k_PHP_URL_PASS, PHP_URL_PASS);
      break;
    case 2432:
      HASH_RETURN(0x390A369464AFC980LL, k_CURLOPT_FRESH_CONNECT, CURLOPT_FRESH_CONNECT);
      break;
    case 2433:
      HASH_RETURN(0x16D08C750D482981LL, k_CURLE_FUNCTION_NOT_FOUND, CURLE_FUNCTION_NOT_FOUND);
      break;
    case 2434:
      HASH_RETURN(0x3249C6BFF130C982LL, k_XML_DOCUMENT_NODE, XML_DOCUMENT_NODE);
      break;
    case 2437:
      HASH_RETURN(0x3A6B9561E565A985LL, k_CURLOPT_PUT, CURLOPT_PUT);
      HASH_RETURN(0x47D0A6FC1432A985LL, k_CURLE_FTP_CANT_RECONNECT, CURLE_FTP_CANT_RECONNECT);
      break;
    case 2440:
      HASH_RETURN(0x65E1A61DCE3D0988LL, k_DATE_RFC850, DATE_RFC850);
      break;
    case 2441:
      HASH_RETURN(0x0C37BD7326578989LL, k_SQLT_AVC, SQLT_AVC);
      break;
    case 2443:
      HASH_RETURN(0x63E5DC19318BA98BLL, k_LDAP_OPT_DEBUG_LEVEL, LDAP_OPT_DEBUG_LEVEL);
      break;
    case 2445:
      HASH_RETURN(0x01F3801999B5E98DLL, k_M_PI_4, M_PI_4);
      break;
    case 2446:
      HASH_RETURN(0x67D787896EA0D98ELL, k_D_T_FMT, D_T_FMT);
      break;
    case 2449:
      HASH_RETURN(0x41D25C4005361991LL, k_XSD_ID, XSD_ID);
      break;
    case 2450:
      HASH_RETURN(0x698FD54883B9D992LL, k_XSD_HEXBINARY, XSD_HEXBINARY);
      break;
    case 2454:
      HASH_RETURN(0x58A38776F9EE4996LL, k_ABMON_11, ABMON_11);
      HASH_RETURN(0x39FA3B4ACE936996LL, k_MCRYPT_MODE_OFB, MCRYPT_MODE_OFB);
      break;
    case 2458:
      HASH_RETURN(0x394F32AA0E8A699ALL, k_SQLT_RSET, SQLT_RSET);
      break;
    case 2460:
      HASH_RETURN(0x51DB69619928599CLL, k_MW_MissingDelegateFatalError, MW_MissingDelegateFatalError);
      HASH_RETURN(0x3FD9355EEBA9999CLL, k_MYSQLI_TYPE_DECIMAL, MYSQLI_TYPE_DECIMAL);
      break;
    case 2462:
      HASH_RETURN(0x16F09001DC71499ELL, k_XML_DOCUMENT_FRAG_NODE, XML_DOCUMENT_FRAG_NODE);
      HASH_RETURN(0x13EFDD816DC9799ELL, k_T_START_HEREDOC, T_START_HEREDOC);
      break;
    case 2464:
      HASH_RETURN(0x5B6DCCDE7AD699A0LL, k_XML_ENTITY_NODE, XML_ENTITY_NODE);
      HASH_RETURN(0x3ADC05D11911B9A0LL, k_DAY_2, DAY_2);
      HASH_RETURN(0x0F8F905AEFD7C9A0LL, k_MW_JPEGCompression, MW_JPEGCompression);
      break;
    case 2468:
      HASH_RETURN(0x668C95D9A5A149A4LL, k_DATE_RSS, DATE_RSS);
      break;
    case 2470:
      HASH_RETURN(0x6DC825C646F759A6LL, k_MCC_SERVER_DISABLED, MCC_SERVER_DISABLED);
      break;
    case 2471:
      HASH_RETURN(0x43F7EEC222C759A7LL, k_DAY_6, DAY_6);
      break;
    case 2473:
      HASH_RETURN(0x0AA6222BC82F99A9LL, k_MW_DstOverCompositeOp, MW_DstOverCompositeOp);
      break;
    case 2477:
      HASH_RETURN(0x10AFA81F159479ADLL, k_MW_RedChannel, MW_RedChannel);
      break;
    case 2481:
      HASH_RETURN(0x771F20A576A959B1LL, k_XSD_NORMALIZEDSTRING, XSD_NORMALIZEDSTRING);
      break;
    case 2489:
      HASH_RETURN(0x75B4EB59DA30A9B9LL, k_EXTR_REFS, EXTR_REFS);
      break;
    case 2491:
      HASH_RETURN(0x137D5434ACF3A9BBLL, k_MYSQL_CLIENT_INTERACTIVE, MYSQL_CLIENT_INTERACTIVE);
      break;
    case 2495:
      HASH_RETURN(0x54DD7D6B4CCA79BFLL, k_CURLE_GOT_NOTHING, CURLE_GOT_NOTHING);
      break;
    case 2496:
      HASH_RETURN(0x68E1B70D4F4979C0LL, k_SOCKET_EBADRQC, SOCKET_EBADRQC);
      break;
    case 2497:
      HASH_RETURN(0x321740CD419049C1LL, k_CURLOPT_RESUME_FROM, CURLOPT_RESUME_FROM);
      break;
    case 2498:
      HASH_RETURN(0x72282E1AF60499C2LL, k_T_EMPTY, T_EMPTY);
      break;
    case 2501:
      HASH_RETURN(0x24C5831E3221F9C5LL, k_CURLINFO_FILETIME, CURLINFO_FILETIME);
      break;
    case 2504:
      HASH_RETURN(0x4BA110F9307FE9C8LL, k_CURLFTPSSL_ALL, CURLFTPSSL_ALL);
      break;
    case 2506:
      HASH_RETURN(0x3BE4F907456969CALL, k_STREAM_IGNORE_URL, STREAM_IGNORE_URL);
      break;
    case 2509:
      HASH_RETURN(0x29F4CBFAEAB389CDLL, k_MW_WandWarning, MW_WandWarning);
      break;
    case 2512:
      HASH_RETURN(0x0BD951C18B00C9D0LL, k_SO_TYPE, SO_TYPE);
      break;
    case 2514:
      HASH_RETURN(0x7A3C6246DF1CD9D2LL, k_LDAP_OPT_HOST_NAME, LDAP_OPT_HOST_NAME);
      break;
    case 2515:
      HASH_RETURN(0x515A6F1E2D2B59D3LL, k_SOCKET_EMEDIUMTYPE, SOCKET_EMEDIUMTYPE);
      HASH_RETURN(0x6F2A0EAF454939D3LL, k_CURLINFO_HTTP_CODE, CURLINFO_HTTP_CODE);
      break;
    case 2516:
      HASH_RETURN(0x0151536238DE89D4LL, k_MW_DarkenCompositeOp, MW_DarkenCompositeOp);
      break;
    case 2518:
      HASH_RETURN(0x17578C814623D9D6LL, k_CURLOPT_RANDOM_FILE, CURLOPT_RANDOM_FILE);
      break;
    case 2520:
      HASH_RETURN(0x4335FA5B685E49D8LL, k_MW_HSBColorspace, MW_HSBColorspace);
      break;
    case 2521:
      HASH_RETURN(0x772BFBE3468769D9LL, k_LIBXML_DTDLOAD, LIBXML_DTDLOAD);
      break;
    case 2523:
      HASH_RETURN(0x4D22AD59AC4179DBLL, k_XML_ATTRIBUTE_DECL_NODE, XML_ATTRIBUTE_DECL_NODE);
      break;
    case 2528:
      HASH_RETURN(0x3FCB6550F40539E0LL, k_CRYPT_SALT_LENGTH, CRYPT_SALT_LENGTH);
      break;
    case 2529:
      HASH_RETURN(0x2B169E2A6F8DD9E1LL, k_MW_NorthGravity, MW_NorthGravity);
      break;
    case 2530:
      HASH_RETURN(0x50C098E26C5509E2LL, k_MON_1, MON_1);
      HASH_RETURN(0x0690C7C0646B29E2LL, k_MW_AnyStretch, MW_AnyStretch);
      break;
    case 2531:
      HASH_RETURN(0x4B1D2BB8295279E3LL, k_T_ISSET, T_ISSET);
      break;
    case 2534:
      HASH_RETURN(0x13EE8285564269E6LL, k_FB_UNSERIALIZE_UNEXPECTED_END, FB_UNSERIALIZE_UNEXPECTED_END);
      break;
    case 2537:
      HASH_RETURN(0x2497AFE6CF32A9E9LL, k_STREAM_IPPROTO_TCP, STREAM_IPPROTO_TCP);
      break;
    case 2538:
      HASH_RETURN(0x0EF43AFB0857C9EALL, k_MCC_ARG_SERVER_RETRY_TMO_MS, MCC_ARG_SERVER_RETRY_TMO_MS);
      break;
    case 2541:
      HASH_RETURN(0x44E399DE55AFB9EDLL, k_MCC_CONSISTENCY_MATCH_HITS_SUPERCEDES, MCC_CONSISTENCY_MATCH_HITS_SUPERCEDES);
      break;
    case 2544:
      HASH_RETURN(0x547BA6FCF3B989F0LL, k_PSFS_FLAG_NORMAL, PSFS_FLAG_NORMAL);
      break;
    case 2545:
      HASH_RETURN(0x69CE45F5299759F1LL, k_LOCK_EX, LOCK_EX);
      break;
    case 2546:
      HASH_RETURN(0x475ED755F1D3E9F2LL, k_MW_GaussianNoise, MW_GaussianNoise);
      break;
    case 2547:
      HASH_RETURN(0x4C06BBFB5FBBA9F3LL, k_E_USER_WARNING, E_USER_WARNING);
      HASH_RETURN(0x1244E23654E739F3LL, k_STR_PAD_BOTH, STR_PAD_BOTH);
      break;
    case 2548:
      HASH_RETURN(0x7AD9F8D598C349F4LL, k_CURLINFO_REQUEST_SIZE, CURLINFO_REQUEST_SIZE);
      break;
    case 2549:
      HASH_RETURN(0x3210F73E8C4749F5LL, k_MYSQLI_UNSIGNED_FLAG, MYSQLI_UNSIGNED_FLAG);
      break;
    case 2551:
      HASH_RETURN(0x33004E7E1FE1A9F7LL, k_LIBXML_DTDATTR, LIBXML_DTDATTR);
      break;
    case 2554:
      HASH_RETURN(0x05BD4F202B0EB9FALL, k_MCC_ARG_PROXY_OPS, MCC_ARG_PROXY_OPS);
      break;
    case 2555:
      HASH_RETURN(0x529AC6470D4589FBLL, k_MW_ImplodePreview, MW_ImplodePreview);
      break;
    case 2556:
      HASH_RETURN(0x4FE44D1D755059FCLL, k_MW_AddCompositeOp, MW_AddCompositeOp);
      break;
    case 2557:
      HASH_RETURN(0x14598BDC3230B9FDLL, k_STREAM_FILTER_ALL, STREAM_FILTER_ALL);
      break;
    case 2559:
      HASH_RETURN(0x59DFA8E4508559FFLL, k_T_GLOBAL, T_GLOBAL);
      break;
    case 2560:
      HASH_RETURN(0x1EC891568EDFFA00LL, k_SOAP_COMPRESSION_DEFLATE, SOAP_COMPRESSION_DEFLATE);
      break;
    case 2561:
      HASH_RETURN(0x25BFE6991D197A01LL, k_T_INCLUDE_ONCE, T_INCLUDE_ONCE);
      break;
    case 2566:
      HASH_RETURN(0x498817332D8FDA06LL, k_XML_ERROR_NO_MEMORY, XML_ERROR_NO_MEMORY);
      break;
    case 2568:
      HASH_RETURN(0x42DF97153C668A08LL, k_U_REGEX_INTERNAL_ERROR, U_REGEX_INTERNAL_ERROR);
      break;
    case 2579:
      HASH_RETURN(0x49FE8A438B3AEA13LL, k_SOCKET_ENOCSI, SOCKET_ENOCSI);
      break;
    case 2589:
      HASH_RETURN(0x7031551D1992DA1DLL, k_T_AND_EQUAL, T_AND_EQUAL);
      break;
    case 2593:
      HASH_RETURN(0x1844B2396F4B5A21LL, k_UCOL_CASE_FIRST, UCOL_CASE_FIRST);
      HASH_RETURN(0x078FA8B3130A3A21LL, k_MYSQLI_NUM_FLAG, MYSQLI_NUM_FLAG);
      break;
    case 2594:
      HASH_RETURN(0x16B09F6F7844CA22LL, k_T_DECLARE, T_DECLARE);
      break;
    case 2596:
      HASH_RETURN(0x33F71F2542A1AA24LL, k_MW_MagentaChannel, MW_MagentaChannel);
      break;
    case 2597:
      HASH_RETURN(0x37F650C462FB6A25LL, k_CASE_UPPER, CASE_UPPER);
      HASH_RETURN(0x5867D2BA10A35A25LL, k_CURLE_FTP_WEIRD_PASV_REPLY, CURLE_FTP_WEIRD_PASV_REPLY);
      break;
    case 2598:
      HASH_RETURN(0x17F6AA0F5B016A26LL, k_CURLE_FTP_CANT_GET_HOST, CURLE_FTP_CANT_GET_HOST);
      HASH_RETURN(0x54C496DB399F5A26LL, k_MW_FileOpenFatalError, MW_FileOpenFatalError);
      break;
    case 2600:
      HASH_RETURN(0x08752B0B4C8BDA28LL, k_MW_SetEvaluateOperator, MW_SetEvaluateOperator);
      break;
    case 2602:
      HASH_RETURN(0x28B1D7177D375A2ALL, k_T_REQUIRE_ONCE, T_REQUIRE_ONCE);
      break;
    case 2610:
      HASH_RETURN(0x17EB7B36C3461A32LL, k_DEBUG_LOG_COOKIE, DEBUG_LOG_COOKIE);
      HASH_RETURN(0x0BC3EDF749800A32LL, k_U_INTERNAL_TRANSLITERATOR_ERROR, U_INTERNAL_TRANSLITERATOR_ERROR);
      break;
    case 2613:
      HASH_RETURN(0x3FD744C685CF2A35LL, k_CLOCK_THREAD_CPUTIME_ID, CLOCK_THREAD_CPUTIME_ID);
      break;
    case 2614:
      HASH_RETURN(0x573042051A86AA36LL, k_STREAM_IPPROTO_ICMP, STREAM_IPPROTO_ICMP);
      break;
    case 2624:
      HASH_RETURN(0x17ABFE6A89CFAA40LL, k_MW_HWBColorspace, MW_HWBColorspace);
      break;
    case 2626:
      HASH_RETURN(0x4136719D47DECA42LL, k_M_SQRT1_2, M_SQRT1_2);
      break;
    case 2630:
      HASH_RETURN(0x023D40E0CE37CA46LL, k_CURLAUTH_ANY, CURLAUTH_ANY);
      HASH_RETURN(0x194D91E998A0BA46LL, k_DEBUG_LOG_URL, DEBUG_LOG_URL);
      break;
    case 2631:
      HASH_RETURN(0x5881C762E9C94A47LL, k_E_ALL, E_ALL);
      HASH_RETURN(0x6AC5604FD3BB4A47LL, k_CURLOPT_TCP_NODELAY, CURLOPT_TCP_NODELAY);
      break;
    case 2635:
      HASH_RETURN(0x61EB0F8F2CF2BA4BLL, k_FILE_SKIP_EMPTY_LINES, FILE_SKIP_EMPTY_LINES);
      HASH_RETURN(0x10D2E7F92C0E2A4BLL, k_FNM_PERIOD, FNM_PERIOD);
      HASH_RETURN(0x7D28B0E058FE9A4BLL, k_IMG_FILTER_EDGEDETECT, IMG_FILTER_EDGEDETECT);
      break;
    case 2636:
      HASH_RETURN(0x489472AD364E8A4CLL, k_MON_12, MON_12);
      break;
    case 2639:
      HASH_RETURN(0x7916DFA41D331A4FLL, k_T_CONCAT_EQUAL, T_CONCAT_EQUAL);
      break;
    case 2641:
      HASH_RETURN(0x077795A7F9ADAA51LL, k_IMAGETYPE_JPEG2000, IMAGETYPE_JPEG2000);
      break;
    case 2643:
      HASH_RETURN(0x5F65CE21F6EC4A53LL, k_CURL_NETRC_REQUIRED, CURL_NETRC_REQUIRED);
      break;
    case 2644:
      HASH_RETURN(0x0EBD392ECED8EA54LL, k_XSD_TIME, XSD_TIME);
      break;
    case 2645:
      HASH_RETURN(0x73CF2C0E7545EA55LL, k_CURLE_SEND_ERROR, CURLE_SEND_ERROR);
      break;
    case 2647:
      HASH_RETURN(0x2B480ABF652F0A57LL, k_MCRYPT_MODE_CFB, MCRYPT_MODE_CFB);
      HASH_RETURN(0x5505631AAA52EA57LL, k_PNG_FILTER_PAETH, PNG_FILTER_PAETH);
      break;
    case 2648:
      HASH_RETURN(0x685DA73E469A4A58LL, k_CURLOPT_POSTFIELDS, CURLOPT_POSTFIELDS);
      break;
    case 2649:
      HASH_RETURN(0x6DF3CC2C173F9A59LL, k_CURLCLOSEPOLICY_LEAST_RECENTLY_USED, CURLCLOSEPOLICY_LEAST_RECENTLY_USED);
      break;
    case 2650:
      HASH_RETURN(0x758D2FB74B095A5ALL, k_E_NOTICE, E_NOTICE);
      break;
    case 2656:
      HASH_RETURN(0x5CFB79F502A1DA60LL, k_STREAM_FILTER_WRITE, STREAM_FILTER_WRITE);
      break;
    case 2657:
      HASH_RETURN(0x2A494FBEFC63FA61LL, k_MW_CopyOpacityCompositeOp, MW_CopyOpacityCompositeOp);
      HASH_RETURN(0x5B2AB29E90099A61LL, k_MW_PartitionInterlace, MW_PartitionInterlace);
      break;
    case 2660:
      HASH_RETURN(0x38D027CA435ADA64LL, k_CURLOPT_FAILONERROR, CURLOPT_FAILONERROR);
      HASH_RETURN(0x04D429D84E820A64LL, k_MW_SaturateCompositeOp, MW_SaturateCompositeOp);
      break;
    case 2666:
      HASH_RETURN(0x3D933CE31E2DCA6ALL, k_E_USER_NOTICE, E_USER_NOTICE);
      break;
    case 2667:
      HASH_RETURN(0x36C5B40B7508CA6BLL, k_U_BRK_ERROR_LIMIT, U_BRK_ERROR_LIMIT);
      break;
    case 2668:
      HASH_RETURN(0x58F580070B123A6CLL, k_U_REGEX_INVALID_STATE, U_REGEX_INVALID_STATE);
      break;
    case 2669:
      HASH_RETURN(0x657A6417A5002A6DLL, k_CURLINFO_CONTENT_LENGTH_UPLOAD, CURLINFO_CONTENT_LENGTH_UPLOAD);
      break;
    case 2670:
      HASH_RETURN(0x4394E36C5CE89A6ELL, k_SOCKET_EXFULL, SOCKET_EXFULL);
      break;
    case 2672:
      HASH_RETURN(0x151C8E5474C7EA70LL, k_SO_SNDLOWAT, SO_SNDLOWAT);
      break;
    case 2678:
      HASH_RETURN(0x0B9707ADC9A33A76LL, k_D_FMT, D_FMT);
      break;
    case 2679:
      HASH_RETURN(0x65F32B0265C17A77LL, k_MCC_CONSISTENCY_MATCH_ALL, MCC_CONSISTENCY_MATCH_ALL);
      HASH_RETURN(0x57B997B628A78A77LL, k_ENT_QUOTES, ENT_QUOTES);
      break;
    case 2684:
      HASH_RETURN(0x586FAD022BC7EA7CLL, k_MW_OHTAColorspace, MW_OHTAColorspace);
      break;
    case 2685:
      HASH_RETURN(0x5789DA2495F3DA7DLL, k_XML_ERROR_UNCLOSED_TOKEN, XML_ERROR_UNCLOSED_TOKEN);
      HASH_RETURN(0x0A0A2A95E703CA7DLL, k_MW_DoublePixel, MW_DoublePixel);
      HASH_RETURN(0x5DBA78A0C47AFA7DLL, k_MYSQLI_CLIENT_IGNORE_SPACE, MYSQLI_CLIENT_IGNORE_SPACE);
      break;
    case 2689:
      HASH_RETURN(0x591B84D535EE0A81LL, k_LDAP_OPT_PROTOCOL_VERSION, LDAP_OPT_PROTOCOL_VERSION);
      break;
    case 2690:
      HASH_RETURN(0x645290ED74C16A82LL, k_OCI_NUM, OCI_NUM);
      break;
    case 2694:
      HASH_RETURN(0x27719595A3884A86LL, k_XML_CDATA_SECTION_NODE, XML_CDATA_SECTION_NODE);
      HASH_RETURN(0x533FAB9E3D858A86LL, k_T_LNUMBER, T_LNUMBER);
      break;
    case 2697:
      HASH_RETURN(0x00D18FD3D62C4A89LL, k_PHP_NORMAL_READ, PHP_NORMAL_READ);
      break;
    case 2698:
      HASH_RETURN(0x01481CE9C0003A8ALL, k_M_PI, M_PI);
      break;
    case 2700:
      HASH_RETURN(0x737B5DC9691FDA8CLL, k_ABDAY_4, ABDAY_4);
      break;
    case 2701:
      HASH_RETURN(0x1526953193697A8DLL, k_MW_DissolveCompositeOp, MW_DissolveCompositeOp);
      break;
    case 2703:
      HASH_RETURN(0x064FFC26A1BEDA8FLL, k_MCC_ACCESSPOINT_DOWN, MCC_ACCESSPOINT_DOWN);
      HASH_RETURN(0x3159B21008945A8FLL, k_SIGXCPU, SIGXCPU);
      break;
    case 2704:
      HASH_RETURN(0x493B826AE747AA90LL, k_MW_ExtraCondensedStretch, MW_ExtraCondensedStretch);
      break;
    case 2708:
      HASH_RETURN(0x3D59A12AE8830A94LL, k_DAY_7, DAY_7);
      break;
    case 2713:
      HASH_RETURN(0x110D06664602AA99LL, k_T_HALT_COMPILER, T_HALT_COMPILER);
      break;
    case 2715:
      HASH_RETURN(0x3FC849E49A880A9BLL, k_CURLINFO_SIZE_UPLOAD, CURLINFO_SIZE_UPLOAD);
      break;
    case 2716:
      HASH_RETURN(0x763DAA7C42CFFA9CLL, k_CURLOPT_HEADER, CURLOPT_HEADER);
      break;
    case 2717:
      HASH_RETURN(0x31D2BDC616571A9DLL, k_LOG_ALERT, LOG_ALERT);
      break;
    case 2718:
      HASH_RETURN(0x36199492D2ADDA9ELL, k_E_COMPILE_WARNING, E_COMPILE_WARNING);
      break;
    case 2721:
      HASH_RETURN(0x570EC613A0EB4AA1LL, k_MW_UserSpaceOnUse, MW_UserSpaceOnUse);
      HASH_RETURN(0x1300EC79A289FAA1LL, k_MYSQLI_NUM, MYSQLI_NUM);
      break;
    case 2722:
      HASH_RETURN(0x7B548C7058D44AA2LL, k_CURLE_LDAP_CANNOT_BIND, CURLE_LDAP_CANNOT_BIND);
      HASH_RETURN(0x3B8E3A3EC15C6AA2LL, k_T_SR_EQUAL, T_SR_EQUAL);
      break;
    case 2724:
      HASH_RETURN(0x5FBA32870DE6EAA4LL, k_MCC_ARG_DGRAM_TMO_THRESHOLD, MCC_ARG_DGRAM_TMO_THRESHOLD);
      break;
    case 2727:
      HASH_RETURN(0x4A454B32C8DAAAA7LL, k_MW_RaisePreview, MW_RaisePreview);
      break;
    case 2728:
      HASH_RETURN(0x0734D69114274AA8LL, k_MW_MemoryResource, MW_MemoryResource);
      HASH_RETURN(0x59638E3CD5839AA8LL, k_U_BRK_UNDEFINED_VARIABLE, U_BRK_UNDEFINED_VARIABLE);
      break;
    case 2738:
      HASH_RETURN(0x5786857F38F31AB2LL, k_MW_GaussianFilter, MW_GaussianFilter);
      break;
    case 2739:
      HASH_RETURN(0x06DABFEE92981AB3LL, k_T_STRING_VARNAME, T_STRING_VARNAME);
      break;
    case 2742:
      HASH_RETURN(0x243D46B22559CAB6LL, k_T_UNSET_CAST, T_UNSET_CAST);
      break;
    case 2746:
      HASH_RETURN(0x5CD5B603D9E47ABALL, k_T_XOR_EQUAL, T_XOR_EQUAL);
      break;
    case 2750:
      HASH_RETURN(0x250B73392D416ABELL, k_SIGBUS, SIGBUS);
      break;
    case 2752:
      HASH_RETURN(0x4024FAF61052EAC0LL, k_SOCKET_ENAMETOOLONG, SOCKET_ENAMETOOLONG);
      break;
    case 2756:
      HASH_RETURN(0x53D181033B1DEAC4LL, k_OCI_FETCHSTATEMENT_BY_ROW, OCI_FETCHSTATEMENT_BY_ROW);
      break;
    case 2758:
      HASH_RETURN(0x227C4DCCA5F7DAC6LL, k_MCC_PROXY_DELETE_OP, MCC_PROXY_DELETE_OP);
      break;
    case 2759:
      HASH_RETURN(0x39C257B01459AAC7LL, k_MW_UndefinedPreview, MW_UndefinedPreview);
      break;
    case 2760:
      HASH_RETURN(0x3BE2E003D0286AC8LL, k_T_STRING, T_STRING);
      break;
    case 2762:
      HASH_RETURN(0x2261E9F887001ACALL, k_XML_OPTION_SKIP_WHITE, XML_OPTION_SKIP_WHITE);
      break;
    case 2764:
      HASH_RETURN(0x65E829458F1ABACCLL, k_CURLINFO_HEADER_SIZE, CURLINFO_HEADER_SIZE);
      break;
    case 2767:
      HASH_RETURN(0x0ABBF2E321C47ACFLL, k_XSD_LONG, XSD_LONG);
      HASH_RETURN(0x51D3603A88FE4ACFLL, k_T_FINAL, T_FINAL);
      break;
    case 2768:
      HASH_RETURN(0x3C891E4E5FACCAD0LL, k_CURLE_COULDNT_CONNECT, CURLE_COULDNT_CONNECT);
      break;
    case 2770:
      HASH_RETURN(0x42CAB1030D846AD2LL, k_CURL_VERSION_KERBEROS4, CURL_VERSION_KERBEROS4);
      break;
    case 2772:
      HASH_RETURN(0x5FAC392492F68AD4LL, k_OCI_B_CLOB, OCI_B_CLOB);
      break;
    case 2773:
      HASH_RETURN(0x669D8411D2916AD5LL, k_MW_CyanChannel, MW_CyanChannel);
      break;
    case 2775:
      HASH_RETURN(0x48978BD57A748AD7LL, k_MW_SemiExpandedStretch, MW_SemiExpandedStretch);
      break;
    case 2776:
      HASH_RETURN(0x16B030F977458AD8LL, k_MYSQLI_OPT_CONNECT_TIMEOUT, MYSQLI_OPT_CONNECT_TIMEOUT);
      break;
    case 2777:
      HASH_RETURN(0x2F04677BF407BAD9LL, k_MW_SouthWestGravity, MW_SouthWestGravity);
      break;
    case 2778:
      HASH_RETURN(0x395E5D035821FADALL, k_PATHINFO_EXTENSION, PATHINFO_EXTENSION);
      break;
    case 2780:
      HASH_RETURN(0x1612DDFB06F3DADCLL, k_MW_ResourceLimitFatalError, MW_ResourceLimitFatalError);
      break;
    case 2783:
      HASH_RETURN(0x21CF90B2DC2A8ADFLL, k_SIGBABY, SIGBABY);
      break;
    case 2786:
      HASH_RETURN(0x213E21AC19463AE2LL, k_MYSQLI_CLIENT_SSL, MYSQLI_CLIENT_SSL);
      break;
    case 2789:
      HASH_RETURN(0x747D52041C337AE5LL, k_CURLE_HTTP_NOT_FOUND, CURLE_HTTP_NOT_FOUND);
      break;
    case 2790:
      HASH_RETURN(0x7017D75A4FB1DAE6LL, k_CHAR_MAX, CHAR_MAX);
      HASH_RETURN(0x2CB22777D6F90AE6LL, k_IMG_FILTER_GAUSSIAN_BLUR, IMG_FILTER_GAUSSIAN_BLUR);
      break;
    case 2794:
      HASH_RETURN(0x3E4E56381DD9CAEALL, k_PHP_SYSCONFDIR, PHP_SYSCONFDIR);
      HASH_RETURN(0x30CA3CAADE790AEALL, k_SOCKET_EL3HLT, SOCKET_EL3HLT);
      break;
    case 2797:
      HASH_RETURN(0x0817F86FE6040AEDLL, k_CURLOPT_UPLOAD, CURLOPT_UPLOAD);
      break;
    case 2798:
      HASH_RETURN(0x29CBD31CB5304AEELL, k_SOCKET_EINTR, SOCKET_EINTR);
      break;
    case 2801:
      HASH_RETURN(0x3FF3A6F69EFC5AF1LL, k_PREG_SPLIT_DELIM_CAPTURE, PREG_SPLIT_DELIM_CAPTURE);
      break;
    case 2804:
      HASH_RETURN(0x59BEA11F758FBAF4LL, k_UPLOAD_ERR_CANT_WRITE, UPLOAD_ERR_CANT_WRITE);
      break;
    case 2805:
      HASH_RETURN(0x7D611D4AD51BEAF5LL, k_T_SL, T_SL);
      break;
    case 2806:
      HASH_RETURN(0x3C7D2C061C055AF6LL, k_CURLOPT_CUSTOMREQUEST, CURLOPT_CUSTOMREQUEST);
      break;
    case 2809:
      HASH_RETURN(0x432BB874244C0AF9LL, k_U_MISPLACED_QUANTIFIER, U_MISPLACED_QUANTIFIER);
      HASH_RETURN(0x43D7CE6B2F128AF9LL, k_T_FOREACH, T_FOREACH);
      break;
    case 2810:
      HASH_RETURN(0x090E65DB410A2AFALL, k_ABDAY_6, ABDAY_6);
      break;
    case 2812:
      HASH_RETURN(0x7C0F0F955FB24AFCLL, k_MYSQLI_RPL_MASTER, MYSQLI_RPL_MASTER);
      break;
    case 2814:
      HASH_RETURN(0x3B3164D5F14B0AFELL, k_MW_PoissonNoise, MW_PoissonNoise);
      break;
    case 2816:
      HASH_RETURN(0x03F80B8F11796B00LL, k_MW_UndefinedJoin, MW_UndefinedJoin);
      break;
    case 2819:
      HASH_RETURN(0x6B814172ADF42B03LL, k_STREAM_SOCK_STREAM, STREAM_SOCK_STREAM);
      HASH_RETURN(0x485C9CE21EF4AB03LL, k_OPENSSL_CIPHER_RC2_128, OPENSSL_CIPHER_RC2_128);
      HASH_RETURN(0x2F261F526F0E8B03LL, k_MW_CoderWarning, MW_CoderWarning);
      break;
    case 2821:
      HASH_RETURN(0x2223E4DE90FDFB05LL, k_OPENSSL_PKCS1_PADDING, OPENSSL_PKCS1_PADDING);
      HASH_RETURN(0x0F1752A0A272BB05LL, k_MW_UndefinedNoise, MW_UndefinedNoise);
      break;
    case 2822:
      HASH_RETURN(0x68883FEECE26DB06LL, k_CURLINFO_SIZE_DOWNLOAD, CURLINFO_SIZE_DOWNLOAD);
      break;
    case 2823:
      HASH_RETURN(0x5CE43D1FBD7DBB07LL, k_IMAGETYPE_WBMP, IMAGETYPE_WBMP);
      break;
    case 2827:
      HASH_RETURN(0x4F66555E08C46B0BLL, k_XML_ERROR_INVALID_TOKEN, XML_ERROR_INVALID_TOKEN);
      break;
    case 2828:
      HASH_RETURN(0x23C8582A7C489B0CLL, k_IMG_COLOR_STYLED, IMG_COLOR_STYLED);
      break;
    case 2830:
      HASH_RETURN(0x2346CE3E090F0B0ELL, k_SOCKET_EADDRINUSE, SOCKET_EADDRINUSE);
      break;
    case 2833:
      HASH_RETURN(0x12B1EE7C2A7A7B11LL, k_PREG_BAD_UTF8_ERROR, PREG_BAD_UTF8_ERROR);
      break;
    case 2834:
      HASH_RETURN(0x21D14DFB8AC3FB12LL, k_XSD_NMTOKENS, XSD_NMTOKENS);
      break;
    case 2835:
      HASH_RETURN(0x12BABEDC55D34B13LL, k_MW_SrcAtopCompositeOp, MW_SrcAtopCompositeOp);
      break;
    case 2837:
      HASH_RETURN(0x0FF2E4D94DB80B15LL, k_CURLOPT_NOSIGNAL, CURLOPT_NOSIGNAL);
      break;
    case 2839:
      HASH_RETURN(0x05A94136259A5B17LL, k_SOCK_SEQPACKET, SOCK_SEQPACKET);
      break;
    case 2840:
      HASH_RETURN(0x15335D4DFCE06B18LL, k_PHP_VERSION, PHP_VERSION);
      break;
    case 2843:
      HASH_RETURN(0x5A9BD51BEB73EB1BLL, k_LOG_LOCAL1, LOG_LOCAL1);
      break;
    case 2844:
      HASH_RETURN(0x4FC95AF0868FAB1CLL, k_MW_TypeWarning, MW_TypeWarning);
      break;
    case 2847:
      HASH_RETURN(0x01AA3EB3A6599B1FLL, k_CREDITS_DOCS, CREDITS_DOCS);
      break;
    case 2850:
      HASH_RETURN(0x01C136E7190A9B22LL, k_CURLOPT_BUFFERSIZE, CURLOPT_BUFFERSIZE);
      break;
    case 2851:
      HASH_RETURN(0x2CC2D4E376F8CB23LL, k_U_UNSUPPORTED_ESCAPE_SEQUENCE, U_UNSUPPORTED_ESCAPE_SEQUENCE);
      HASH_RETURN(0x3581628C21904B23LL, k_MYSQLI_READ_DEFAULT_GROUP, MYSQLI_READ_DEFAULT_GROUP);
      break;
    case 2855:
      HASH_RETURN(0x5E4EA34FE1613B27LL, k_SIGSTKFLT, SIGSTKFLT);
      break;
    case 2856:
      HASH_RETURN(0x1E2930F6B647AB28LL, k_CURLE_LIBRARY_NOT_FOUND, CURLE_LIBRARY_NOT_FOUND);
      HASH_RETURN(0x5E09BC123B163B28LL, k_CURLOPT_FTPSSLAUTH, CURLOPT_FTPSSLAUTH);
      break;
    case 2857:
      HASH_RETURN(0x19ACF9E8988C8B29LL, k_U_UNCLOSED_SEGMENT, U_UNCLOSED_SEGMENT);
      break;
    case 2859:
      HASH_RETURN(0x70501BEABC2A3B2BLL, k_DNS_ALL, DNS_ALL);
      HASH_RETURN(0x22194156EDF82B2BLL, k_MW_CopyRedCompositeOp, MW_CopyRedCompositeOp);
      break;
    case 2861:
      HASH_RETURN(0x76E82B282E60EB2DLL, k_MYSQLI_ASSOC, MYSQLI_ASSOC);
      break;
    case 2862:
      HASH_RETURN(0x048479303F6C5B2ELL, k_CURLE_SHARE_IN_USE, CURLE_SHARE_IN_USE);
      break;
    case 2864:
      HASH_RETURN(0x2F0D602554D3EB30LL, k_HTML_ENTITIES, HTML_ENTITIES);
      break;
    case 2869:
      HASH_RETURN(0x3E26A2DFC61CAB35LL, k_SIGUSR1, SIGUSR1);
      break;
    case 2873:
      HASH_RETURN(0x6609AB522524BB39LL, k_SIG_IGN, SIG_IGN);
      break;
    case 2878:
      HASH_RETURN(0x71E04E7A276B4B3ELL, k_MW_UndefinedDispose, MW_UndefinedDispose);
      break;
    case 2886:
      HASH_RETURN(0x22A6C64B7E48BB46LL, k_GLOB_ERR, GLOB_ERR);
      HASH_RETURN(0x66F89A9794F8FB46LL, k_XSD_GYEARMONTH, XSD_GYEARMONTH);
      break;
    case 2887:
      HASH_RETURN(0x51E3840B085F8B47LL, k_CONNECTION_NORMAL, CONNECTION_NORMAL);
      break;
    case 2888:
      HASH_RETURN(0x33F5C95FD6B78B48LL, k_ASSERT_WARNING, ASSERT_WARNING);
      HASH_RETURN(0x2D08DF3E17596B48LL, k_U_MISSING_RESOURCE_ERROR, U_MISSING_RESOURCE_ERROR);
      break;
    case 2889:
      HASH_RETURN(0x3CDFE3901E48FB49LL, k_SORT_ASC, SORT_ASC);
      break;
    case 2892:
      HASH_RETURN(0x3568BED9CAECEB4CLL, k_SO_RCVTIMEO, SO_RCVTIMEO);
      break;
    case 2893:
      HASH_RETURN(0x0BCD197CA5A36B4DLL, k_MCC_UDP_REPLY_PORTS, MCC_UDP_REPLY_PORTS);
      break;
    case 2895:
      HASH_RETURN(0x3963DD3F576AFB4FLL, k_MW_YUVColorspace, MW_YUVColorspace);
      break;
    case 2899:
      HASH_RETURN(0x65E9A299C170CB53LL, k_SOAP_FUNCTIONS_ALL, SOAP_FUNCTIONS_ALL);
      break;
    case 2913:
      HASH_RETURN(0x1DAAE34E32386B61LL, k_MYSQLI_TYPE_LONG_BLOB, MYSQLI_TYPE_LONG_BLOB);
      break;
    case 2914:
      HASH_RETURN(0x24939CEFE32D9B62LL, k_T_DEC, T_DEC);
      HASH_RETURN(0x523F7536F6CA2B62LL, k_MYSQLI_REPORT_INDEX, MYSQLI_REPORT_INDEX);
      break;
    case 2920:
      HASH_RETURN(0x58DA784376103B68LL, k_MCC_IPPROTO_UDP, MCC_IPPROTO_UDP);
      HASH_RETURN(0x627C8E2B6A50BB68LL, k_CURLOPT_AUTOREFERER, CURLOPT_AUTOREFERER);
      break;
    case 2922:
      HASH_RETURN(0x08F569F34AE1EB6ALL, k_MW_NoneDispose, MW_NoneDispose);
      HASH_RETURN(0x13B4E02756307B6ALL, k_INTL_MAX_LOCALE_LEN, INTL_MAX_LOCALE_LEN);
      HASH_RETURN(0x7B91AB2B39EBDB6ALL, k_IDNA_ROUNDTRIP_VERIFY_ERROR, IDNA_ROUNDTRIP_VERIFY_ERROR);
      break;
    case 2924:
      HASH_RETURN(0x064CC9EE44F30B6CLL, k_CURLOPT_NOPROGRESS, CURLOPT_NOPROGRESS);
      break;
    case 2928:
      HASH_RETURN(0x7A9550961ACB1B70LL, k_MW_RGBColorspace, MW_RGBColorspace);
      break;
    case 2930:
      HASH_RETURN(0x3CB308D00BF9FB72LL, k_FILE_NO_DEFAULT_CONTEXT, FILE_NO_DEFAULT_CONTEXT);
      break;
    case 2931:
      HASH_RETURN(0x6023830227F5DB73LL, k_SOCKET_ENOPROTOOPT, SOCKET_ENOPROTOOPT);
      HASH_RETURN(0x0E15F670C5A2FB73LL, k_CURL_HTTP_VERSION_NONE, CURL_HTTP_VERSION_NONE);
      break;
    case 2934:
      HASH_RETURN(0x491B077D1071CB76LL, k_DOM_NAMESPACE_ERR, DOM_NAMESPACE_ERR);
      HASH_RETURN(0x605BC5C3D5ADBB76LL, k_STREAM_SOCK_RDM, STREAM_SOCK_RDM);
      HASH_RETURN(0x2473D2AA56054B76LL, k_MW_DiskResource, MW_DiskResource);
      HASH_RETURN(0x522026106E095B76LL, k_POSIX_S_IFSOCK, POSIX_S_IFSOCK);
      break;
    case 2936:
      HASH_RETURN(0x7FAFCF53408B9B78LL, k_SOCKET_EALREADY, SOCKET_EALREADY);
      break;
    case 2938:
      HASH_RETURN(0x5087417BEA969B7ALL, k_PHP_EOL, PHP_EOL);
      break;
    case 2943:
      HASH_RETURN(0x5D2BFD8D2FECDB7FLL, k_U_REGEX_RULE_SYNTAX, U_REGEX_RULE_SYNTAX);
      break;
    case 2944:
      HASH_RETURN(0x3BB0B57F8682CB80LL, k_IDNA_CONTAINS_MINUS, IDNA_CONTAINS_MINUS);
      break;
    case 2949:
      HASH_RETURN(0x3227F28B41DA6B85LL, k_U_UNMATCHED_BRACES, U_UNMATCHED_BRACES);
      break;
    case 2950:
      HASH_RETURN(0x0B464E1C6B23FB86LL, k_SIGPOLL, SIGPOLL);
      break;
    case 2954:
      HASH_RETURN(0x6665F8685D0F5B8ALL, k_MW_ThresholdPreview, MW_ThresholdPreview);
      HASH_RETURN(0x44B0662C4463AB8ALL, k_T_ABSTRACT, T_ABSTRACT);
      break;
    case 2955:
      HASH_RETURN(0x3A144CB9C9FF8B8BLL, k_UCOL_DEFAULT, UCOL_DEFAULT);
      HASH_RETURN(0x3C95B36362763B8BLL, k_U_MALFORMED_RULE, U_MALFORMED_RULE);
      break;
    case 2960:
      HASH_RETURN(0x303C6529961DCB90LL, k_DOM_NO_DATA_ALLOWED_ERR, DOM_NO_DATA_ALLOWED_ERR);
      break;
    case 2965:
      HASH_RETURN(0x01A5C7D3692BCB95LL, k_LOG_AUTH, LOG_AUTH);
      break;
    case 2968:
      HASH_RETURN(0x29273CCEB2874B98LL, k_MW_SquareCap, MW_SquareCap);
      break;
    case 2975:
      HASH_RETURN(0x325C39166457BB9FLL, k_OPENSSL_KEYTYPE_DH, OPENSSL_KEYTYPE_DH);
      break;
    case 2976:
      HASH_RETURN(0x5732EA54F38E4BA0LL, k_U_TOO_MANY_ALIASES_ERROR, U_TOO_MANY_ALIASES_ERROR);
      break;
    case 2981:
      HASH_RETURN(0x4D374FF8068ADBA5LL, k_STREAM_NOTIFY_SEVERITY_ERR, STREAM_NOTIFY_SEVERITY_ERR);
      break;
    case 2986:
      HASH_RETURN(0x6B0E9748AE8C6BAALL, k_SOCKET_ENOSPC, SOCKET_ENOSPC);
      break;
    case 2988:
      HASH_RETURN(0x682A5ECD075BEBACLL, k_DOM_INVALID_STATE_ERR, DOM_INVALID_STATE_ERR);
      break;
    case 2989:
      HASH_RETURN(0x116B1814FD193BADLL, k_MCRYPT_MARS, MCRYPT_MARS);
      break;
    case 2995:
      HASH_RETURN(0x079A74C67C1CDBB3LL, k_MW_SpiffPreview, MW_SpiffPreview);
      break;
    case 2999:
      HASH_RETURN(0x726E6E34464C5BB7LL, k_STREAM_CRYPTO_METHOD_SSLv2_SERVER, STREAM_CRYPTO_METHOD_SSLv2_SERVER);
      break;
    case 3001:
      HASH_RETURN(0x1598130294EACBB9LL, k_SO_REUSEADDR, SO_REUSEADDR);
      HASH_RETURN(0x3EE67FB2D681BBB9LL, k_MW_UndefinedIntent, MW_UndefinedIntent);
      HASH_RETURN(0x29456DEFF9CB3BB9LL, k_U_USING_DEFAULT_WARNING, U_USING_DEFAULT_WARNING);
      break;
    case 3004:
      HASH_RETURN(0x2334BC1C55ED5BBCLL, k_SQLITE3_BOTH, SQLITE3_BOTH);
      break;
    case 3005:
      HASH_RETURN(0x29AA6D95C1253BBDLL, k_CURLE_FTP_WEIRD_SERVER_REPLY, CURLE_FTP_WEIRD_SERVER_REPLY);
      break;
    case 3007:
      HASH_RETURN(0x72C0097961952BBFLL, k_MW_MinEvaluateOperator, MW_MinEvaluateOperator);
      break;
    case 3014:
      HASH_RETURN(0x5411D311A7C46BC6LL, k_MW_DelegateWarning, MW_DelegateWarning);
      break;
    case 3019:
      HASH_RETURN(0x71172CC6A9F41BCBLL, k_MW_PreviousDispose, MW_PreviousDispose);
      break;
    case 3022:
      HASH_RETURN(0x16FB28F675159BCELL, k_SIGURG, SIGURG);
      break;
    case 3023:
      HASH_RETURN(0x1E2C8DBE2F010BCFLL, k_E_RECOVERABLE_ERROR, E_RECOVERABLE_ERROR);
      break;
    case 3026:
      HASH_RETURN(0x0CABD2A60862DBD2LL, k_CRYPT_MD5, CRYPT_MD5);
      HASH_RETURN(0x36E76C0B0C6EBBD2LL, k_SO_KEEPALIVE, SO_KEEPALIVE);
      HASH_RETURN(0x4D8A388BF1F30BD2LL, k_T_IS_NOT_EQUAL, T_IS_NOT_EQUAL);
      break;
    case 3028:
      HASH_RETURN(0x118AA57D63D82BD4LL, k_MW_WavePreview, MW_WavePreview);
      break;
    case 3034:
      HASH_RETURN(0x664B7B3263EAABDALL, k_OCI_B_CURSOR, OCI_B_CURSOR);
      break;
    case 3035:
      HASH_RETURN(0x40DE6D41066BBBDBLL, k_MYSQLI_USE_RESULT, MYSQLI_USE_RESULT);
      break;
    case 3041:
      HASH_RETURN(0x206C8DC6C063DBE1LL, k_U_INVALID_FORMAT_ERROR, U_INVALID_FORMAT_ERROR);
      break;
    case 3042:
      HASH_RETURN(0x6DDCFF21FBFF3BE2LL, k_STREAM_NOTIFY_AUTH_RESULT, STREAM_NOTIFY_AUTH_RESULT);
      HASH_RETURN(0x4E5376497D7CDBE2LL, k_MON_9, MON_9);
      break;
    case 3044:
      HASH_RETURN(0x3E9580F4B357BBE4LL, k_CURLOPT_RANGE, CURLOPT_RANGE);
      break;
    case 3051:
      HASH_RETURN(0x657F154126B10BEBLL, k_MCRYPT_RC2, MCRYPT_RC2);
      break;
    case 3052:
      HASH_RETURN(0x2DADD85D33375BECLL, k_STREAM_CRYPTO_METHOD_TLS_CLIENT, STREAM_CRYPTO_METHOD_TLS_CLIENT);
      HASH_RETURN(0x4C497A200FF16BECLL, k_MW_BlendCompositeOp, MW_BlendCompositeOp);
      break;
    case 3053:
      HASH_RETURN(0x7B30143FB470ABEDLL, k_XSD_INT, XSD_INT);
      break;
    case 3058:
      HASH_RETURN(0x71D83C5B79CB0BF2LL, k_IMG_PNG, IMG_PNG);
      break;
    case 3061:
      HASH_RETURN(0x42FC7F5C971F9BF5LL, k_CREDITS_QA, CREDITS_QA);
      break;
    case 3065:
      HASH_RETURN(0x777C72E84F08DBF9LL, k_MW_OverlayCompositeOp, MW_OverlayCompositeOp);
      break;
    case 3067:
      HASH_RETURN(0x360CF202A3146BFBLL, k_M_SQRT2, M_SQRT2);
      HASH_RETURN(0x2C3E020267942BFBLL, k_MW_NoCompositeOp, MW_NoCompositeOp);
      break;
    case 3069:
      HASH_RETURN(0x120DBE17F1A54BFDLL, k_U_ERROR_WARNING_LIMIT, U_ERROR_WARNING_LIMIT);
      HASH_RETURN(0x0FA29672A08F0BFDLL, k_U_BRK_NEW_LINE_IN_QUOTED_STRING, U_BRK_NEW_LINE_IN_QUOTED_STRING);
      break;
    case 3071:
      HASH_RETURN(0x2FAE93A5FD06FBFFLL, k_SOCKET_ENOTCONN, SOCKET_ENOTCONN);
      break;
    case 3072:
      HASH_RETURN(0x70D579B8ABBA5C00LL, k_PSFS_FLAG_FLUSH_INC, PSFS_FLAG_FLUSH_INC);
      HASH_RETURN(0x6A94EEA7BCA66C00LL, k_U_BRK_VARIABLE_REDFINITION, U_BRK_VARIABLE_REDFINITION);
      break;
    case 3073:
      HASH_RETURN(0x7F910373E8737C01LL, k_SOAP_ACTOR_NEXT, SOAP_ACTOR_NEXT);
      break;
    case 3075:
      HASH_RETURN(0x4C4B984669440C03LL, k_XSD_TOKEN, XSD_TOKEN);
      break;
    case 3076:
      HASH_RETURN(0x282EDE6A40070C04LL, k_M_1_PI, M_1_PI);
      break;
    case 3086:
      HASH_RETURN(0x73DF2AF6843F6C0ELL, k_T_PROTECTED, T_PROTECTED);
      break;
    case 3093:
      HASH_RETURN(0x7B2ED86FFBE5AC15LL, k_LDAP_DEREF_NEVER, LDAP_DEREF_NEVER);
      break;
    case 3095:
      HASH_RETURN(0x1B94C21395D78C17LL, k_DOM_INVALID_CHARACTER_ERR, DOM_INVALID_CHARACTER_ERR);
      break;
    case 3101:
      HASH_RETURN(0x138E588009796C1DLL, k_DOM_PHP_ERR, DOM_PHP_ERR);
      break;
    case 3102:
      HASH_RETURN(0x6DA461D92D8E5C1ELL, k_PREG_INTERNAL_ERROR, PREG_INTERNAL_ERROR);
      break;
    case 3106:
      HASH_RETURN(0x690C9024AD43DC22LL, k_MON_10, MON_10);
      break;
    case 3109:
      HASH_RETURN(0x0BF33EEC8E51CC25LL, k_MYSQLI_TYPE_CHAR, MYSQLI_TYPE_CHAR);
      break;
    case 3112:
      HASH_RETURN(0x49189CACCCEFBC28LL, k_MW_CenterGravity, MW_CenterGravity);
      break;
    case 3113:
      HASH_RETURN(0x40F9D27309E99C29LL, k_SOCKET_ENETRESET, SOCKET_ENETRESET);
      break;
    case 3114:
      HASH_RETURN(0x0E502C4A7888EC2ALL, k_POSIX_F_OK, POSIX_F_OK);
      break;
    case 3115:
      HASH_RETURN(0x0C73D2781467FC2BLL, k_MCRYPT_MODE_STREAM, MCRYPT_MODE_STREAM);
      HASH_RETURN(0x1CBE3A117AC26C2BLL, k_CURLOPT_TIMEVALUE, CURLOPT_TIMEVALUE);
      break;
    case 3116:
      HASH_RETURN(0x7FA172362B399C2CLL, k_MCC_DELETE_ERROR_NOLOG, MCC_DELETE_ERROR_NOLOG);
      break;
    case 3119:
      HASH_RETURN(0x4C8E188D58C10C2FLL, k_XML_ATTRIBUTE_IDREFS, XML_ATTRIBUTE_IDREFS);
      break;
    case 3120:
      HASH_RETURN(0x0F3E316670BDCC30LL, k_MW_NoCompression, MW_NoCompression);
      break;
    case 3122:
      HASH_RETURN(0x20344610C4004C32LL, k_STREAM_CLIENT_CONNECT, STREAM_CLIENT_CONNECT);
      break;
    case 3123:
      HASH_RETURN(0x0B46DA3528C87C33LL, k_CURLOPT_SSLCERTPASSWD, CURLOPT_SSLCERTPASSWD);
      break;
    case 3125:
      HASH_RETURN(0x77A389D7783DBC35LL, k_T_FUNCTION, T_FUNCTION);
      break;
    case 3127:
      HASH_RETURN(0x23417ECCF281AC37LL, k_MCC_COMPRESSION_THRESHHOLD, MCC_COMPRESSION_THRESHHOLD);
      break;
    case 3128:
      HASH_RETURN(0x44312215697EBC38LL, k_MCRYPT_MODE_CBC, MCRYPT_MODE_CBC);
      break;
    case 3129:
      HASH_RETURN(0x6A3BA61C9FA5EC39LL, k_XML_ERROR_RECURSIVE_ENTITY_REF, XML_ERROR_RECURSIVE_ENTITY_REF);
      break;
    case 3139:
      HASH_RETURN(0x4BB65A9DFEFC8C43LL, k_DNS_SRV, DNS_SRV);
      HASH_RETURN(0x51F387821BA42C43LL, k_MSG_NOERROR, MSG_NOERROR);
      break;
    case 3141:
      HASH_RETURN(0x2A36DD3AB4042C45LL, k_SIGPWR, SIGPWR);
      break;
    case 3142:
      HASH_RETURN(0x73D9078E79E39C46LL, k_STREAM_CRYPTO_METHOD_SSLv3_CLIENT, STREAM_CRYPTO_METHOD_SSLv3_CLIENT);
      HASH_RETURN(0x46BB95B496C1BC46LL, k_WSDL_CACHE_NONE, WSDL_CACHE_NONE);
      HASH_RETURN(0x248265C110F0EC46LL, k_U_ENUM_OUT_OF_SYNC_ERROR, U_ENUM_OUT_OF_SYNC_ERROR);
      break;
    case 3145:
      HASH_RETURN(0x26A39406E1871C49LL, k_CURLE_FTP_WEIRD_227_FORMAT, CURLE_FTP_WEIRD_227_FORMAT);
      break;
    case 3147:
      HASH_RETURN(0x4C6391DC0DF45C4BLL, k_NAN, NAN);
      break;
    case 3153:
      HASH_RETURN(0x1A272A79DEEA7C51LL, k_MW_TransparentColorspace, MW_TransparentColorspace);
      break;
    case 3157:
      HASH_RETURN(0x2EF4675A93480C55LL, k_CURLOPT_WRITEHEADER, CURLOPT_WRITEHEADER);
      break;
    case 3158:
      HASH_RETURN(0x439AE53819511C56LL, k_MW_LeftShiftEvaluateOperator, MW_LeftShiftEvaluateOperator);
      break;
    case 3163:
      HASH_RETURN(0x64160F288165BC5BLL, k_MW_LaplacianNoise, MW_LaplacianNoise);
      break;
    case 3165:
      HASH_RETURN(0x593156CEAB253C5DLL, k_OPENSSL_CIPHER_RC2_64, OPENSSL_CIPHER_RC2_64);
      break;
    case 3166:
      HASH_RETURN(0x71957B0797970C5ELL, k_GD_EXTRA_VERSION, GD_EXTRA_VERSION);
      break;
    case 3167:
      HASH_RETURN(0x4F8A200B3EE7DC5FLL, k_MW_UndefinedGravity, MW_UndefinedGravity);
      HASH_RETURN(0x4547A8440E5F1C5FLL, k_T_NUM_STRING, T_NUM_STRING);
      HASH_RETURN(0x3E963DD47ED5CC5FLL, k_SIGSTOP, SIGSTOP);
      break;
    case 3168:
      HASH_RETURN(0x646C74912C780C60LL, k_CURLOPT_READDATA, CURLOPT_READDATA);
      HASH_RETURN(0x5C90CD4295711C60LL, k_MW_NoInterlace, MW_NoInterlace);
      break;
    case 3171:
      HASH_RETURN(0x3706DD6220C99C63LL, k_XML_ENTITY_REF_NODE, XML_ENTITY_REF_NODE);
      HASH_RETURN(0x489418E1FFFFCC63LL, k_MW_RoundCap, MW_RoundCap);
      break;
    case 3174:
      HASH_RETURN(0x52DD8CA209326C66LL, k_XML_ATTRIBUTE_NMTOKEN, XML_ATTRIBUTE_NMTOKEN);
      break;
    case 3184:
      HASH_RETURN(0x02DE0CD2B0DFBC70LL, k_ABDAY_1, ABDAY_1);
      break;
    case 3186:
      HASH_RETURN(0x4D52E901652F0C72LL, k_SO_RCVBUF, SO_RCVBUF);
      break;
    case 3187:
      HASH_RETURN(0x1A54DB9FB8AC9C73LL, k_LIBXML_ERR_ERROR, LIBXML_ERR_ERROR);
      HASH_RETURN(0x7005290DD5515C73LL, k_OCI_LOB_BUFFER_FREE, OCI_LOB_BUFFER_FREE);
      break;
    case 3188:
      HASH_RETURN(0x2752CDFC38AD3C74LL, k_CURLINFO_NAMELOOKUP_TIME, CURLINFO_NAMELOOKUP_TIME);
      HASH_RETURN(0x132C522537683C74LL, k_MW_sRGBColorspace, MW_sRGBColorspace);
      break;
    case 3192:
      HASH_RETURN(0x3969AE373E567C78LL, k_DNS_NS, DNS_NS);
      break;
    case 3195:
      HASH_RETURN(0x009CB349B875BC7BLL, k_SOCKET_ELNRNG, SOCKET_ELNRNG);
      break;
    case 3208:
      HASH_RETURN(0x7BC051800FB96C88LL, k_SOCKET_ETOOMANYREFS, SOCKET_ETOOMANYREFS);
      break;
    case 3214:
      HASH_RETURN(0x385190CEB9B1FC8ELL, k_U_MULTIPLE_PAD_SPECIFIERS, U_MULTIPLE_PAD_SPECIFIERS);
      break;
    case 3215:
      HASH_RETURN(0x5F1CAF039934BC8FLL, k_MW_UndefinedMode, MW_UndefinedMode);
      break;
    case 3217:
      HASH_RETURN(0x6AB1BF19D5A03C91LL, k_U_USELESS_COLLATOR_ERROR, U_USELESS_COLLATOR_ERROR);
      HASH_RETURN(0x7935065FD925CC91LL, k_T_DEFAULT, T_DEFAULT);
      break;
    case 3219:
      HASH_RETURN(0x0D81BCC2FA730C93LL, k_LOG_PERROR, LOG_PERROR);
      break;
    case 3220:
      HASH_RETURN(0x1E00F62826A05C94LL, k_DOM_INVALID_ACCESS_ERR, DOM_INVALID_ACCESS_ERR);
      HASH_RETURN(0x60DD6AA63E8EFC94LL, k_LOG_CONS, LOG_CONS);
      HASH_RETURN(0x5085A057EC380C94LL, k_SQLT_CLOB, SQLT_CLOB);
      HASH_RETURN(0x4D4024238FAB3C94LL, k_MYSQLI_REPORT_ALL, MYSQLI_REPORT_ALL);
      break;
    case 3221:
      HASH_RETURN(0x1D346642999A5C95LL, k_SQLT_LVC, SQLT_LVC);
      break;
    case 3223:
      HASH_RETURN(0x0C2057F071B77C97LL, k_MW_ObjectBoundingBox, MW_ObjectBoundingBox);
      break;
    case 3225:
      HASH_RETURN(0x083F3192D8830C99LL, k_MW_UserSpace, MW_UserSpace);
      break;
    case 3226:
      HASH_RETURN(0x0DF09036B9385C9ALL, k_MCRYPT_RIJNDAEL_192, MCRYPT_RIJNDAEL_192);
      break;
    case 3229:
      HASH_RETURN(0x6F4EE56705510C9DLL, k_MW_BlackChannel, MW_BlackChannel);
      break;
    case 3231:
      HASH_RETURN(0x1F4DE6C405ADBC9FLL, k_LDAP_OPT_SERVER_CONTROLS, LDAP_OPT_SERVER_CONTROLS);
      break;
    case 3232:
      HASH_RETURN(0x6C3F56D5C0CFCCA0LL, k_PHP_CONFIG_FILE_PATH, PHP_CONFIG_FILE_PATH);
      break;
    case 3234:
      HASH_RETURN(0x0D675D880BDE7CA2LL, k_T_PLUS_EQUAL, T_PLUS_EQUAL);
      HASH_RETURN(0x2DFED526B1931CA2LL, k_T_STATIC, T_STATIC);
      break;
    case 3238:
      HASH_RETURN(0x6228DEB87CDFFCA6LL, k_M_2_PI, M_2_PI);
      HASH_RETURN(0x7F5833E1598FFCA6LL, k_STREAM_PF_INET, STREAM_PF_INET);
      break;
    case 3239:
      HASH_RETURN(0x46726135D0036CA7LL, k_ABMON_7, ABMON_7);
      break;
    case 3241:
      HASH_RETURN(0x2C8197262EF5FCA9LL, k_MYSQLI_SET_FLAG, MYSQLI_SET_FLAG);
      break;
    case 3242:
      HASH_RETURN(0x49694C9BD88D7CAALL, k_SOCKET_EEXIST, SOCKET_EEXIST);
      break;
    case 3245:
      HASH_RETURN(0x43B60680D1FFACADLL, k_SOCKET_EIO, SOCKET_EIO);
      HASH_RETURN(0x4CCC408F995DDCADLL, k_MW_TrueColorMatteType, MW_TrueColorMatteType);
      break;
    case 3248:
      HASH_RETURN(0x110A57D331619CB0LL, k_MYSQLI_TYPE_TINY_BLOB, MYSQLI_TYPE_TINY_BLOB);
      break;
    case 3252:
      HASH_RETURN(0x13594B79B76FDCB4LL, k_LOG_ERR, LOG_ERR);
      break;
    case 3253:
      HASH_RETURN(0x5817D9152083CCB5LL, k_MSG_DONTROUTE, MSG_DONTROUTE);
      HASH_RETURN(0x118AB611B2125CB5LL, k_CURLE_FTP_COULDNT_STOR_FILE, CURLE_FTP_COULDNT_STOR_FILE);
      break;
    case 3254:
      HASH_RETURN(0x0A7BA8A0028B5CB6LL, k_DNS_TXT, DNS_TXT);
      HASH_RETURN(0x47B7A7F80ED1ECB6LL, k_T_DOLLAR_OPEN_CURLY_BRACES, T_DOLLAR_OPEN_CURLY_BRACES);
      break;
    case 3255:
      HASH_RETURN(0x3B18031C93653CB7LL, k_T_METHOD_C, T_METHOD_C);
      break;
    case 3257:
      HASH_RETURN(0x31E92A1C48B2DCB9LL, k_MCC_ARG_TCP_INACTIVITY_TIME, MCC_ARG_TCP_INACTIVITY_TIME);
      HASH_RETURN(0x195553BD6A1ABCB9LL, k_M_EULER, M_EULER);
      break;
    case 3259:
      HASH_RETURN(0x7B35C51C1ABEACBBLL, k_SO_SNDBUF, SO_SNDBUF);
      break;
    case 3262:
      HASH_RETURN(0x311BD761A68ADCBELL, k_SO_DEBUG, SO_DEBUG);
      HASH_RETURN(0x5B2078AE29DC1CBELL, k_MW_OptionWarning, MW_OptionWarning);
      break;
    case 3263:
      HASH_RETURN(0x0D0FECB6CE117CBFLL, k_SQLT_UIN, SQLT_UIN);
      break;
    case 3268:
      HASH_RETURN(0x555120EDDEE03CC4LL, k_SIGUSR2, SIGUSR2);
      break;
    case 3269:
      HASH_RETURN(0x0862E2079CBE2CC5LL, k_XML_OPTION_SKIP_TAGSTART, XML_OPTION_SKIP_TAGSTART);
      break;
    case 3273:
      HASH_RETURN(0x1156FE16CF6B4CC9LL, k_MCC_HAVE_ZLIB_COMPRESSION, MCC_HAVE_ZLIB_COMPRESSION);
      break;
    case 3274:
      HASH_RETURN(0x1E5A85ABB162BCCALL, k_PNG_FILTER_AVG, PNG_FILTER_AVG);
      break;
    case 3276:
      HASH_RETURN(0x632EC42BD663DCCCLL, k_MW_UndefinedEvaluateOperator, MW_UndefinedEvaluateOperator);
      break;
    case 3284:
      HASH_RETURN(0x2EE3255D26095CD4LL, k_IMAGETYPE_XBM, IMAGETYPE_XBM);
      break;
    case 3289:
      HASH_RETURN(0x483D3E900AA2BCD9LL, k_MB_OVERLOAD_MAIL, MB_OVERLOAD_MAIL);
      HASH_RETURN(0x50D40BBF21B47CD9LL, k_T_INSTANCEOF, T_INSTANCEOF);
      break;
    case 3292:
      HASH_RETURN(0x5700A180906B6CDCLL, k_LOCK_NB, LOCK_NB);
      break;
    case 3298:
      HASH_RETURN(0x31234F1ED95BBCE2LL, k_MW_DelegateFatalError, MW_DelegateFatalError);
      break;
    case 3300:
      HASH_RETURN(0x2F8DC4C719BE7CE4LL, k_MW_ConfigureWarning, MW_ConfigureWarning);
      HASH_RETURN(0x43B1B2B997732CE4LL, k_T_INTERFACE, T_INTERFACE);
      break;
    case 3306:
      HASH_RETURN(0x79B69C2399224CEALL, k_XSD_NMTOKEN, XSD_NMTOKEN);
      break;
    case 3310:
      HASH_RETURN(0x3078202CA3F8DCEELL, k_TRUE, TRUE);
      HASH_RETURN(0x61AC0A0A051D2CEELL, k_OCI_B_ROWID, OCI_B_ROWID);
      break;
    case 3312:
      HASH_RETURN(0x4BF4993DFA04CCF0LL, k_SIGXFSZ, SIGXFSZ);
      break;
    case 3313:
      HASH_RETURN(0x7F8704DDF2420CF1LL, k_U_REGEX_MISMATCHED_PAREN, U_REGEX_MISMATCHED_PAREN);
      break;
    case 3317:
      HASH_RETURN(0x3F5BB76AB1C23CF5LL, k_CURLPROXY_SOCKS5, CURLPROXY_SOCKS5);
      HASH_RETURN(0x58874FBEB6023CF5LL, k_CURLM_OUT_OF_MEMORY, CURLM_OUT_OF_MEMORY);
      break;
    case 3318:
      HASH_RETURN(0x056A3CBE2AAE5CF6LL, k_T_IS_EQUAL, T_IS_EQUAL);
      break;
    case 3319:
      HASH_RETURN(0x5EB4230441ED3CF7LL, k_PRIO_PROCESS, PRIO_PROCESS);
      break;
    case 3324:
      HASH_RETURN(0x016F9B334DA96CFCLL, k_U_BUFFER_OVERFLOW_ERROR, U_BUFFER_OVERFLOW_ERROR);
      break;
    case 3328:
      HASH_RETURN(0x2EA99771426CCD00LL, k_DNS_ANY, DNS_ANY);
      HASH_RETURN(0x32A885245D6B1D00LL, k_MW_OrEvaluateOperator, MW_OrEvaluateOperator);
      HASH_RETURN(0x789DD1AE1BD63D00LL, k_SIGKILL, SIGKILL);
      break;
    case 3329:
      HASH_RETURN(0x594C523F41517D01LL, k_GLOB_MARK, GLOB_MARK);
      break;
    case 3331:
      HASH_RETURN(0x38E61A1156C63D03LL, k_U_UNDEFINED_VARIABLE, U_UNDEFINED_VARIABLE);
      break;
    case 3333:
      HASH_RETURN(0x3EE9DDA712FCAD05LL, k_UCOL_HIRAGANA_QUATERNARY_MODE, UCOL_HIRAGANA_QUATERNARY_MODE);
      HASH_RETURN(0x497D5C4B2BA0DD05LL, k_MW_CondensedStretch, MW_CondensedStretch);
      break;
    case 3334:
      HASH_RETURN(0x5DD63F178B2C8D06LL, k_PREG_SPLIT_OFFSET_CAPTURE, PREG_SPLIT_OFFSET_CAPTURE);
      break;
    case 3335:
      HASH_RETURN(0x080AB4323664AD07LL, k_MW_BevelJoin, MW_BevelJoin);
      break;
    case 3336:
      HASH_RETURN(0x7E214588295A5D08LL, k_STREAM_NOTIFY_RESOLVE, STREAM_NOTIFY_RESOLVE);
      break;
    case 3346:
      HASH_RETURN(0x14047D2D0AE2DD12LL, k_XSD_ANYTYPE, XSD_ANYTYPE);
      HASH_RETURN(0x19446B6AFA2B9D12LL, k_MW_UltraExpandedStretch, MW_UltraExpandedStretch);
      break;
    case 3359:
      HASH_RETURN(0x689BD4E0DF9C4D1FLL, k_STREAM_OOB, STREAM_OOB);
      break;
    case 3361:
      HASH_RETURN(0x65FEA52F2D59AD21LL, k_PHP_OUTPUT_HANDLER_END, PHP_OUTPUT_HANDLER_END);
      break;
    case 3364:
      HASH_RETURN(0x19CB6B67ACA52D24LL, k_CURLAUTH_ANYSAFE, CURLAUTH_ANYSAFE);
      break;
    case 3365:
      HASH_RETURN(0x65F5B238B76ECD25LL, k_MW_OptionFatalError, MW_OptionFatalError);
      break;
    case 3367:
      HASH_RETURN(0x4EB7CAE7EFFCED27LL, k_INFO_CONFIGURATION, INFO_CONFIGURATION);
      break;
    case 3368:
      HASH_RETURN(0x286787B5B66B2D28LL, k_INI_ALL, INI_ALL);
      break;
    case 3374:
      HASH_RETURN(0x4F890C74E2E7ED2ELL, k_MON_7, MON_7);
      break;
    case 3381:
      HASH_RETURN(0x1FA8779B873BDD35LL, k_SO_BROADCAST, SO_BROADCAST);
      HASH_RETURN(0x09EAE0131A9CCD35LL, k_MCRYPT_SAFER128, MCRYPT_SAFER128);
      HASH_RETURN(0x50E0B002A434DD35LL, k_CURLOPT_SSL_CIPHER_LIST, CURLOPT_SSL_CIPHER_LIST);
      break;
    case 3382:
      HASH_RETURN(0x1A9C7ECBABDC7D36LL, k_ERA_D_FMT, ERA_D_FMT);
      break;
    case 3383:
      HASH_RETURN(0x07824AA94D409D37LL, k_LIBXML_DOTTED_VERSION, LIBXML_DOTTED_VERSION);
      break;
    case 3384:
      HASH_RETURN(0x3F3077DA2F37ED38LL, k_XSD_UNSIGNEDLONG, XSD_UNSIGNEDLONG);
      HASH_RETURN(0x4CCAAFCF17C91D38LL, k_MCRYPT_CAST_128, MCRYPT_CAST_128);
      break;
    case 3385:
      HASH_RETURN(0x3953428C65BEED39LL, k_STREAM_SHUT_RDWR, STREAM_SHUT_RDWR);
      break;
    case 3387:
      HASH_RETURN(0x29D809A5176A1D3BLL, k_MW_CubicFilter, MW_CubicFilter);
      break;
    case 3390:
      HASH_RETURN(0x425EDA14F9F82D3ELL, k_MSG_EOF, MSG_EOF);
      break;
    case 3398:
      HASH_RETURN(0x4A93491A9D5A3D46LL, k_U_MULTIPLE_DECIMAL_SEPARATORS, U_MULTIPLE_DECIMAL_SEPARATORS);
      break;
    case 3399:
      HASH_RETURN(0x045A3851B7EC4D47LL, k_CURLE_LDAP_INVALID_URL, CURLE_LDAP_INVALID_URL);
      HASH_RETURN(0x6B749260EFE3DD47LL, k_MW_TileVirtualPixelMethod, MW_TileVirtualPixelMethod);
      break;
    case 3402:
      HASH_RETURN(0x6AD8E8C54E36BD4ALL, k_XSD_DOUBLE, XSD_DOUBLE);
      HASH_RETURN(0x6A8FE321DA080D4ALL, k_CURLE_FTP_QUOTE_ERROR, CURLE_FTP_QUOTE_ERROR);
      break;
    case 3407:
      HASH_RETURN(0x575B196147E3ED4FLL, k_STREAM_USE_PATH, STREAM_USE_PATH);
      break;
    case 3408:
      HASH_RETURN(0x5E2231652664BD50LL, k_U_MALFORMED_EXPONENTIAL_PATTERN, U_MALFORMED_EXPONENTIAL_PATTERN);
      HASH_RETURN(0x75A66974FDF56D50LL, k_POSIX_S_IFCHR, POSIX_S_IFCHR);
      break;
    case 3411:
      HASH_RETURN(0x62E0A16FE1AB4D53LL, k_T_OBJECT_CAST, T_OBJECT_CAST);
      break;
    case 3413:
      HASH_RETURN(0x4AA98DC874A74D55LL, k_LOG_KERN, LOG_KERN);
      break;
    case 3415:
      HASH_RETURN(0x2BF259577D2BFD57LL, k_XML_ERROR_PARAM_ENTITY_REF, XML_ERROR_PARAM_ENTITY_REF);
      break;
    case 3417:
      HASH_RETURN(0x671B68F7A43F8D59LL, k_MYSQLI_TIMESTAMP_FLAG, MYSQLI_TIMESTAMP_FLAG);
      break;
    case 3420:
      HASH_RETURN(0x0EBFC8C032948D5CLL, k_SOCKET_ENETDOWN, SOCKET_ENETDOWN);
      HASH_RETURN(0x4F5A6829041E7D5CLL, k_MW_PaletteType, MW_PaletteType);
      break;
    case 3422:
      HASH_RETURN(0x0DF314772A9FBD5ELL, k_STREAM_NOTIFY_REDIRECTED, STREAM_NOTIFY_REDIRECTED);
      break;
    case 3423:
      HASH_RETURN(0x6E50FE5A6CE31D5FLL, k_LDAP_OPT_REFERRALS, LDAP_OPT_REFERRALS);
      break;
    case 3424:
      HASH_RETURN(0x754C31003A262D60LL, k_UPLOAD_ERR_NO_FILE, UPLOAD_ERR_NO_FILE);
      HASH_RETURN(0x3D724D44F99B8D60LL, k_T_DNUMBER, T_DNUMBER);
      break;
    case 3436:
      HASH_RETURN(0x7ABB5B454F3B7D6CLL, k_SIGPIPE, SIGPIPE);
      break;
    case 3438:
      HASH_RETURN(0x1BDB52AC8DD9AD6ELL, k_XSD_GMONTHDAY, XSD_GMONTHDAY);
      break;
    case 3442:
      HASH_RETURN(0x7531529AC01F9D72LL, k_CURLOPT_USERAGENT, CURLOPT_USERAGENT);
      break;
    case 3446:
      HASH_RETURN(0x4EC6EDC68E017D76LL, k_MW_MinusCompositeOp, MW_MinusCompositeOp);
      break;
    case 3447:
      HASH_RETURN(0x7E2045A74D4C6D77LL, k_LC_TIME, LC_TIME);
      break;
    case 3448:
      HASH_RETURN(0x7B04F9CA4180AD78LL, k_AM_STR, AM_STR);
      break;
    case 3450:
      HASH_RETURN(0x59AA899293A2CD7ALL, k_CURLVERSION_NOW, CURLVERSION_NOW);
      break;
    case 3451:
      HASH_RETURN(0x07BA663F5358BD7BLL, k_PHP_BINDIR, PHP_BINDIR);
      break;
    case 3454:
      HASH_RETURN(0x642B6A707D1D7D7ELL, k_CURLOPT_HTTPHEADER, CURLOPT_HTTPHEADER);
      break;
    case 3455:
      HASH_RETURN(0x0624D9FDA4FA2D7FLL, k_CURLE_URL_MALFORMAT, CURLE_URL_MALFORMAT);
      break;
    case 3456:
      HASH_RETURN(0x1B0BE5D3FCBDCD80LL, k_SQLT_RDD, SQLT_RDD);
      HASH_RETURN(0x5E108CDF92320D80LL, k_SIGQUIT, SIGQUIT);
      break;
    case 3457:
      HASH_RETURN(0x60103CDE5B5DED81LL, k_MW_EdgeVirtualPixelMethod, MW_EdgeVirtualPixelMethod);
      HASH_RETURN(0x3C975F338FE45D81LL, k_IDNA_STRINGPREP_ERROR, IDNA_STRINGPREP_ERROR);
      break;
    case 3458:
      HASH_RETURN(0x41B8FB03B8837D82LL, k_ABMON_10, ABMON_10);
      break;
    case 3459:
      HASH_RETURN(0x519F2D2E92F21D83LL, k_CURLOPT_CLOSEPOLICY, CURLOPT_CLOSEPOLICY);
      break;
    case 3460:
      HASH_RETURN(0x7B08F92F6EEFAD84LL, k_XML_OPTION_CASE_FOLDING, XML_OPTION_CASE_FOLDING);
      break;
    case 3461:
      HASH_RETURN(0x2DA3CB49AD2F0D85LL, k_U_STANDARD_ERROR_LIMIT, U_STANDARD_ERROR_LIMIT);
      break;
    case 3462:
      HASH_RETURN(0x50F6693EB1A91D86LL, k_DATE_RFC3339, DATE_RFC3339);
      break;
    case 3469:
      HASH_RETURN(0x63015003E99EBD8DLL, k_T_MUL_EQUAL, T_MUL_EQUAL);
      break;
    case 3478:
      HASH_RETURN(0x4BD8FE56552BBD96LL, k_MCC_DELETE_ERROR_LOG, MCC_DELETE_ERROR_LOG);
      break;
    case 3479:
      HASH_RETURN(0x725E8AF1FCC17D97LL, k_U_MALFORMED_SYMBOL_REFERENCE, U_MALFORMED_SYMBOL_REFERENCE);
      HASH_RETURN(0x5285F1FB2FDD5D97LL, k_OCI_COMMIT_ON_SUCCESS, OCI_COMMIT_ON_SUCCESS);
      break;
    case 3483:
      HASH_RETURN(0x74608FBC8A472D9BLL, k_MW_MonitorWarning, MW_MonitorWarning);
      break;
    case 3484:
      HASH_RETURN(0x06DC44600D683D9CLL, k_PHPMCC_USED_FAST_PATH, PHPMCC_USED_FAST_PATH);
      break;
    case 3486:
      HASH_RETURN(0x2AB052BFEA350D9ELL, k_U_RESOURCE_TYPE_MISMATCH, U_RESOURCE_TYPE_MISMATCH);
      HASH_RETURN(0x099E775BCDF63D9ELL, k_U_UNSUPPORTED_ATTRIBUTE, U_UNSUPPORTED_ATTRIBUTE);
      break;
    case 3487:
      HASH_RETURN(0x567B425E3C995D9FLL, k_UCOL_PRIMARY, UCOL_PRIMARY);
      HASH_RETURN(0x4EB13AF70DCE4D9FLL, k_XML_ERROR_UNKNOWN_ENCODING, XML_ERROR_UNKNOWN_ENCODING);
      HASH_RETURN(0x7695C4F73EA18D9FLL, k_STREAM_CRYPTO_METHOD_SSLv23_SERVER, STREAM_CRYPTO_METHOD_SSLv23_SERVER);
      break;
    case 3489:
      HASH_RETURN(0x57CD72A00AAD2DA1LL, k_IMAGETYPE_TIFF_MM, IMAGETYPE_TIFF_MM);
      break;
    case 3491:
      HASH_RETURN(0x14C42AD03A63BDA3LL, k_SQLT_NUM, SQLT_NUM);
      break;
    case 3493:
      HASH_RETURN(0x1BC7248DB0E08DA5LL, k_INI_USER, INI_USER);
      break;
    case 3494:
      HASH_RETURN(0x0484A19599814DA6LL, k_CURLOPT_LOW_SPEED_TIME, CURLOPT_LOW_SPEED_TIME);
      HASH_RETURN(0x34025636636B9DA6LL, k_U_ILLEGAL_CHAR_FOUND, U_ILLEGAL_CHAR_FOUND);
      break;
    case 3496:
      HASH_RETURN(0x1A6DD2C63CC2CDA8LL, k_FILE_APPEND, FILE_APPEND);
      break;
    case 3497:
      HASH_RETURN(0x14E7395A94B38DA9LL, k_PKCS7_TEXT, PKCS7_TEXT);
      break;
    case 3499:
      HASH_RETURN(0x7D6F66A55B084DABLL, k_E_STRICT, E_STRICT);
      HASH_RETURN(0x32E92869964BADABLL, k_SOCKET_EL2HLT, SOCKET_EL2HLT);
      break;
    case 3501:
      HASH_RETURN(0x76F0432FE8FD3DADLL, k_LC_CTYPE, LC_CTYPE);
      break;
    case 3503:
      HASH_RETURN(0x2BC33F509A5AADAFLL, k_CURLAUTH_DIGEST, CURLAUTH_DIGEST);
      break;
    case 3506:
      HASH_RETURN(0x3A8C33DE41ADDDB2LL, k_XSD_NONPOSITIVEINTEGER, XSD_NONPOSITIVEINTEGER);
      break;
    case 3511:
      HASH_RETURN(0x7BC3241B87664DB7LL, k_U_TRUNCATED_CHAR_FOUND, U_TRUNCATED_CHAR_FOUND);
      break;
    case 3515:
      HASH_RETURN(0x4995655B45B0EDBBLL, k_MW_MultiplyEvaluateOperator, MW_MultiplyEvaluateOperator);
      break;
    case 3518:
      HASH_RETURN(0x00569354D7800DBELL, k_EXTR_IF_EXISTS, EXTR_IF_EXISTS);
      HASH_RETURN(0x11F1ED94ABA77DBELL, k_PKCS7_NOINTERN, PKCS7_NOINTERN);
      break;
    case 3524:
      HASH_RETURN(0x27EEEF865B07FDC4LL, k_IDNA_ICONV_ERROR, IDNA_ICONV_ERROR);
      break;
    case 3526:
      HASH_RETURN(0x04050975BB277DC6LL, k_MW_BackgroundDispose, MW_BackgroundDispose);
      break;
    case 3532:
      HASH_RETURN(0x0B3367C454FC5DCCLL, k_STR_PAD_RIGHT, STR_PAD_RIGHT);
      HASH_RETURN(0x41ED5FFAFCE49DCCLL, k_X509_PURPOSE_SMIME_ENCRYPT, X509_PURPOSE_SMIME_ENCRYPT);
      break;
    case 3534:
      HASH_RETURN(0x7EF65783EA58CDCELL, k_IMAGETYPE_JPEG, IMAGETYPE_JPEG);
      break;
    case 3539:
      HASH_RETURN(0x0B872BC75FC9ADD3LL, k_UCOL_CASE_LEVEL, UCOL_CASE_LEVEL);
      break;
    case 3540:
      HASH_RETURN(0x267A5DE787395DD4LL, k_MW_ItalicStyle, MW_ItalicStyle);
      break;
    case 3542:
      HASH_RETURN(0x2516BDA00D88DDD6LL, k_MYSQLI_TYPE_INT24, MYSQLI_TYPE_INT24);
      break;
    case 3549:
      HASH_RETURN(0x53A05E2E1B3A1DDDLL, k_MYSQLI_CLIENT_COMPRESS, MYSQLI_CLIENT_COMPRESS);
      break;
    case 3551:
      HASH_RETURN(0x5EDE310A750EBDDFLL, k_XML_ERROR_DUPLICATE_ATTRIBUTE, XML_ERROR_DUPLICATE_ATTRIBUTE);
      break;
    case 3552:
      HASH_RETURN(0x36F4F66B710AEDE0LL, k_CURLOPT_SSL_VERIFYPEER, CURLOPT_SSL_VERIFYPEER);
      break;
    case 3553:
      HASH_RETURN(0x5E179C7BF16AADE1LL, k_U_REGEX_LOOK_BEHIND_LIMIT, U_REGEX_LOOK_BEHIND_LIMIT);
      break;
    case 3557:
      HASH_RETURN(0x5ED04B226C6F5DE5LL, k_CURLE_RECV_ERROR, CURLE_RECV_ERROR);
      break;
    case 3565:
      HASH_RETURN(0x640C16523EB7DDEDLL, k_CURLOPT_KRB4LEVEL, CURLOPT_KRB4LEVEL);
      HASH_RETURN(0x1E12B42FFDA93DEDLL, k_MW_RightAlign, MW_RightAlign);
      break;
    case 3569:
      HASH_RETURN(0x183F3978FCC61DF1LL, k_T_COMMENT, T_COMMENT);
      break;
    case 3573:
      HASH_RETURN(0x54DF231EC3A20DF5LL, k_MCC_MTU, MCC_MTU);
      break;
    case 3575:
      HASH_RETURN(0x3494F07712A06DF7LL, k_INF, INF);
      break;
    case 3578:
      HASH_RETURN(0x225B5C23C91AADFALL, k_U_FILE_ACCESS_ERROR, U_FILE_ACCESS_ERROR);
      break;
    case 3579:
      HASH_RETURN(0x11498EA6A53EFDFBLL, k_STREAM_NOTIFY_SEVERITY_INFO, STREAM_NOTIFY_SEVERITY_INFO);
      break;
    case 3580:
      HASH_RETURN(0x221920EBBB628DFCLL, k_SIGWINCH, SIGWINCH);
      break;
    case 3581:
      HASH_RETURN(0x2D51185B445E6DFDLL, k_SQLITE3_BLOB, SQLITE3_BLOB);
      HASH_RETURN(0x0A07C0E7F4731DFDLL, k_LOG_SYSLOG, LOG_SYSLOG);
      break;
    case 3582:
      HASH_RETURN(0x0837B8B91C1AEDFELL, k_LOG_CRIT, LOG_CRIT);
      break;
    case 3583:
      HASH_RETURN(0x4D9940F29E8D2DFFLL, k_SOCKET_ESRMNT, SOCKET_ESRMNT);
      break;
    case 3584:
      HASH_RETURN(0x345B84A19F145E00LL, k_CURLINFO_CONNECT_TIME, CURLINFO_CONNECT_TIME);
      break;
    case 3589:
      HASH_RETURN(0x2C4915B589B81E05LL, k_XSD_UNSIGNEDSHORT, XSD_UNSIGNEDSHORT);
      break;
    case 3590:
      HASH_RETURN(0x16FA49F8EF5CDE06LL, k_T_BREAK, T_BREAK);
      break;
    case 3597:
      HASH_RETURN(0x7A38C903855C7E0DLL, k_MW_UndefinedVirtualPixelMethod, MW_UndefinedVirtualPixelMethod);
      break;
    case 3599:
      HASH_RETURN(0x6FB13B6F426B0E0FLL, k_SOAP_1_1, SOAP_1_1);
      break;
    case 3600:
      HASH_RETURN(0x22CD7D927EE36E10LL, k_XML_ATTRIBUTE_CDATA, XML_ATTRIBUTE_CDATA);
      break;
    case 3604:
      HASH_RETURN(0x4C7A4802615D5E14LL, k_DEBUG_LOG_TRACE, DEBUG_LOG_TRACE);
      break;
    case 3605:
      HASH_RETURN(0x5648EF867B700E15LL, k_EXTR_PREFIX_ALL, EXTR_PREFIX_ALL);
      break;
    case 3607:
      HASH_RETURN(0x7CB628606FE34E17LL, k_MW_RightShiftEvaluateOperator, MW_RightShiftEvaluateOperator);
      break;
    case 3608:
      HASH_RETURN(0x50707DEC820F4E18LL, k_MCC_ARG_MIRROR_CFG_MODEL, MCC_ARG_MIRROR_CFG_MODEL);
      HASH_RETURN(0x6AFCBC5FE70F8E18LL, k_MCRYPT_ARCFOUR_IV, MCRYPT_ARCFOUR_IV);
      HASH_RETURN(0x70639E133AD63E18LL, k_CURLFTPAUTH_DEFAULT, CURLFTPAUTH_DEFAULT);
      break;
    case 3610:
      HASH_RETURN(0x145ED25BDC64AE1ALL, k_IMG_EFFECT_OVERLAY, IMG_EFFECT_OVERLAY);
      break;
    case 3611:
      HASH_RETURN(0x470FEE7019508E1BLL, k_OCI_D_FILE, OCI_D_FILE);
      break;
    case 3612:
      HASH_RETURN(0x1CF42F59A432EE1CLL, k_ABDAY_5, ABDAY_5);
      break;
    case 3613:
      HASH_RETURN(0x752D7DBBF3D39E1DLL, k_MW_UndefinedStretch, MW_UndefinedStretch);
      break;
    case 3618:
      HASH_RETURN(0x0A38761E0DA4EE22LL, k_OCI_RETURN_LOBS, OCI_RETURN_LOBS);
      break;
    case 3620:
      HASH_RETURN(0x44BCD76418C00E24LL, k_CURLE_FTP_COULDNT_SET_ASCII, CURLE_FTP_COULDNT_SET_ASCII);
      break;
    case 3621:
      HASH_RETURN(0x5E784C2A73C45E25LL, k_DEBUG_LOG_DEFAULT, DEBUG_LOG_DEFAULT);
      break;
    case 3622:
      HASH_RETURN(0x15F5684D6D173E26LL, k_INI_PERDIR, INI_PERDIR);
      HASH_RETURN(0x5740B2A94B671E26LL, k_IMG_FILTER_SELECTIVE_BLUR, IMG_FILTER_SELECTIVE_BLUR);
      break;
    case 3624:
      HASH_RETURN(0x6A8ACC8C8626BE28LL, k_STREAM_IPPROTO_UDP, STREAM_IPPROTO_UDP);
      HASH_RETURN(0x453FFE038CED3E28LL, k_SOCKET_EHOSTDOWN, SOCKET_EHOSTDOWN);
      break;
    case 3627:
      HASH_RETURN(0x062595DB35D40E2BLL, k_MON_11, MON_11);
      break;
    case 3631:
      HASH_RETURN(0x3C1215853485BE2FLL, k_UCOL_NUMERIC_COLLATION, UCOL_NUMERIC_COLLATION);
      break;
    case 3633:
      HASH_RETURN(0x0E1C77C869257E31LL, k_MB_CASE_UPPER, MB_CASE_UPPER);
      break;
    case 3635:
      HASH_RETURN(0x3140458572921E33LL, k_SOCKET_ECOMM, SOCKET_ECOMM);
      break;
    case 3637:
      HASH_RETURN(0x3A33A5F6B0E71E35LL, k_MYSQLI_TYPE_GEOMETRY, MYSQLI_TYPE_GEOMETRY);
      break;
    case 3642:
      HASH_RETURN(0x37C9D9DC7CB3BE3ALL, k_XML_ERROR_EXTERNAL_ENTITY_HANDLING, XML_ERROR_EXTERNAL_ENTITY_HANDLING);
      HASH_RETURN(0x468C9B40C4051E3ALL, k_ENT_NOQUOTES, ENT_NOQUOTES);
      break;
    case 3643:
      HASH_RETURN(0x177B88E869891E3BLL, k_MSG_EXCEPT, MSG_EXCEPT);
      break;
    case 3644:
      HASH_RETURN(0x752ADBB53BA8CE3CLL, k_DOM_NOT_SUPPORTED_ERR, DOM_NOT_SUPPORTED_ERR);
      break;
    case 3647:
      HASH_RETURN(0x45A80B1B9E5A0E3FLL, k_U_MALFORMED_VARIABLE_DEFINITION, U_MALFORMED_VARIABLE_DEFINITION);
      break;
    case 3648:
      HASH_RETURN(0x17461F220A1CDE40LL, k_SOCKET_EADDRNOTAVAIL, SOCKET_EADDRNOTAVAIL);
      break;
    case 3649:
      HASH_RETURN(0x2261E4CD8D204E41LL, k_CURLE_MALFORMAT_USER, CURLE_MALFORMAT_USER);
      break;
    case 3652:
      HASH_RETURN(0x644A05E8D26A0E44LL, k_MW_OverCompositeOp, MW_OverCompositeOp);
      break;
    case 3653:
      HASH_RETURN(0x217B3E865E541E45LL, k_PHP_SAPI, PHP_SAPI);
      HASH_RETURN(0x55E559C5DC163E45LL, k_CURLOPT_POST, CURLOPT_POST);
      break;
    case 3654:
      HASH_RETURN(0x51D82188E1C87E46LL, k_MW_IndexChannel, MW_IndexChannel);
      break;
    case 3655:
      HASH_RETURN(0x382079A4E1859E47LL, k_MON_6, MON_6);
      break;
    case 3657:
      HASH_RETURN(0x1432AE6BD6E60E49LL, k_STREAM_SERVER_BIND, STREAM_SERVER_BIND);
      HASH_RETURN(0x15042757BAFCAE49LL, k_OCI_DTYPE_ROWID, OCI_DTYPE_ROWID);
      break;
    case 3661:
      HASH_RETURN(0x4CDB98912E88BE4DLL, k_STREAM_URL_STAT_LINK, STREAM_URL_STAT_LINK);
      HASH_RETURN(0x707379159AEB4E4DLL, k_CURLOPT_HTTPPROXYTUNNEL, CURLOPT_HTTPPROXYTUNNEL);
      break;
    case 3663:
      HASH_RETURN(0x0B7A2DC2A24B4E4FLL, k_LIBXML_DTDVALID, LIBXML_DTDVALID);
      HASH_RETURN(0x6DC52B94939EFE4FLL, k_MW_RegistryWarning, MW_RegistryWarning);
      HASH_RETURN(0x0CD9CDAAF1163E4FLL, k_MW_CoderFatalError, MW_CoderFatalError);
      break;
    case 3671:
      HASH_RETURN(0x404229D73F2E0E57LL, k_PSFS_FLAG_FLUSH_CLOSE, PSFS_FLAG_FLUSH_CLOSE);
      break;
    case 3672:
      HASH_RETURN(0x4504777806FBFE58LL, k_FORCE_GZIP, FORCE_GZIP);
      break;
    case 3674:
      HASH_RETURN(0x6808FCB2921D3E5ALL, k_MW_ColorSeparationMatteType, MW_ColorSeparationMatteType);
      break;
    case 3676:
      HASH_RETURN(0x694B7BB67D4D2E5CLL, k_SOCKET_EMULTIHOP, SOCKET_EMULTIHOP);
      break;
    case 3677:
      HASH_RETURN(0x2B1364E64F41AE5DLL, k_LOG_WARNING, LOG_WARNING);
      break;
    case 3679:
      HASH_RETURN(0x619B30E96685FE5FLL, k_MCRYPT_DEV_RANDOM, MCRYPT_DEV_RANDOM);
      break;
    case 3685:
      HASH_RETURN(0x3A4F748BEA361E65LL, k_T_IS_GREATER_OR_EQUAL, T_IS_GREATER_OR_EQUAL);
      break;
    case 3689:
      HASH_RETURN(0x3C7ED822E90FAE69LL, k_MW_BoxFilter, MW_BoxFilter);
      HASH_RETURN(0x13003A75EDE89E69LL, k_T_DO, T_DO);
      break;
    case 3690:
      HASH_RETURN(0x71D054A19E8F6E6ALL, k_PATH_SEPARATOR, PATH_SEPARATOR);
      HASH_RETURN(0x449C6C5701CEFE6ALL, k_U_REGEX_MAX_LT_MIN, U_REGEX_MAX_LT_MIN);
      break;
    case 3691:
      HASH_RETURN(0x61E930FBB9D0FE6BLL, k_STREAM_PF_UNIX, STREAM_PF_UNIX);
      HASH_RETURN(0x405D15D732BF0E6BLL, k_SOCKET_EMLINK, SOCKET_EMLINK);
      HASH_RETURN(0x1356B4A73A1B2E6BLL, k_XHPROF_FLAGS_CPU, XHPROF_FLAGS_CPU);
      break;
    case 3692:
      HASH_RETURN(0x6F2F949C502AEE6CLL, k_U_MISMATCHED_SEGMENT_DELIMITERS, U_MISMATCHED_SEGMENT_DELIMITERS);
      break;
    case 3694:
      HASH_RETURN(0x139C3A8F7E600E6ELL, k_XML_DTD_NODE, XML_DTD_NODE);
      break;
    case 3695:
      HASH_RETURN(0x11469A6B4A81DE6FLL, k_MW_SouthEastGravity, MW_SouthEastGravity);
      break;
    case 3703:
      HASH_RETURN(0x41892F9BFCC91E77LL, k_MW_XorCompositeOp, MW_XorCompositeOp);
      break;
    case 3704:
      HASH_RETURN(0x490B6C273B019E78LL, k_OCI_FETCHSTATEMENT_BY_COLUMN, OCI_FETCHSTATEMENT_BY_COLUMN);
      break;
    case 3705:
      HASH_RETURN(0x58DA5C816A9D0E79LL, k_LC_COLLATE, LC_COLLATE);
      HASH_RETURN(0x6FF1581687418E79LL, k_MYSQLI_BLOB_FLAG, MYSQLI_BLOB_FLAG);
      break;
    case 3706:
      HASH_RETURN(0x6DC0AE1806411E7ALL, k_SOCKET_EBADMSG, SOCKET_EBADMSG);
      break;
    case 3707:
      HASH_RETURN(0x72F3AC0339F5BE7BLL, k_U_MALFORMED_UNICODE_ESCAPE, U_MALFORMED_UNICODE_ESCAPE);
      break;
    case 3709:
      HASH_RETURN(0x158314442E45DE7DLL, k_LOG_LOCAL0, LOG_LOCAL0);
      HASH_RETURN(0x05CDAC3CFDEC7E7DLL, k_DATE_RFC1036, DATE_RFC1036);
      break;
    case 3710:
      HASH_RETURN(0x4BD825B1356B0E7ELL, k_MCC_ARG_PROXY, MCC_ARG_PROXY);
      break;
    case 3716:
      HASH_RETURN(0x46C414938F663E84LL, k_UNKNOWN_TYPE, UNKNOWN_TYPE);
      HASH_RETURN(0x071FB0702D5D7E84LL, k_MW_TypeFatalError, MW_TypeFatalError);
      break;
    case 3718:
      HASH_RETURN(0x0DA0D99299360E86LL, k_XSD_DATE, XSD_DATE);
      break;
    case 3719:
      HASH_RETURN(0x363E537C1B1B6E87LL, k_AF_INET, AF_INET);
      HASH_RETURN(0x77967753B3F3AE87LL, k_MYSQLI_TYPE_BLOB, MYSQLI_TYPE_BLOB);
      break;
    case 3721:
      HASH_RETURN(0x0E3AFA272D679E89LL, k_M_LN2, M_LN2);
      break;
    case 3724:
      HASH_RETURN(0x306E85E598280E8CLL, k_MW_GrayscaleMatteType, MW_GrayscaleMatteType);
      break;
    case 3725:
      HASH_RETURN(0x587E1718D2E0BE8DLL, k_YESEXPR, YESEXPR);
      break;
    case 3726:
      HASH_RETURN(0x1740AE3316108E8ELL, k_SIGABRT, SIGABRT);
      break;
    case 3738:
      HASH_RETURN(0x4D0D7C94AB774E9ALL, k_CURLOPT_QUOTE, CURLOPT_QUOTE);
      break;
    case 3741:
      HASH_RETURN(0x4922A66A0E802E9DLL, k_OCI_EXACT_FETCH, OCI_EXACT_FETCH);
      break;
    case 3743:
      HASH_RETURN(0x5BB76BAE17DACE9FLL, k_IMG_FILTER_CONTRAST, IMG_FILTER_CONTRAST);
      break;
    case 3744:
      HASH_RETURN(0x39C728C412DEBEA0LL, k_IMAGETYPE_IFF, IMAGETYPE_IFF);
      break;
    case 3748:
      HASH_RETURN(0x42C56034DD1CFEA4LL, k_MW_UndefinedInterlace, MW_UndefinedInterlace);
      break;
    case 3750:
      HASH_RETURN(0x052C698265DBDEA6LL, k_XML_ERROR_BINARY_ENTITY_REF, XML_ERROR_BINARY_ENTITY_REF);
      break;
    case 3752:
      HASH_RETURN(0x2FD78BD3739B6EA8LL, k_U_DIFFERENT_UCA_VERSION, U_DIFFERENT_UCA_VERSION);
      break;
    case 3753:
      HASH_RETURN(0x43C1A340EAE87EA9LL, k_PKCS7_BINARY, PKCS7_BINARY);
      break;
    case 3754:
      HASH_RETURN(0x7E3C4FDB23064EAALL, k_GD_VERSION, GD_VERSION);
      break;
    case 3755:
      HASH_RETURN(0x40CA2A80486C2EABLL, k_T_IS_IDENTICAL, T_IS_IDENTICAL);
      break;
    case 3761:
      HASH_RETURN(0x64F156C9F2FC1EB1LL, k_SO_DONTROUTE, SO_DONTROUTE);
      HASH_RETURN(0x24FF3413EB09CEB1LL, k_CURLINFO_TOTAL_TIME, CURLINFO_TOTAL_TIME);
      HASH_RETURN(0x4075F95101C36EB1LL, k_MB_CASE_TITLE, MB_CASE_TITLE);
      break;
    case 3762:
      HASH_RETURN(0x5DB146EA0F090EB2LL, k_MW_CoderError, MW_CoderError);
      break;
    case 3763:
      HASH_RETURN(0x676BE5B93694EEB3LL, k_UCOL_TERTIARY, UCOL_TERTIARY);
      HASH_RETURN(0x56AFE5B9EECAAEB3LL, k_MW_ImageWarning, MW_ImageWarning);
      break;
    case 3764:
      HASH_RETURN(0x6075626EA8093EB4LL, k_IMAGETYPE_JB2, IMAGETYPE_JB2);
      HASH_RETURN(0x58D89A6449014EB4LL, k_MCRYPT_PANAMA, MCRYPT_PANAMA);
      break;
    case 3766:
      HASH_RETURN(0x3B52041CCA765EB6LL, k_T_IF, T_IF);
      break;
    case 3767:
      HASH_RETURN(0x17EF63EAD33F2EB7LL, k_LIBXML_ERR_WARNING, LIBXML_ERR_WARNING);
      HASH_RETURN(0x625E97D83FE3AEB7LL, k_XSD_ANYURI, XSD_ANYURI);
      break;
    case 3769:
      HASH_RETURN(0x2BCF528CAA6C2EB9LL, k_XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF, XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF);
      break;
    case 3770:
      HASH_RETURN(0x046E4710E1706EBALL, k_CURL_HTTP_VERSION_1_0, CURL_HTTP_VERSION_1_0);
      break;
    case 3771:
      HASH_RETURN(0x6DA907C87A77FEBBLL, k_U_REGEX_BAD_INTERVAL, U_REGEX_BAD_INTERVAL);
      break;
    case 3775:
      HASH_RETURN(0x041BF5F1E6FA8EBFLL, k_MW_DrawFatalError, MW_DrawFatalError);
      break;
    case 3779:
      HASH_RETURN(0x53A71C8D70072EC3LL, k_CURLOPT_PROXYUSERPWD, CURLOPT_PROXYUSERPWD);
      break;
    case 3780:
      HASH_RETURN(0x65F3F80E3353BEC4LL, k_OPENSSL_NO_PADDING, OPENSSL_NO_PADDING);
      HASH_RETURN(0x4C8EA3F8E5994EC4LL, k_T_CLOSE_TAG, T_CLOSE_TAG);
      break;
    case 3781:
      HASH_RETURN(0x4EE18378D076BEC5LL, k_LOG_LOCAL2, LOG_LOCAL2);
      break;
    case 3784:
      HASH_RETURN(0x3DD29A895FABFEC8LL, k_CURLE_BAD_CONTENT_ENCODING, CURLE_BAD_CONTENT_ENCODING);
      HASH_RETURN(0x2BE32D01E84F3EC8LL, k_MYSQLI_TYPE_DATETIME, MYSQLI_TYPE_DATETIME);
      break;
    case 3785:
      HASH_RETURN(0x19EEBD1A9E93BEC9LL, k_CURLE_FTP_COULDNT_USE_REST, CURLE_FTP_COULDNT_USE_REST);
      break;
    case 3790:
      HASH_RETURN(0x71E2B4F0E335FECELL, k_U_STATE_TOO_OLD_ERROR, U_STATE_TOO_OLD_ERROR);
      break;
    case 3793:
      HASH_RETURN(0x14EA5F6FD4892ED1LL, k_MW_PlaneInterlace, MW_PlaneInterlace);
      break;
    case 3794:
      HASH_RETURN(0x01A74DDCF6DD8ED2LL, k_U_MISSING_OPERATOR, U_MISSING_OPERATOR);
      break;
    case 3795:
      HASH_RETURN(0x69F0BD8218172ED3LL, k_MCC_SERVER_DOWN, MCC_SERVER_DOWN);
      break;
    case 3796:
      HASH_RETURN(0x6D9D3195E581CED4LL, k_PSFS_PASS_ON, PSFS_PASS_ON);
      break;
    case 3798:
      HASH_RETURN(0x521261F658D44ED6LL, k_CURLOPT_READFUNCTION, CURLOPT_READFUNCTION);
      break;
    case 3801:
      HASH_RETURN(0x04980D06D5D28ED9LL, k_CURLINFO_STARTTRANSFER_TIME, CURLINFO_STARTTRANSFER_TIME);
      break;
    case 3802:
      HASH_RETURN(0x4B4EC5983088DEDALL, k_T_MINUS_EQUAL, T_MINUS_EQUAL);
      break;
    case 3803:
      HASH_RETURN(0x403ABCC16F4F2EDBLL, k_DNS_A, DNS_A);
      break;
    case 3806:
      HASH_RETURN(0x774C4111D6F0CEDELL, k_T_CLONE, T_CLONE);
      break;
    case 3807:
      HASH_RETURN(0x6D4DA813591B2EDFLL, k_CURLINFO_CONTENT_TYPE, CURLINFO_CONTENT_TYPE);
      break;
    case 3808:
      HASH_RETURN(0x04B20664C7849EE0LL, k_MW_DrawError, MW_DrawError);
      break;
    case 3809:
      HASH_RETURN(0x3E54A25ACF621EE1LL, k_ALT_DIGITS, ALT_DIGITS);
      break;
    case 3810:
      HASH_RETURN(0x27166E4DB39CFEE2LL, k_MYSQLI_TYPE_ENUM, MYSQLI_TYPE_ENUM);
      break;
    case 3813:
      HASH_RETURN(0x62C692807F0BCEE5LL, k_OPENSSL_KEYTYPE_DSA, OPENSSL_KEYTYPE_DSA);
      break;
    case 3815:
      HASH_RETURN(0x29B47DC30B394EE7LL, k_MW_AllChannels, MW_AllChannels);
      break;
    case 3816:
      HASH_RETURN(0x73E6F0F221340EE8LL, k_EXIF_USE_MBSTRING, EXIF_USE_MBSTRING);
      break;
    case 3821:
      HASH_RETURN(0x0FEA059CA89E1EEDLL, k_OCI_SYSDBA, OCI_SYSDBA);
      break;
    case 3823:
      HASH_RETURN(0x5269C5EAD4C7AEEFLL, k_INFO_GENERAL, INFO_GENERAL);
      break;
    case 3824:
      HASH_RETURN(0x7F176E6ED0CA5EF0LL, k_PREG_OFFSET_CAPTURE, PREG_OFFSET_CAPTURE);
      break;
    case 3827:
      HASH_RETURN(0x3867CC5C75CD9EF3LL, k_IMG_JPEG, IMG_JPEG);
      break;
    case 3828:
      HASH_RETURN(0x2637AB3CFC3A5EF4LL, k_COUNT_NORMAL, COUNT_NORMAL);
      break;
    case 3830:
      HASH_RETURN(0x2FDF8F84934F3EF6LL, k_T_FMT, T_FMT);
      break;
    case 3831:
      HASH_RETURN(0x751E7F5F5D589EF7LL, k_MON_3, MON_3);
      break;
    case 3833:
      HASH_RETURN(0x760FEEC981CB1EF9LL, k_T_VARIABLE, T_VARIABLE);
      break;
    case 3835:
      HASH_RETURN(0x58FED4771ED61EFBLL, k_PATHINFO_DIRNAME, PATHINFO_DIRNAME);
      break;
    case 3837:
      HASH_RETURN(0x561EC5547B7FAEFDLL, k_CURLM_OK, CURLM_OK);
      break;
    case 3838:
      HASH_RETURN(0x249685C5CEF46EFELL, k_MW_ConcatenateMode, MW_ConcatenateMode);
      break;
    case 3840:
      HASH_RETURN(0x2769043A92972F00LL, k_MCRYPT_GOST, MCRYPT_GOST);
      break;
    case 3841:
      HASH_RETURN(0x008499341CD1DF01LL, k_SOCKET_E2BIG, SOCKET_E2BIG);
      break;
    case 3845:
      HASH_RETURN(0x5022DC35BDEFEF05LL, k_STREAM_CLIENT_PERSISTENT, STREAM_CLIENT_PERSISTENT);
      break;
    case 3849:
      HASH_RETURN(0x562453EADF708F09LL, k_CURLOPT_RETURNTRANSFER, CURLOPT_RETURNTRANSFER);
      break;
    case 3850:
      HASH_RETURN(0x0FDBC94DA31DFF0ALL, k_MW_YPbPrColorspace, MW_YPbPrColorspace);
      break;
    case 3853:
      HASH_RETURN(0x4F241752C9FAEF0DLL, k_MYSQLI_TYPE_LONG, MYSQLI_TYPE_LONG);
      break;
    case 3854:
      HASH_RETURN(0x3C7D69E227DD9F0ELL, k_PRIO_PGRP, PRIO_PGRP);
      break;
    case 3855:
      HASH_RETURN(0x0CCF96C5EF255F0FLL, k_LOG_NEWS, LOG_NEWS);
      break;
    case 3858:
      HASH_RETURN(0x16EE3956BC818F12LL, k_CURLE_OK, CURLE_OK);
      break;
    case 3860:
      HASH_RETURN(0x4090887392D0FF14LL, k_MW_SegmentPreview, MW_SegmentPreview);
      break;
    case 3864:
      HASH_RETURN(0x607F7ED62648BF18LL, k_INFO_ALL, INFO_ALL);
      break;
    case 3868:
      HASH_RETURN(0x3397DAF409349F1CLL, k_OPENSSL_ALGO_MD5, OPENSSL_ALGO_MD5);
      break;
    case 3874:
      HASH_RETURN(0x25FA0806735FDF22LL, k_IMAGETYPE_TIFF_II, IMAGETYPE_TIFF_II);
      break;
    case 3876:
      HASH_RETURN(0x7720C773295D5F24LL, k_MYSQL_ASSOC, MYSQL_ASSOC);
      break;
    case 3877:
      HASH_RETURN(0x3CA9C7BBDEB4BF25LL, k_T_USE, T_USE);
      break;
    case 3883:
      HASH_RETURN(0x56D2E35CABB23F2BLL, k_STREAM_IS_URL, STREAM_IS_URL);
      break;
    case 3884:
      HASH_RETURN(0x5A4A7283F0400F2CLL, k_MW_SharpenPreview, MW_SharpenPreview);
      break;
    case 3885:
      HASH_RETURN(0x647F1A783511DF2DLL, k_MW_ShadePreview, MW_ShadePreview);
      break;
    case 3887:
      HASH_RETURN(0x23654A24957D4F2FLL, k_T_WHILE, T_WHILE);
      break;
    case 3889:
      HASH_RETURN(0x10F9066DDD41AF31LL, k_DOM_INVALID_MODIFICATION_ERR, DOM_INVALID_MODIFICATION_ERR);
      break;
    case 3891:
      HASH_RETURN(0x357C3B3722523F33LL, k_RADIXCHAR, RADIXCHAR);
      break;
    case 3892:
      HASH_RETURN(0x06F1EFB64D4D3F34LL, k_STREAM_NOTIFY_PROGRESS, STREAM_NOTIFY_PROGRESS);
      HASH_RETURN(0x64E5A69F5D8A8F34LL, k_MW_ClearCompositeOp, MW_ClearCompositeOp);
      break;
    case 3894:
      HASH_RETURN(0x747339E898926F36LL, k_MCRYPT_THREEWAY, MCRYPT_THREEWAY);
      break;
    case 3895:
      HASH_RETURN(0x6D955FB67B9C4F37LL, k_XML_ATTRIBUTE_NOTATION, XML_ATTRIBUTE_NOTATION);
      break;
    case 3896:
      HASH_RETURN(0x655B612DD9AB2F38LL, k_UPLOAD_ERR_PARTIAL, UPLOAD_ERR_PARTIAL);
      break;
    case 3898:
      HASH_RETURN(0x30A4954899851F3ALL, k_INFO_LICENSE, INFO_LICENSE);
      break;
    case 3899:
      HASH_RETURN(0x371038F4A8DA7F3BLL, k_U_PATTERN_SYNTAX_ERROR, U_PATTERN_SYNTAX_ERROR);
      break;
    case 3902:
      HASH_RETURN(0x35D35C56CB5F8F3ELL, k_MCRYPT_DES, MCRYPT_DES);
      break;
    case 3904:
      HASH_RETURN(0x2906770823A28F40LL, k_DAY_1, DAY_1);
      HASH_RETURN(0x3777F36C2B19DF40LL, k_T_BAD_CHARACTER, T_BAD_CHARACTER);
      break;
    case 3913:
      HASH_RETURN(0x34C202AA7FE72F49LL, k_CURLE_TOO_MANY_REDIRECTS, CURLE_TOO_MANY_REDIRECTS);
      break;
    case 3916:
      HASH_RETURN(0x5D199BE1E3F8FF4CLL, k_SOAP_AUTHENTICATION_DIGEST, SOAP_AUTHENTICATION_DIGEST);
      HASH_RETURN(0x0C0959B4A422BF4CLL, k_MYSQLI_TYPE_DATE, MYSQLI_TYPE_DATE);
      break;
    case 3918:
      HASH_RETURN(0x726744A927126F4ELL, k_THOUSEP, THOUSEP);
      break;
    case 3919:
      HASH_RETURN(0x0A465CA27767DF4FLL, k_CURLOPT_FILETIME, CURLOPT_FILETIME);
      HASH_RETURN(0x09241EB8D846EF4FLL, k_CURLE_SSL_CACERT, CURLE_SSL_CACERT);
      break;
    case 3920:
      HASH_RETURN(0x12BF3928F2DF7F50LL, k_MCRYPT_WAKE, MCRYPT_WAKE);
      HASH_RETURN(0x499537B9DF697F50LL, k_U_ERROR_WARNING_START, U_ERROR_WARNING_START);
      break;
    case 3921:
      HASH_RETURN(0x50FAF3A45B71EF51LL, k_XSD_GDAY, XSD_GDAY);
      HASH_RETURN(0x1661FDE02F75AF51LL, k_X509_PURPOSE_CRL_SIGN, X509_PURPOSE_CRL_SIGN);
      break;
    case 3924:
      HASH_RETURN(0x60886938B3A8DF54LL, k_CURL_IPRESOLVE_V4, CURL_IPRESOLVE_V4);
      break;
    case 3935:
      HASH_RETURN(0x4E1929443836FF5FLL, k_PHP_URL_FRAGMENT, PHP_URL_FRAGMENT);
      HASH_RETURN(0x0307698D4C121F5FLL, k_MW_TriangleFilter, MW_TriangleFilter);
      break;
    case 3939:
      HASH_RETURN(0x7176D0B448AB7F63LL, k_MCC_SERVER_RETRY_TMO_MS, MCC_SERVER_RETRY_TMO_MS);
      HASH_RETURN(0x0BBCEDF6A8E09F63LL, k_XML_DOCUMENT_TYPE_NODE, XML_DOCUMENT_TYPE_NODE);
      break;
    case 3943:
      HASH_RETURN(0x2C244A0A5099CF67LL, k_SOMAXCONN, SOMAXCONN);
      HASH_RETURN(0x6CF93FC8650B6F67LL, k_MW_Group4Compression, MW_Group4Compression);
      break;
    case 3949:
      HASH_RETURN(0x5ACE57FCE6544F6DLL, k_SO_OOBINLINE, SO_OOBINLINE);
      break;
    case 3950:
      HASH_RETURN(0x055A8EEDD3AF2F6ELL, k_CURLOPT_SSLKEYTYPE, CURLOPT_SSLKEYTYPE);
      HASH_RETURN(0x5DC45A6B785C7F6ELL, k_T_ECHO, T_ECHO);
      HASH_RETURN(0x7A55CA35812E6F6ELL, k_MYSQLI_TYPE_VAR_STRING, MYSQLI_TYPE_VAR_STRING);
      break;
    case 3956:
      HASH_RETURN(0x7FB5FB40CEEFFF74LL, k_U_NO_WRITE_PERMISSION, U_NO_WRITE_PERMISSION);
      break;
    case 3959:
      HASH_RETURN(0x63561DDEAF3E4F77LL, k_MYSQL_CLIENT_SSL, MYSQL_CLIENT_SSL);
      break;
    case 3961:
      HASH_RETURN(0x6438D83AFCA71F79LL, k_ZEND_THREAD_SAFE, ZEND_THREAD_SAFE);
      break;
    case 3962:
      HASH_RETURN(0x608F0CF6B908CF7ALL, k_XML_ATTRIBUTE_ID, XML_ATTRIBUTE_ID);
      break;
    case 3965:
      HASH_RETURN(0x2074C93458FBBF7DLL, k_UCOL_SECONDARY, UCOL_SECONDARY);
      break;
    case 3966:
      HASH_RETURN(0x60C8A6D94CADAF7ELL, k_XSD_STRING, XSD_STRING);
      HASH_RETURN(0x72C1827C5B3BCF7ELL, k_MW_SaturationPreview, MW_SaturationPreview);
      break;
    case 3972:
      HASH_RETURN(0x13CEDD7D6F4CEF84LL, k_T_PAAMAYIM_NEKUDOTAYIM, T_PAAMAYIM_NEKUDOTAYIM);
      break;
    case 3976:
      HASH_RETURN(0x1BDED1F33B77DF88LL, k_T_DOUBLE_ARROW, T_DOUBLE_ARROW);
      break;
    case 3977:
      HASH_RETURN(0x1B6710D13E73EF89LL, k_MCRYPT_MODE_NOFB, MCRYPT_MODE_NOFB);
      HASH_RETURN(0x549014A650F47F89LL, k_MW_AtopCompositeOp, MW_AtopCompositeOp);
      break;
    case 3981:
      HASH_RETURN(0x4882E302ABFB2F8DLL, k_CURLOPT_CONNECTTIMEOUT, CURLOPT_CONNECTTIMEOUT);
      break;
    case 3982:
      HASH_RETURN(0x561B993E0F7CFF8ELL, k_U_INDEX_OUTOFBOUNDS_ERROR, U_INDEX_OUTOFBOUNDS_ERROR);
      break;
    case 3985:
      HASH_RETURN(0x78463112BE739F91LL, k_CONNECTION_TIMEOUT, CONNECTION_TIMEOUT);
      break;
    case 3987:
      HASH_RETURN(0x051EE62C6B226F93LL, k_STREAM_IPPROTO_RAW, STREAM_IPPROTO_RAW);
      break;
    case 3989:
      HASH_RETURN(0x2919569163A4AF95LL, k_MW_OpacityChannel, MW_OpacityChannel);
      break;
    case 3991:
      HASH_RETURN(0x2ADC01792DF55F97LL, k_MW_UltraCondensedStretch, MW_UltraCondensedStretch);
      break;
    case 3993:
      HASH_RETURN(0x33C5B73ECF053F99LL, k_PHP_SHLIB_SUFFIX, PHP_SHLIB_SUFFIX);
      break;
    case 3994:
      HASH_RETURN(0x670D024730A7DF9ALL, k_CURL_TIMECOND_IFUNMODSINCE, CURL_TIMECOND_IFUNMODSINCE);
      break;
    case 3998:
      HASH_RETURN(0x0459D9A18F091F9ELL, k_MYSQLI_PRI_KEY_FLAG, MYSQLI_PRI_KEY_FLAG);
      break;
    case 3999:
      HASH_RETURN(0x7B7186B0D12CEF9FLL, k_DAY_5, DAY_5);
      break;
    case 4001:
      HASH_RETURN(0x71EFB3619963EFA1LL, k_DOMSTRING_SIZE_ERR, DOMSTRING_SIZE_ERR);
      break;
    case 4003:
      HASH_RETURN(0x7A4F8E7E110EEFA3LL, k_MW_MitchellFilter, MW_MitchellFilter);
      break;
    case 4007:
      HASH_RETURN(0x1E1E53CAB3A5DFA7LL, k_OCI_B_INT, OCI_B_INT);
      break;
    case 4008:
      HASH_RETURN(0x4BE0A36552A04FA8LL, k_T_ELSEIF, T_ELSEIF);
      break;
    case 4009:
      HASH_RETURN(0x564E222501222FA9LL, k_T_ARRAY, T_ARRAY);
      break;
    case 4011:
      HASH_RETURN(0x50238391D66C4FABLL, k_CURLOPT_HTTPAUTH, CURLOPT_HTTPAUTH);
      HASH_RETURN(0x1D0E4D445ED42FABLL, k_U_REGEX_UNIMPLEMENTED, U_REGEX_UNIMPLEMENTED);
      break;
    case 4013:
      HASH_RETURN(0x6312D84676288FADLL, k_GLOB_BRACE, GLOB_BRACE);
      break;
    case 4014:
      HASH_RETURN(0x3E0233217F575FAELL, k_MW_ModulateCompositeOp, MW_ModulateCompositeOp);
      break;
    case 4016:
      HASH_RETURN(0x77049D04A015CFB0LL, k_CURLE_SSL_CONNECT_ERROR, CURLE_SSL_CONNECT_ERROR);
      break;
    case 4020:
      HASH_RETURN(0x2B900B2495727FB4LL, k_MW_BlobWarning, MW_BlobWarning);
      break;
    case 4022:
      HASH_RETURN(0x339412C5F7495FB6LL, k_MYSQLI_TYPE_SHORT, MYSQLI_TYPE_SHORT);
      break;
    case 4025:
      HASH_RETURN(0x193E526993AB4FB9LL, k_XSD_UNSIGNEDINT, XSD_UNSIGNEDINT);
      HASH_RETURN(0x38F861239B0EFFB9LL, k_T_INLINE_HTML, T_INLINE_HTML);
      break;
    case 4031:
      HASH_RETURN(0x4D61C903BCFCFFBFLL, k_SO_LINGER, SO_LINGER);
      HASH_RETURN(0x1FB47E4AED84BFBFLL, k_SOCKET_EDESTADDRREQ, SOCKET_EDESTADDRREQ);
      break;
    case 4033:
      HASH_RETURN(0x678C7AD918180FC1LL, k_LIBXML_XINCLUDE, LIBXML_XINCLUDE);
      HASH_RETURN(0x1DD087C403394FC1LL, k_MW_RoundJoin, MW_RoundJoin);
      break;
    case 4036:
      HASH_RETURN(0x482BF7BC7B15BFC4LL, k_T_CONST, T_CONST);
      break;
    case 4039:
      HASH_RETURN(0x1A3B8F1D6084CFC7LL, k_MCC_ARG_DGRAM_NTRIES, MCC_ARG_DGRAM_NTRIES);
      HASH_RETURN(0x484FD8889240CFC7LL, k_MCC_CONSISTENCY_MATCH_HITS, MCC_CONSISTENCY_MATCH_HITS);
      break;
    case 4040:
      HASH_RETURN(0x79AE2B0243A62FC8LL, k_OCI_TEMP_CLOB, OCI_TEMP_CLOB);
      break;
    case 4045:
      HASH_RETURN(0x3D1197127A5E0FCDLL, k_MW_UndefinedAlign, MW_UndefinedAlign);
      HASH_RETURN(0x1103959ABEBC4FCDLL, k_CLOCK_MONOTONIC, CLOCK_MONOTONIC);
      break;
    case 4048:
      HASH_RETURN(0x05978953F6931FD0LL, k_OPENSSL_KEYTYPE_RSA, OPENSSL_KEYTYPE_RSA);
      HASH_RETURN(0x055211EDDE948FD0LL, k_MYSQLI_SET_CHARSET_NAME, MYSQLI_SET_CHARSET_NAME);
      break;
    case 4049:
      HASH_RETURN(0x64724464BCA1EFD1LL, k_CURLOPT_TIMEOUT, CURLOPT_TIMEOUT);
      HASH_RETURN(0x310C6D062D9BFFD1LL, k_SQLT_CHR, SQLT_CHR);
      break;
    case 4052:
      HASH_RETURN(0x3ED583CF6153BFD4LL, k_SIGTRAP, SIGTRAP);
      break;
    case 4053:
      HASH_RETURN(0x2F829788E900DFD5LL, k_ASSERT_CALLBACK, ASSERT_CALLBACK);
      HASH_RETURN(0x6375BADBAD5E2FD5LL, k_PREG_PATTERN_ORDER, PREG_PATTERN_ORDER);
      break;
    case 4055:
      HASH_RETURN(0x55A8589222089FD7LL, k_MCRYPT_3DES, MCRYPT_3DES);
      HASH_RETURN(0x023EEFFE2C1F4FD7LL, k_U_MULTIPLE_PERCENT_SYMBOLS, U_MULTIPLE_PERCENT_SYMBOLS);
      break;
    case 4058:
      HASH_RETURN(0x341D6D9590056FDALL, k_WSDL_CACHE_DISK, WSDL_CACHE_DISK);
      break;
    case 4060:
      HASH_RETURN(0x2D0647CFC259DFDCLL, k_ABDAY_7, ABDAY_7);
      break;
    case 4062:
      HASH_RETURN(0x3C8D16E92D328FDELL, k_CURLOPT_LOW_SPEED_LIMIT, CURLOPT_LOW_SPEED_LIMIT);
      HASH_RETURN(0x06B7CD4014BFAFDELL, k_U_PARSE_ERROR_START, U_PARSE_ERROR_START);
      break;
    case 4065:
      HASH_RETURN(0x62635468A89CEFE1LL, k_T_PRINT, T_PRINT);
      break;
    case 4069:
      HASH_RETURN(0x62D75B029DE29FE5LL, k_U_BRK_SEMICOLON_EXPECTED, U_BRK_SEMICOLON_EXPECTED);
      break;
    case 4071:
      HASH_RETURN(0x2E6828A987B93FE7LL, k_CURLCLOSEPOLICY_CALLBACK, CURLCLOSEPOLICY_CALLBACK);
      break;
    case 4073:
      HASH_RETURN(0x3CB7E2EF1C506FE9LL, k_MW_EdgeDetectPreview, MW_EdgeDetectPreview);
      break;
    case 4075:
      HASH_RETURN(0x2B32349F3EB0DFEBLL, k_MW_CopyBlueCompositeOp, MW_CopyBlueCompositeOp);
      break;
    case 4076:
      HASH_RETURN(0x2945A3EB70577FECLL, k_LIBXML_NSCLEAN, LIBXML_NSCLEAN);
      break;
    case 4079:
      HASH_RETURN(0x1731A36EFEE33FEFLL, k_MW_EvenOddRule, MW_EvenOddRule);
      break;
    case 4083:
      HASH_RETURN(0x535FA2057826AFF3LL, k_MW_ZipCompression, MW_ZipCompression);
      break;
    case 4085:
      HASH_RETURN(0x4FA2748CCA81BFF5LL, k_OPENSSL_ALGO_MD4, OPENSSL_ALGO_MD4);
      break;
    case 4088:
      HASH_RETURN(0x3A0888E313510FF8LL, k_ABMON_2, ABMON_2);
      break;
    case 4094:
      HASH_RETURN(0x2DFDB60E31F90FFELL, k_STREAM_MUST_SEEK, STREAM_MUST_SEEK);
      break;
    case 4095:
      HASH_RETURN(0x1CFC3805FEC22FFFLL, k_LOG_NOTICE, LOG_NOTICE);
      break;
    default:
      break;
  }
  return name;
}

///////////////////////////////////////////////////////////////////////////////
}
