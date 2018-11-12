--- src/flow-fanout.c.orig	2010-02-25 13:39:45 UTC
+++ src/flow-fanout.c
@@ -871,6 +871,7 @@ retry:
     } /* if FD_ISSET */
 
 skip1:
+	;
 
     if (sig_quit_flag) {
       fterr_info("SIGQUIT");
