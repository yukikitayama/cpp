# Character

`include <cctype>` contains useful functions for testing characters and for converting character case.

`isalpha(c)` returns `true` if `c` is a letter. e.g. `isalnum(c)`, `isdigit(c)`, `ispunct(c)`.

## C-style string

**C-style string** is a sequence of characters, contiguous in memory, implemented as an array of characters, terminated by a **null character**, referred to as **zero or null terminated strings**.

`"C++ is fun"` is `[C, +, +, _, i, s, _, f, u, n, \0]`

String literal is a sequence of characters in double quotes, constant, terminated with null character. e.g. `char name[] {"Yuki"};`, `[Y, u, k, i, \0]`. 

`char name[8] {"Yuki"}` is `[Y, u, k, i, \0, \0, \0, \0]`

`strcpy(name, "Yuki")` is string copy.

`#include <cstring>` has functions to copy `strcpy()`, concatenate `strcat()`, find length `strlen()` (Doesn't include null), compare `strcmp()` (returns 0 if equal).

`#include <cstdlib>` includes functions to convert C-style strings to different types.
