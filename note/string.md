# String

`include <string>`

`string` type is not a built-in type. Need to put `#include` directive at the top, and request a header file named `string`. Without it, it causes a compilation error.

`'` apostrophes are for character

`"` (double) quotes are for string.

"String" has 2 different meanings.
- A type name
- An entity consisting of a finite number of characters

## Initialization

```
# include <string>

string pet_name = "Lassie";

// Or
string pet_name("Lassie");
```

## cin

If input to a program is `Yuki Kitayama`, the white spaces will be treated as mark of the end of the string. Only `Yuki` will be used.

`getline(cin, input_string)` gets/reads all the characters entered as-is.

## Comparison

`==` checks if two strings contain the same string (a chain of characters).




