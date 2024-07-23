# Reference

- **Reference** is alias for a variable
- Must be initialized to a variable when declared
  - `int num = 100;`, `int &ref {num};`
- Cannot be null
- Once initialized, cannot be made to refer to a different variable
- Very useful as function parameters

```
for (auto str : vector) {
  str = "test"; // Only changes the copy
}

for (auto &str : vector) {
  str = "test"; // Changes the actual
}
```

**L-value** is a value that has name and is addressable. It's modifiable if it's not constant. If it's used on the left-hand side of an assignment statement, it's addressable.

**R-value** is a value that is on the right-hand side of an assignment expression, a literal, and a temporary which is intended to be non-modifiable. It's **non-addressable** and **non-assignable**. R-values can be assigned to L-values explicitly.

`int x = 100;`, `x` is L-value, and `100` is R-value.

