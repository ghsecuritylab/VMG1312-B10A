/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* in-kernel NAT-T is broken */
/* #undef BROKEN_NATT */

/* If printf doesn't support %zu. */
/* #undef BROKEN_PRINTF */

/* Enable admin port */
#define ENABLE_ADMINPORT /**/

/* Enable dead peer detection */
#define ENABLE_DPD /**/

/* IKE fragmentation support */
#define ENABLE_FRAG /**/

/* Hybrid authentication support */
#define ENABLE_HYBRID /**/

/* Enable NAT-Traversal */
#define ENABLE_NATT /**/

/* Enable NAT-Traversal draft 00 */
#define ENABLE_NATT_00 /**/

/* Enable NAT-Traversal draft 01 */
/* #undef ENABLE_NATT_01 */

/* Enable NAT-Traversal draft 02 */
#define ENABLE_NATT_02 /**/

/* Enable NAT-Traversal draft 03 */
/* #undef ENABLE_NATT_03 */

/* Enable NAT-Traversal draft 04 */
/* #undef ENABLE_NATT_04 */

/* Enable NAT-Traversal draft 05 */
/* #undef ENABLE_NATT_05 */

/* Enable NAT-Traversal draft 06 */
/* #undef ENABLE_NATT_06 */

/* Enable NAT-Traversal draft 07 */
/* #undef ENABLE_NATT_07 */

/* Enable NAT-Traversal draft 08 */
/* #undef ENABLE_NATT_08 */

/* Enable NAT-Traversal RFC version */
#define ENABLE_NATT_RFC /**/

/* Enable samode-unspec */
/* #undef ENABLE_SAMODE_UNSPECIFIED */

/* Enable statictics */
/* #undef ENABLE_STATS */

/* Have a monotonic clock */
#define HAVE_CLOCK_MONOTONIC /**/

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Have __func__ macro */
#define HAVE_FUNC_MACRO /**/

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Enable GSS API */
/* #undef HAVE_GSSAPI */

/* Have iconv using const */
/* #undef HAVE_ICONV_2ND_CONST */

/* Define to 1 if you have the `iconv_open' function. */
/* #undef HAVE_ICONV_OPEN */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Have ipsec_policy_t */
/* #undef HAVE_IPSEC_POLICY_T */

/* Hybrid authentication uses LDAP */
/* #undef HAVE_LIBLDAP */

/* Hybrid authentication uses PAM */
/* #undef HAVE_LIBPAM */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <openssl/aes.h> header file. */
#define HAVE_OPENSSL_AES_H 1

/* Define to 1 if you have the <openssl/camellia.h> header file. */
/* #undef HAVE_OPENSSL_CAMELLIA_H */

/* Define to 1 if you have the <openssl/engine.h> header file. */
#define HAVE_OPENSSL_ENGINE_H 1

/* Define to 1 if you have the <openssl/idea.h> header file. */
/* #undef HAVE_OPENSSL_IDEA_H */

/* Define to 1 if you have the <openssl/rc5.h> header file. */
/* #undef HAVE_OPENSSL_RC5_H */

/* Define to 1 if you have the `pam_start' function. */
/* #undef HAVE_PAM_START */

/* Are PF_KEY policy priorities supported? */
#define HAVE_PFKEY_POLICY_PRIORITY /**/

/* Have forward policy */
#define HAVE_POLICY_FWD /**/

/* Define to 1 if you have the `rad_create_request' function. */
#define HAVE_RAD_CREATE_REQUEST 1

/* Is readline available? */
/* #undef HAVE_READLINE */

/* Enable Security Context */
/* #undef HAVE_SECCTX */

/* Define to 1 if you have the `select' function. */
/* #undef HAVE_SELECT */

/* sha2 is defined in sha.h */
/* #undef HAVE_SHA2_IN_SHA_H */

/* Define to 1 if you have the <shadow.h> header file. */
/* #undef HAVE_SHADOW_H */

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Support IPv6 */
/* #undef INET6 */

/* Use advanced IPv6 API */
/* #undef INET6_ADVAPI */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "ipsec-tools"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ipsec-tools"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ipsec-tools 0.8.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ipsec-tools"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.8.0"

/* Path to ipsec.h */
#define PATH_IPSEC_H <netinet/ipsec.h>

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* A 'va_copy' style function */
#define VA_COPY va_copy

/* Version number of package */
#define VERSION "0.8.0"

/* SHA2 support */
/* #undef WITH_SHA2 */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
