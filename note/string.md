# String

`str::string` is a Class in the **Standard Template Library**. C++ string has dynamic size at runtime, while C-style is fixed size.

C++ string can be converted to C-style string.

Use `#include <string>` and `using namespace std;` together to use C++ string.

Declaring and initializing
```
string s1 {"Yuki"}; // Yuki
string s2 {"Yuki", 3} // Yuk
string s3 {"Yuki", 1, 2} // uk
string s4 (3, 'X'); // XXX
```

The below is illegal, because the two are C-style literals, so cannot perform concatenation.
```
string sentence;
sentence = "C++" + " is powerful"; // Illegal
```

**Range-based for loop** can work for C++ string.

`string::npos` no position information available
```
string s1 {"This is test"};
cout << s1.find("XX"); // string::npos
```

`string1.length();`, not size.

`getline(cin, s1)l` can read entire line until `\n`. This works when input contains spaces between characters.

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

## Find

`int where_it_begins = str1.find(str2, start);` returns the first location and start defaults to `0`.

`int where_it_is = str1.find(character, start);` returns the first location and start defautls to `0`.

## Append

`str1.append(str2)` appends str2 to str1

`str1.append(str2, start, length)` appends substring of str2 to str1

`str1.append(number, character)` appends character by number times

`str1.push_back(character)` appends a character at the back of the string.

## Insert

```
  string quote = "Whyserious?", anyword = "monsoon";
  quote.insert(3, 2, ' ').insert(4, anyword, 3, 2);
  ```

`quote` is `Why so serious?`

## Replace

`str.assign(number, character)` replaces it with a new one by `number` amount of `character`

`ste.replace()` replaces a part of the string with another string or another string's substring.

## Delete

`str.erase()` removes a part of a string.

## Exchange

`str1.swap(str2)` replace the pointers identifying them and swap.

## Memory

Every time we extend the string, e.g. concatenating another string to it, the new content is placed in the buffers. When the buffers are full but we try to extend the string again, the buffer is reallocated to for the new content. **Transparent** process.

...

`int currently_used = str.capacity();` returns the size of the currently allocated buffers.

`str.max_size()` is the limit for all the strings

`str.reserve(number)` controls the size of the memory of a string. `number` will be the new size of the memory, but the string content is immune to this effect. For example, even if you have some string with content and `str.reserve(0)`, it still leaves a memory number to keep the content, so it won't be `0`.

`str.clear()` is emptying the string.

`str.resize(integer, character)` specifies the desired new size of the string. It will be truncated if the parameter is smaller than the current string size. `character` is used to fill when expanded. If no character `\0` null character is used to fill.

`str.empty()` returns boolean whether the string is empty or not.

## Iteration

```
string str = "abc";

for (int i = 0; i < str.length(); i++)
  // To upper case
  str[i] = str[i] - 'a' + 'A';
```
