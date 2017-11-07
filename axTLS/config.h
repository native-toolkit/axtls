/*
 * Automatically generated header file: don't edit
 */

#define HAVE_DOT_CONFIG 1
#ifdef WIN32
#define CONFIG_PLATFORM_CYGWIN 1
#define CONFIG_PLATFORM_WIN32 1
#define STDCALL __stdcall
#else
#define CONFIG_PLATFORM_LINUX 1
#undef CONFIG_PLATFORM_CYGWIN
#undef CONFIG_PLATFORM_WIN32
#endif

/*
 * General Configuration
 */
#define PREFIX "/usr/local"
#undef CONFIG_DEBUG
#define CONFIG_STRIP_UNWANTED_SECTIONS 1
#undef CONFIG_VISUAL_STUDIO_7_0
#undef CONFIG_VISUAL_STUDIO_8_0
#undef CONFIG_VISUAL_STUDIO_10_0
#define CONFIG_VISUAL_STUDIO_7_0_BASE ""
#define CONFIG_VISUAL_STUDIO_8_0_BASE ""
#define CONFIG_VISUAL_STUDIO_10_0_BASE ""
#define CONFIG_EXTRA_CFLAGS_OPTIONS ""
#define CONFIG_EXTRA_LDFLAGS_OPTIONS ""

/*
 * SSL Library
 */
#undef CONFIG_SSL_SERVER_ONLY
#undef CONFIG_SSL_CERT_VERIFICATION
#undef CONFIG_SSL_ENABLE_CLIENT
#define CONFIG_SSL_FULL_MODE 1
#undef CONFIG_SSL_SKELETON_MODE
#undef CONFIG_SSL_PROT_LOW
#define CONFIG_SSL_PROT_MEDIUM 1
#undef CONFIG_SSL_PROT_HIGH
#define CONFIG_SSL_USE_DEFAULT_KEY 1
#define CONFIG_SSL_PRIVATE_KEY_LOCATION ""
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD ""
#define CONFIG_SSL_X509_CERT_LOCATION ""
#undef CONFIG_SSL_GENERATE_X509_CERT
#define CONFIG_SSL_X509_COMMON_NAME ""
#define CONFIG_SSL_X509_ORGANIZATION_NAME ""
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME ""
#define CONFIG_SSL_HAS_PEM 1
#define CONFIG_SSL_USE_PKCS12 1
#define CONFIG_SSL_EXPIRY_TIME 24
#define CONFIG_X509_MAX_CA_CERTS 150
#define CONFIG_SSL_MAX_CERTS 3
#define CONFIG_SSL_CTX_MUTEXING 1

#ifdef HX_MACOS
#define CONFIG_USE_DEV_URANDOM 1
#else
#undef CONFIG_USE_DEV_URANDOM
#endif

#undef CONFIG_WIN32_USE_CRYPTO_LIB
#undef CONFIG_OPENSSL_COMPATIBLE
#undef CONFIG_PERFORMANCE_TESTING
#undef CONFIG_SSL_TEST
#undef CONFIG_AXTLSWRAP
#undef CONFIG_AXHTTPD
#undef CONFIG_HTTP_STATIC_BUILD
#define CONFIG_HTTP_PORT 
#define CONFIG_HTTP_HTTPS_PORT 
#define CONFIG_HTTP_SESSION_CACHE_SIZE 
#define CONFIG_HTTP_WEBROOT ""
#define CONFIG_HTTP_TIMEOUT 
#undef CONFIG_HTTP_HAS_CGI
#define CONFIG_HTTP_CGI_EXTENSIONS ""
#undef CONFIG_HTTP_ENABLE_LUA
#define CONFIG_HTTP_LUA_PREFIX ""
#undef CONFIG_HTTP_BUILD_LUA
#define CONFIG_HTTP_CGI_LAUNCHER ""
#undef CONFIG_HTTP_DIRECTORIES
#undef CONFIG_HTTP_HAS_AUTHORIZATION
#undef CONFIG_HTTP_HAS_IPV6
#undef CONFIG_HTTP_ENABLE_DIFFERENT_USER
#define CONFIG_HTTP_USER ""
#undef CONFIG_HTTP_VERBOSE
#undef CONFIG_HTTP_IS_DAEMON

/*
 * Language Bindings
 */
#undef CONFIG_BINDINGS
#undef CONFIG_CSHARP_BINDINGS
#undef CONFIG_VBNET_BINDINGS
#define CONFIG_DOT_NET_FRAMEWORK_BASE ""
#undef CONFIG_JAVA_BINDINGS
#define CONFIG_JAVA_HOME ""
#undef CONFIG_PERL_BINDINGS
#define CONFIG_PERL_CORE ""
#define CONFIG_PERL_LIB ""
#undef CONFIG_LUA_BINDINGS
#define CONFIG_LUA_CORE ""

/*
 * Samples
 */
#define CONFIG_SAMPLES 1
#define CONFIG_C_SAMPLES 1
#undef CONFIG_CSHARP_SAMPLES
#undef CONFIG_VBNET_SAMPLES
#undef CONFIG_JAVA_SAMPLES
#undef CONFIG_PERL_SAMPLES
#undef CONFIG_LUA_SAMPLES

/*
 * BigInt Options
 */
#ifndef WIN32
#include <stdint.h>
#else
typedef unsigned int uint32_t;
typedef unsigned __int64 uint64_t;
typedef __int64 int64_t;
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef signed short int16_t;
#endif

#undef CONFIG_BIGINT_CLASSICAL
#undef CONFIG_BIGINT_MONTGOMERY
#define CONFIG_BIGINT_BARRETT 1
#define CONFIG_BIGINT_CRT 1
#undef CONFIG_BIGINT_KARATSUBA
#define MUL_KARATSUBA_THRESH 
#define SQU_KARATSUBA_THRESH 
#define CONFIG_BIGINT_SLIDING_WINDOW 1
#define CONFIG_BIGINT_SQUARE 1
#undef CONFIG_BIGINT_CHECK_ON
#define CONFIG_INTEGER_32BIT 1
#undef CONFIG_INTEGER_16BIT
#undef CONFIG_INTEGER_8BIT
