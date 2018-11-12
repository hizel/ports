# Ports collection makefile for:	py-flowtools
# Date created:				16 Sep 2004
# Whom:	      				Roman Bogorodskiy <bogorodskiy@inbox.ru>
#
# $FreeBSD$
#

PORTNAME=	pyflowtools
PORTVERSION=	0.3.4.1
CATEGORIES=	net-mgmt python

MAINTAINER=	hizel@vyborg.ru
COMMENT=	Python extension module for reading flow-tools' data

USE_GITHUB=	yes
GH_ACCOUNT=	hizel
GH_PROJECT=	py-flowtools

BUILD_DEPENDS=	${LOCALBASE}/include/ftlib.h:${PORTSDIR}/net-mgmt/flow-tools-ng

CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib -fPIC
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
