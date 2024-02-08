# Basic

`int variable = 0;` declaring the variable and assigning the value at the same time. The part on the right side of `=` 
sign is called **initiator**.

## Type

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