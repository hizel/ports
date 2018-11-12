--- lib/ftsym.c.orig	2010-02-25 13:39:45 UTC
+++ lib/ftsym.c
@@ -46,6 +46,7 @@
 #include <ctype.h>
 #include <stddef.h>
 #include <stdlib.h>
+#include <unistd.h>
 
 #if HAVE_STRINGS_H
  #include <strings.h>
