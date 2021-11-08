/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2018 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--build=x86_64-redhat-linux-gnu' '--host=x86_64-redhat-linux-gnu' '--program-prefix=' '--disable-dependency-tracking' '--prefix=/opt/cpanel/ea-php73/root/usr' '--exec-prefix=/opt/cpanel/ea-php73/root/usr' '--bindir=/opt/cpanel/ea-php73/root/usr/bin' '--sbindir=/opt/cpanel/ea-php73/root/usr/sbin' '--sysconfdir=/opt/cpanel/ea-php73/root/etc' '--datadir=/opt/cpanel/ea-php73/root/usr/share' '--includedir=/opt/cpanel/ea-php73/root/usr/include' '--libdir=/opt/cpanel/ea-php73/root/usr/lib64' '--libexecdir=/opt/cpanel/ea-php73/root/usr/libexec' '--localstatedir=/opt/cpanel/ea-php73/root/var' '--sharedstatedir=/opt/cpanel/ea-php73/root/var/lib' '--mandir=/opt/cpanel/ea-php73/root/usr/share/man' '--infodir=/opt/cpanel/ea-php73/root/usr/share/info' '--cache-file=../config.cache' '--with-libdir=lib64' '--with-config-file-path=/opt/cpanel/ea-php73/root/etc' '--with-config-file-scan-dir=/opt/cpanel/ea-php73/root/etc/php.d' '--disable-debug' '--with-password-argon2=/opt/cpanel/libargon2' '--with-pic' '--without-pear' '--with-bz2' '--with-freetype-dir=/usr' '--with-png-dir=/usr' '--with-xpm-dir=/usr' '--enable-gd-native-ttf' '--without-gdbm' '--with-gettext' '--with-iconv' '--with-jpeg-dir=/usr' '--with-openssl=/opt/cpanel/ea-openssl11' '--with-openssl-dir=/opt/cpanel/ea-openssl11' '--with-zlib' '--with-layout=GNU' '--enable-exif' '--enable-ftp' '--enable-sockets' '--with-kerberos' '--enable-shmop' '--with-libxml-dir=/opt/cpanel/ea-libxml2' '--with-system-tzdata' '--with-mhash' '--libdir=/opt/cpanel/ea-php73/root/usr/lib64/php' '--enable-pcntl' '--enable-opcache' '--disable-opcache-file' '--enable-phpdbg' '--with-imap=shared,/opt/cpanel/ea-php73/root/usr' '--with-imap-ssl' '--enable-mbstring=shared' '--enable-mbregex' '--with-webp-dir=/usr' '--with-gd=shared' '--with-gmp=shared' '--enable-calendar=shared' '--enable-bcmath=shared' '--with-bz2=shared' '--enable-ctype=shared' '--enable-dba=shared' '--with-db4=/usr' '--with-tcadb=/usr' '--enable-exif=shared' '--enable-ftp=shared' '--with-gettext=shared' '--with-iconv=shared' '--enable-sockets=shared' '--enable-tokenizer=shared' '--with-xmlrpc=shared' '--with-ldap=shared' '--with-ldap-sasl' '--enable-mysqlnd=shared' '--with-mysqli=shared,mysqlnd' '--with-mysql-sock=/var/lib/mysql/mysql.sock' '--enable-dom=shared' '--with-pgsql=shared' '--enable-simplexml=shared' '--enable-xml=shared' '--enable-wddx=shared' '--with-snmp=shared,/usr' '--enable-soap=shared' '--with-xsl=shared,/usr' '--enable-xmlreader=shared' '--enable-xmlwriter=shared' '--with-curl=shared,/opt/cpanel/libcurl' '--enable-pdo=shared' '--with-pdo-odbc=shared,unixODBC,/usr' '--with-pdo-mysql=shared,mysqlnd' '--with-pdo-pgsql=shared,/usr' '--with-pdo-sqlite=shared,/usr' '--with-sqlite3=shared,/usr' '--enable-json=shared' '--without-libzip' '--enable-zip=shared' '--without-readline' '--with-libedit' '--with-pspell=shared' '--enable-phar=shared' '--with-tidy=shared,/opt/cpanel/libtidy' '--enable-sysvmsg=shared' '--enable-sysvshm=shared' '--enable-sysvsem=shared' '--enable-shmop=shared' '--enable-posix=shared' '--with-unixODBC=shared,/usr' '--enable-intl=shared' '--with-icu-dir=/usr' '--with-enchant=shared,/usr' '--with-recode=shared,/usr' '--enable-fileinfo=shared' 'build_alias=x86_64-redhat-linux-gnu' 'host_alias=x86_64-redhat-linux-gnu' 'CFLAGS=-O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -m64 -mtune=generic -fno-strict-aliasing -Wno-pointer-sign' 'CXXFLAGS=-O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -m64 -mtune=generic'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	"@MYSQL_INCLUDE@"
#define PHP_MYSQL_LIBS		"@MYSQL_LIBS@"
#define PHP_MYSQL_TYPE		"@MYSQL_MODULE_TYPE@"
#define PHP_ODBC_INCLUDE	"-I/usr/include"
#define PHP_ODBC_LFLAGS		"-L/usr/lib64"
#define PHP_ODBC_LIBS		"-lodbc"
#define PHP_ODBC_TYPE		"unixODBC"
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PEAR_INSTALLDIR         "/opt/cpanel/ea-php73/root/usr/share/pear"
#define PHP_INCLUDE_PATH	".:/opt/cpanel/ea-php73/root/usr/share/pear"
#define PHP_EXTENSION_DIR       "/opt/cpanel/ea-php73/root/usr/lib64/php/modules"
#define PHP_PREFIX              "/opt/cpanel/ea-php73/root/usr"
#define PHP_BINDIR              "/opt/cpanel/ea-php73/root/usr/bin"
#define PHP_SBINDIR             "/opt/cpanel/ea-php73/root/usr/sbin"
#define PHP_MANDIR              "/opt/cpanel/ea-php73/root/usr/share/man"
#define PHP_LIBDIR              "/opt/cpanel/ea-php73/root/usr/lib64/php"
#define PHP_DATADIR             "/opt/cpanel/ea-php73/root/usr/share"
#define PHP_SYSCONFDIR          "/opt/cpanel/ea-php73/root/etc"
#define PHP_LOCALSTATEDIR       "/opt/cpanel/ea-php73/root/var"
#define PHP_CONFIG_FILE_PATH    "/opt/cpanel/ea-php73/root/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/opt/cpanel/ea-php73/root/etc/php.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
