# Operator

**Short-circuit evaluation tactic** means that binary operators try to omit an evaluation of the right argument if the left argument is sufficient to determine the final result.
- When the left argument of `||` is `true`, the whole expression is also `true` regardless of the right argument value
- When the left argument of `&&` is `false`, the whole expression is also `false` regardless of the right argument value.

## Assignment operator

With chaining assignment statements, more than one variable can be assigned in a single statement.

`num1 = num2 = 100;` this works from right to left. First assign 100 to num2, then assign num2 (100) to num1.

## Overloading

We can redefine any of the existing operators by **overloading** operators. But we cannot define completely new operators. C++ treats overloaded operators as very specific functions.

`void operator <operator> (<argument-type> argument_name);`