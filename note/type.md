# Type

## Type coercion

**Type coercion** is conversion of one operand to another data type. **Promotion** is conversion to a higher type. In `2 * 5.2`, `2` is **promoted** to `2.0`. **Demotion** is conversion to a lower type(Truncation happens). `int num {0}; num = 100.2`, `100.2` is demoted to `100`.

## Boolean

`cout << std::boolalpha;` enables to display `true` and `false` for boolean variable `cout`, instead of `1` and `0`. `cout << std::noboolalpha;` disable it.

## Static cast

The simples type of cast.

Compile-time cast.

`static_cast<dest_type>(source)` return a value of type `dest_type`.

Old style is `(double)variable` if `static_cast<double>(variable)`, but don't use old style. New style check if the type conversion can happen.

## Math

To produce decimal by integer number division, at least one of the variables need to cast to `float`. No restriction either numerator or denominator.
