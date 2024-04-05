# Header file

**Header file** is a file containing all the necessary **declarations**. The file can be included by any other source file.

The header file doesn't contain any definitions usually, as they aren't needed during the compilation phase.

Header file has `xxx.h` extension convention. The definitions will be in `xxx.cpp` file. `xxx.cpp` file uses `#include "xxx.h"` to include the header.

`#ifndef` used by pre-processor to check if the **compile-time symbol** is defined or not. Name should be unique, and typically from the header file name. If no `#ifndef`, the pre-processor will skip the part from `#ifndef` to `endif` in a file.

`#define` - when the header file is included for the first time, every line of code is taken into consideration, but subsequent time, the content is ignored because pre-processor already knows the definition. **This speeds up the compilation process**.