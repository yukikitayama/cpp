# Operator overloading

**Operator overloading** is a syntactic sugar (Programming language feature that makes code easier to read and write). It still runs functions or methods behind the scene.

Majority of C++'s operators can be overloaded, but the following operators cannot be overload
- `::`
- `:?`
- `.*`
- `.`
- `sizeof`

Basic rules
- Precedence and associativity cannot be changed
- Binary and unary cannot be changed
- Can't overload operators for primitive type
- Can't create new operators.
- `[]`, `()`, `->`, `=` as assignment operator must be declared as member methods
- Other operators can be declared as member methods or global functions.

**Copy assignment operator** is a default assignment operator provided by C++, used for assigning one object to another. Default is memberwise assignment (shallow copy) if we don't provide our own overloaded assignment operator. Assignment operator can work if previously created and initialized.

Overloading the **copy** assignment operator (deep copy). Use `&`.

```
Type &Type::operator=(const Type &rhs);

Mystring &Mystring::operator=(const Mystring &rhs);
s2 = s1;  // We write this
s2.operator=(s1);  // operator= method is called.
```

Overloading the **move** assignment operator. Use `&&`. Cannot be `const` because we will modify.

```
Type &Type::operator=(Type &&rhs);


```

Overload **unary operator as member methods** (`++, --, -, !`).

```
ReturnType Type::operatorOp();

Number Number::operator-() const;
Number Number::operator++();     // pre-increment
Number Number::operator++(int);  // post-increment
bool Number::operator!() const;
```

Overload **binary operators as member methods** (`+, -, ==, !=, <, >`, etc).

```
ReturnType Type::operatorOp(const Type $rhs);

Number Number::operator+(const Number &rhs) const;
Number Number::operator-(const Number &rhs) const;
bool Number::operator==(const Number &rhs) const;
bool Number::operator<(const Number &rhs) const;
```
