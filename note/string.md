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

- `str1.compare(str2) == 0` when `str1 == str2`
- `str1.compare(str2) > 0` when `str1 > str2`
- `str1.compare(str2) < 0` when `str1 < str2`

`str1.compare(start, length, str2)`

`str1.compare(start1, length1, str2, start2, length2)`

```
strings str = "abc";

cout << str.compare(1, 1, "b");
```

outputs `0`

```
strings str = "abc";

cout << str.compare(1, 1, "bc");
```

outputs `-1`

```
strings str = "abc";

cout << str.compare(2, 1, "abc", 2, 2);
```

outputs `0`

## Substring

`new_str = old_str.substr(start, length)`

`length` parameter defaults to covering all the remaining characters.

`str.substr()` is just a copy of `str`

## Length

`int length = str.size();`

`int length = str.length();`


