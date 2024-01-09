# Basic

## Type

**Modifier**

`int` 32 bits

`short` 16 bits. `short int counter;` or `short counter;`. `int` can omit.

`long` 64 bits. `long large_number;` `int` can omit.

`unsigned positive` for a number never be a negative number.

`char` is stored using 8 bits (1 byte).

`long float` is a synonym for `double`. 32-bit long `float` can store 8 precise digits, but `double` can save about 
15-17 digits. `double` comes from - its accuracy is doubled compared to `float`.

`bool` from **George Boole**, English mathematician in 19th century for algebraic logic. `!` is a negation operator, 
unary prefix operator. `true` <-> `false`

## Conditional

```
if (boolean)
  do_a();
else if (boolean)
  do_b();
else
  do_c();
```