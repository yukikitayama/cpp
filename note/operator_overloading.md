# Operator overloading

- Use traditional operators such as +, - with user-defined types
- Make code readnable and writable
- Must be explicitly defined

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

Overloading the assignment operator (copy)
- C++ provides a default assignment operator used for assigning one object to another
  - `Mystring s2 = s1;` is not assignment, but initilization
- Default is memberwise assignment (shallow copy)
- `Type &Type::operator=(const Type &rhs);`
  - `Mystring &Mystring::operator=(const Mystring &rhs);`

Overloading the assignment operator (move)
- If we have raw pointer, we should overload the move assignment operator for efficiency
- `Type &Type::operator=(Type &&rhs);`
- `Mystring &Mystring::operator=(Mystring &&rhs);`
- Steal the pointer. 
```
Mystring s1;

s1 = Mystring {"Frank"};  // move assignment
```

Overloading operators as member functions
- Unary operators as member methods (++, --, -, !)
  - `ReturnTYpe Type::operatorOp();`
  - `Number Number::operator-() const;`
  - `Number Number::operator++():` is pre-increment
  - `Number Number::operator++(int);` is post-increment
  - `bool Number::operator!() const;`
- Binary operators as member methods (+, -, ==, !=, <, >, etc)
  - `ReturnType Type::operatorOp(const Type &rhs);`
  - `Number Number::operator+(const Number &rhs) const;`
  - `Number Number::operator-(const Number &rhs) const;`
  - `bool Number::operator==(const Number &rhs) const;`
  - `bool Number::operator<(const Number &rhs) const;`


--------------------------------

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

Overload **unary operators as global functions** (`++, --, -, !`).

```
ReturnType operatorOp(Type &obj);

Number operator-(const Number &obj);
Number operator++(Number &obj);       // pre-increment
Number operator++(Number &obj, int);  // post-increment
bool operator!(const Number &obj);
```

Overload **binary operators as global function** (`+, -, ==, !=, <, >`, etc)

```
ReturnType operatorOp(const Type &lfs, const Type &rhs);
```

Overload **stream insertion and extraction operators** (`<<`, `>>`)

Return a reference to the `ostream` or `istream` so we can keep inserting but don't return `ostream` by value.

```
std::ostream &operator<<(std::ostream &os, const Type &obj) {
  os << // Do something
  return os;
}

std::istream &operator>>(std::istram &is, Type &obj) {
  is >> // Do something
  return is;
}
```



