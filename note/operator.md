# Operator

**Short-circuit evaluation tactic** means that binary operators try to omit an evaluation of the right argument if the left argument is sufficient to determine the final result.
- When the left argument of `||` is `true`, the whole expression is also `true` regardless of the right argument value
- When the left argument of `&&` is `false`, the whole expression is also `false` regardless of the right argument value.

## Assignment operator

With chaining assignment statements, more than one variable can be assigned in a single statement.

`num1 = num2 = 100;` this works from right to left. First assign 100 to num2, then assign num2 (100) to num1.

## Increment and decrement operator

`res = ++counter + 10;` is `counter = counter + 1;` then `res = counter + 10;`. Prefix increment operator increments a variable **before** we use it.

`res = counter++ + 10` is `res = counter + 10;` then `counter = counter + 1;` Postfix increment operator increments a variable **after** we use it.

**Never use it twice for the same variable in the same statement!**. Behavior is undefined.

## Equality oeprator and boolean

```
cout << (num1 == num2) << endl;  // 0 or 1
cout << std::boolalpha;
cout << (num1 == num2) << endl;  // true or false
cout << std::noboolalpha;
```

## Logical operator

`!` (or `not`) is negation. `&&` (or `and`) is and. `||` (or `or`) is or.

`!` has higher precedence than `&&`. `&&` has higher precedence than `||`.

**Short-circuit evaluation** occurrs in C++. When evaluating a logical expression, C++ stops as soon as the result is known. For example, in `expr1 && expr2 && expr3`, if `expr1` is `false`, `expr2` and `expr3` are skipped, because, regardless of those values, the result is `false`.

In `expr1 || expr2 || expr3`, if `expr1` is `true`, `expr2` and `expr3` are skipped. If `expr1` is `false`, then compiler continues to evaluate.

## Relational operator

In C++20, `<=>` is **three-way comparison**.

https://stackoverflow.com/questions/47466358/what-is-the-spaceship-three-way-comparison-operator-in-c

## Compound assignment operator

`+=` is called **compound assignment operator**. `a += 1` is `a = a + 1`.

`a *= b + c` (no need parenthesis) means `a = a * (b + c)`

## Operator precedence

**Associativity rule** appears when adjacent operators have the same precedence.

If `op1` has associativity right to left, `expr1 op1 expr2 op1 expr3` first evaluates `expr2 op1 expr3` then `expr1`.

`++`, `--`, `not`, `-(unary)`, `*(de-ref)`, `&`, `sizeof`, `=`, `op=` and `?:` are right to left associativity.

## Conditional operator

**Conditional operator** `(cond_expr) ? expr1 : expr2` can be used in `cout`. `cout << ((score > 90) ? "Excellent" : "Good");`

## Overloading

We can redefine any of the existing operators by **overloading** operators. But we cannot define completely new operators. C++ treats overloaded operators as very specific functions.

`void operator <operator> (<argument-type> argument_name);`