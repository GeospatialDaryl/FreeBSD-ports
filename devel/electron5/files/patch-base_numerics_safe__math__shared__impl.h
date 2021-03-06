--- base/numerics/safe_math_shared_impl.h.orig	2019-04-08 08:18:04 UTC
+++ base/numerics/safe_math_shared_impl.h
@@ -19,9 +19,7 @@
 
 // Where available use builtin math overflow support on Clang and GCC.
 #if !defined(__native_client__) &&                         \
-    ((defined(__clang__) &&                                \
-      ((__clang_major__ > 3) ||                            \
-       (__clang_major__ == 3 && __clang_minor__ >= 4))) || \
+    ((defined(__clang__) && (__clang_major__ > 6)) ||      \
      (defined(__GNUC__) && __GNUC__ >= 5))
 #include "base/numerics/safe_math_clang_gcc_impl.h"
 #define BASE_HAS_OPTIMIZED_SAFE_MATH (1)
