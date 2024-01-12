# Basic

`int variable = 0;` declaring the variable and assigning the value at the same time. The part on the right side of `=` 
sign is called **initiator**.

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

