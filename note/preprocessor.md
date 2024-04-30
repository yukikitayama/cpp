# Preprocessor

**Preprocessor** is a program to process our source code before a compiler sees it.

 C++ preprocessor first removes all the comments and replace them with a single space.

 Then look for preprocessor directives (lines with `#`) and execute them. When preprocessor finds `#include`, it replaces the line with the file that `#include` refers to, and recursively processes the file as well.

 When a compiler sees the code, all the comments are removed and all the preprocessor directives are processed and removed.

 C++ preprocessor doesn't understand C++. It just make the code ready for the compiler. The compiler is the programe that understands C++.