# Created by: @BABOLO <.@babolo.ru>
# $FreeBSD$

PORTNAME=	flow-tools
PORTVERSION=	0.68.5
DISTVERSIONPREFIX=	v
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	-ng

MAINTAINER=	hizel@vyborg.ru
COMMENT=	Suite of tools and library to work with netflow data

LICENSE=	BSD2CLAUSE

USES=		gmake libtool python:run tar:bzip2 autoreconf
USE_GITHUB=	yes
GH_ACCOUNT=	hizel
GH_PROJECT=	flow-tools-ng

OPTIONS_DEFINE=	MYSQL OPENSSL PGSQL
PGSQL_CONFIGURE_OFF=	--without-postgresql
PGSQL_CONFIGURE_ON=	--with-postgresql
PGSQL_USES=		pgsql
MYSQL_CONFIGURE_OFF=	--without-mysql
MYSQL_CONFIGURE_ON=	--with-mysql="${PREFIX}"
MYSQL_USE=		MYSQL=yes
OPENSSL_CONFIGURE_OFF=	--without-openssl
OPENSSL_CONFIGURE_ON=	--with-openssl="${OPENSSLBASE}"
OPENSSL_USES=		ssl

CONFLICTS=	flow-tools-[0-9]*

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-docbook
INSTALL_TARGET=	install-strip

SUB_LIST=	FLOW_CAPTURE_SPOOL="${FLOW_CAPTURE_SPOOL}" \
		FLOW_CAPTURE_PIDDIR="${FLOW_CAPTURE_PIDDIR}"
USE_RC_SUBR=	flow_capture flow_fanout

FLOW_CAPTURE_SPOOL=	/var/db/flows
FLOW_CAPTURE_PIDDIR=	/var/run/flow-capture

USERS=		flowtools
GROUPS=		flowtools

post-patch:
	@${REINPLACE_CMD} -e 's|!/bin/env|!/usr/bin/env|' \
		${WRKSRC}/bin/* ${WRKSRC}/utils/*

post-install:
	${MKDIR} ${STAGEDIR}${FLOW_CAPTURE_SPOOL}
	${MKDIR} ${STAGEDIR}${FLOW_CAPTURE_PIDDIR}
	${INSTALL_MAN} ${WRKSRC}/docs/*.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
