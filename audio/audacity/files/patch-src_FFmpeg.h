--- src/FFmpeg.h.orig	2018-10-01 14:07:33 UTC
+++ src/FFmpeg.h
@@ -685,7 +685,7 @@ extern "C" {
    FFMPEG_FUNCTION_WITH_RETURN(
       AVOutputFormat*,
       av_oformat_next,
-      (AVOutputFormat *f),
+      (const AVOutputFormat *f),
       (f)
    );
 #endif
@@ -766,7 +766,7 @@ extern "C" {
    FFMPEG_FUNCTION_WITH_RETURN(
       int,
       av_fifo_size,
-      (AVFifoBuffer *f),
+      (const AVFifoBuffer *f),
       (f)
    );
 #endif
@@ -828,7 +828,7 @@ extern "C" {
    FFMPEG_FUNCTION_WITH_RETURN(
       AVDictionaryEntry *,
       av_dict_get,
-      (AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags),
+      (const AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags),
       (m, key, prev, flags)
    );
 #endif
