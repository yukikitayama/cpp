# Basic

`int variable = 0;` declaring the variable and assigning the value at the same time. The part on the right side of `=` 
sign is called **initiator**.

## Variable

- A **variable** is an abstraction for a memory location. 
- Variables have **type** and **value**. This is **static typing** because **compiler** is enforcing a rule.
- Variables must be **declared** before they are used.
- **Declaring variables** is `type`, `name`, and `;`
- Declare variables close to when you need them in your code.
- There are 3 ways to initialize variables
  - `int age = 21; // C-like initialization`
  - `int age (21); // Constructor initialization`
  - `int age {21}; // C++11 list initialization syntax`. This style is recommended by Dr. Frank course.

### Global variable

- Variables defined in a function are **local variable**.
- Variabled declared outside any functions are **global variable** which can be acceessed from any parts in a program.
- Unlike local variables, global variables are automatically initialized to be 0.
- To declare global variables, declare outsite `main()` function or outside any other functions.

## Type (Primitive type, fundamental type)

- Character
- Integer
  - Signed and unsigned
- Floating-point
- Boolean

Unlike other programming languages, size and precision of C++ depend on the platform and compiler.

`#include <climits>` can tell you the size and precision of your compiler.

Type sizes are in bits. The more bits, the more values can be represented. The more bits, the more storage requried.

With 8 bits, we can store 256 unique values by `2**8`. With 16 bits, we can store 65,536 unique values by `2**16`.

Character type

- Used to represent **single** characters. Character data type is oftern implemented by 8 bits, which can represent at most 256 unique characters.
- Use `'` single quotation to create character.
- Don't use `"` double quotation becuase it creates `string`.
- `char initial {'Y'};`

Integer type

- By defulat, integer type use **signed** integer.
- Short int, int uses 16 bits, long int uses 32 bits, and long long int uses 64 bits.
  - If you need to store a huge number, you need to use long.
- C++14 allows you to use `\`` to separate digits in a large number of readability
  - `long long people_on_earth {7\`600\`000\`000\`};`
- The C style initialization`long people_on_earth = 7600000000;` won't throw error but the number is incorrect when overflow, but list initialization `long people_on_earth {7600000000};` can catch a problem in compiling time

Floating-point type

- Floating-point represent non-integer, meaning real numbers.
- Computer has a finite store, so it cannot store infinite decimal points like `pi`, so the computer stores a approximation to the real number.
- `float` has 7 decimal digits, `double` has 15 decimal digits, and `long double` has 19 decimal digits.
- Instead of `float num {401.23};`, `long double num {2.7e120};` also works with `e`.

Boolean type

- 0 is `false`
- Any non-zero values are `true`.
- You can initialize variable by `bool is_active {false};` but `cout << is_active` prints out `0`.

## Size

- `sizeof` operator determines the size in bytes of a type or variable. It tells how much storage is necessary to represent types and variables.
  - `sizeof(int)` returns in bytes
  - `sizeof(some_variable)`, but `sizeof some_variable` omitting parenthesis can work only for variables
- `<climits>` and `<cfloat>` include files which contain size and precision information about your implementation of C++.

**Modifier**

`int` 32 bits

`short` 16 bits. `short int counter;` or `short counter;`. `int` can omit.

`long` 64 bits. `long large_number;` `int` can omit. 

`1L` means a long integer literal. Integer literals have `int` type by default. But `L` suffix to a integer literal gives it a type of `long`. https://stackoverflow.com/questions/2958007/what-does-the-l-mean-at-the-end-of-an-integer-literal

`unsigned positive` for a number never be a negative number.

`char` is stored using 8 bits (1 byte).

`long float` is a synonym for `double`. 32-bit long `float` can store 8 precise digits, but `double` can save about 
15-17 digits. `double` comes from - its accuracy is doubled compared to `float`.

`f` is suffix to float type. `2.0f` (or `2.f`) is `float`, while `2.0` is `double`.

`bool` from **George Boole**, English mathematician in 19th century for algebraic logic. `!` is a negation operator, 
unary prefix operator. `true` <-> `false`

`double` has a wider range than `float` and better accuracy (precition)

**Automatic conversion (implicit conversion)**, the compiler lmpws where the type conversions need to be applied and applies without asking our permission.

**Explicit conversion (typecasting)**, type conversions performed at the developer's command. 

**C-style casting** `new_type_name expression_of_old_type` e.g. `(int) variable`

**Functional notation** `new_type_name(expression_of_old_type)` e.g. `int(variable)`

`long data = 1L;` or `1l` the literal is explicitly defined as `long`

### Promotion

- `char` or `short int` will be converted to `int` (**Integer promotion**)
- `float` will be converted to `double` (**Floating point promotion**)
- If there's any value of `double` in expression, the other data will be converted to `double`
- If there's any value of `long int` in expression, the other data will be converted to `long int`


## Conditional

```
if (boolean)
  do_a();
else if (boolean)
  do_b();
else
  do_c();
```

`if (number % 2)...` checks if a number is odd.

`if (number)...` and `if (numer != 0)` are equivalent.

## While loop

```
while (conditional_expression)
  statement;
```

## Do loop

The condition is checked at the end of the body execution, and the loop's body is executed at least once, even if the 
condition is not met.

```
do {
  statement_1;
  statement_2;
  :
} while (condition);
```

## For loop

```
for (initialization of counter; check condition; modifying counter) {
  /* the body goes here */
}
```

The variable used for counting the loop's turns is called a **control variable**.

If we omit any of the 3 components, it's presumed that there's a 1 there. It will make an infinite loop.

## Logical operator

`&&` for AND. `||` for OR. `!` for logical negation. e.g. `variable != 0` is equivalent to `!(variable == 0)`

- `&` bitwise conjunction
- `|` bitwise disjunction
- `~` bitwise negation
- `^` bitwise exclusive or

The difference between logical operators and bitwise operators is, the logical operators are only interested in the 
final integer value.

**Bitmask** a sequence of zeros and ones whose task is to grab the value or to change the selected bits.

## Switch

Allowed to place more than one `case` in front to any branch

```
switch(i) {
  case 1: cout << "Here" << endl; break;
  case 2:
  case 3: cout << "Okay" << endl; break; 
  default: do_something();
}
```

Okay will be applied when i is either 2 or 3.

## Ternary operator

`expression1 ? expression2 : expression3`

If the calculated value of `expression1` is **non-zero**, the ternary operator returns the value of `expression`.

If the calculated value of `expression1` is **zero**, the ternary operator returns the value of `expression2`.

### Ternary operator nesting

```
float max(float a, float b, float c) {
  return a > b : (a > c ? a : c) : (b > c ? b : c);
}
```

## Number

### Integer literal

`111'222'333` is valid integer literal for `11122233`. `'` digit separators make large values more readable.

### Exponentiation

`1e1` is `10`, not `11`.

`1e0` is `1`.

## Keyword

C++ has about 90 keywords.

`#include`, `main()`, variable name, `std`, `cout`, etc. These are not keywor, but **identifier**.

## Comment

Comments will be removed before a compiler sees it.

`// This is a single line comment` or `int var_name; // Inline comment`

```
/*
This is
a multiple line
comment
*/
```

## Main

Every program must have exactly 1 main() function.

When a C++ program is executed, the main function is called by the operating system.

The code between curly braces of the main function executes.

When the program hits the return statement, the program returns the integre value to the operating system.

Return 0 indicates successful program execution.

There are 2 versions of main functions

```
int main()
{
  // Code
  return 0;
}
```

`program.exe`

```
int main(int argc, char *argv[])
{
  // Code
  return 0;
}
```

`argc` is the count of arguments. `*argv[]` is a vector of strings.

`program.exe argument1 argument2`