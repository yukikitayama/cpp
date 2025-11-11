# Enumeration

Overview
- **Enumeration** is a user-defined type that models a set of constant integral values
- Prior to enumerated types, unnamed numerical constants (magic numbers) were used
  - Used as conditions in control statements, low readability, high numbers of logic errors
- `enum-key enum-name : enumerator-type { };`
  - enum-key defines the scope of the enumeration
  - enum-name is optional name of the enumeration
  - enumerator-type can be omitted and the compiler will try to deduce it.
  - `{ }` is enumeration list, the list of enumerator definitions
- `enum {Red, Green, Blue};` is implicit initialization by 0, 1, 2
- `enum {Red = 1, Green = 2, Blue = 3};` is explicit initialization
- `enum : unit8_t {Red, Green, Blue};` is underlying type will be unsigned 8 bit int.
- `enum {Red, Green, Blue};` is anonymous no type safety
- `enum Color {Red, Green, Blue};` is named, type safe.
- `std::cin >> enum` is not allowed using standard extraction operator.
- `std::underlying_type_t<enum> user_input;` can work with cin
- `std::cout` works with enum, underlying type is used.

Unscoped enumerations
- `enum enum-name : enumerator-type { };`
- `enum` defines an unscoped enumeration

Scoped enumerations
- `enum class enum-name : enumerator-type { };`
- `enum class` or `enum struct` defines a scoped enumeration
- In unscoped enumerations, enumeration underlying value could cause an issue
- In unscoped enumerations, name crashes can happen.
- Scoped enumeration variables are not implicitly convertable.
- Use explicit casting `int milk_code = static_cast<int>(Item::Milk);` when `enum class Item {Milk = 350, ...};`
  - or `int(Item::Milk);`
```
enum class Whale {Blue, Beluga, Gray};

Whale whale = Whale::Beluga;

if (whale == Whale::Beluga)
    ...
```