# Object-oriented programming

**Encapsulation** means objects contain data and operations that work on that data.

```
class Class_Name
{
  // declaration(s);
}; // You need semicolon
```

```
Player yuki;

// Pointer to object
Player *enemy = new Player();
delete enemy;
```

**Pointer to an object** to access attributes and methods, use **dereference** the pointer then use the dot operator, or use the member of pointer operator (**arrow operator**).

```
Account *frank_account = new Account();

(*frank_account).balance;

frank_account->balance;
```

Member method
- Has access to member attributes
- Can be implemented inside the class declaration
- Can be implemented outside the class declaration
- Can separate specification from implementation
  - **`.h` file for the class declaration**
  - **`.cpp` file for the class implementation**

**Include guard** in `.h` file. `#ifndef` mean if not defined. `#pragma once` is the same.

`Account.h`. In this header file, we don't wanna use namespace. For example, use `std::string` instead.
```
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

  // Account class declaration

#endif
```

`Account.cpp`
```
#include "Account.h"

  // Implementation of methods
```

`main.cpp`. Don't include `.cpp` file, but `.h` file.
```
#include "Account.h"
```

Constructor
- Same name as the class
- No return type is specified
- Can be overloaded

Descturctor
- Same name as the class proceeded with a **tilde** `~`
- Invoked automatically when an object is destroyed
  - When out of scope by outside block `{}` or `delete class`.
- **Useful to release memory and other resources**.
- No return type, no parameter.
- Destruction occurs reverse order of construction.
- **Default constructor (no-args constructor)** occurs when no constructor is provided in class. 
  - **But the best practice is to provide user-defined no-args constructor**.
  - When you provide either no-arg or with-arg constructor, no default constructor will be created.

**Overloaded contrcutors**
- Each must have a unique signature

**Constructor initialization list**
- Is more efficient
- Immediately follows parameter list
- Initializes the data members as the object is created.
- Order of initialization is the order of declaration in the class.

The line after `:` occurs before the constructor body.
```
Player::Player(std::string name_val)
    : name{name_val}, health{0}, xp{0} {
}
```

**Delegating constructors** allows the code for one constructor to call another in ther initialization list to avoid duplicating code.

```
class Player
{
private:
    std:string name;
    int health;
    int xp;
}

// This delegates 
Player::Player()
    : Play {"None", 0, 0} {
}

// to this, because this contains initialization list
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
}
```

**Default constructor parameters** is e.g. `constructor_name(std::string name_val = "None")`

Compiler uses **copy constructor** when a copy of an object is made
- Passing object by value as a parameter
- Returning an object from a function by value
- Constructing an object based on another of the same class

Declaring the copy constructor is `Type::Type(const Type &source);`

**Shallow copy** 
- Consider a class that contains a pointer as a data member
- Constructor allocates storage dynamically and initializes the pointer
- Destructor releases the memory allocated by the constructor
- What happens in the default copy constructor?
- Problem occurs when we release the storage in the destructor, the other object still refers to the released storage.

**Deep copy**
- Copy constructor has difference from the copy constructor in shallow copy 
- **Deep copy creates new storage and copy values**.
- Original and copied both have the unique data in heap

**Move constructor** moves an object rather than copy it. It's optional but recommended for efficiency when you have a raw pointer. 

**r-value reference** is a reference to r-value. It's a temporary object in the context of move constructor. `&&` is r-value reference operator.

`this` contains the address of the object. It's a pointer to the object. Can only be used in class scope. All member access is done via the `this` pointer, but can omit. `this->member` is implied.

Using `const` with class
- `type method_name() const;` (**const method**) allows to use method in `const` class. **Const correctness**. But it's error if the code in const method modifies this object.

**Static class members** are useful to store class-wide information, because a single data member belongs to the class, not the objects.
- `static int num_players;` (Cannot initialize)
- `static int get_num_players();`

This typically happenes in `.cpp` class implementation files.
```
#include "Player.h"

int Player::num_players = 0;
```

`struct` comes from the C programming language, essentially the same as a `class` expect. While members of class are private by default, the members of `struct` are public by default.
- `struct`
  - Use for passive objects with public access
  - Don't declare methods
- `class`
  - Use for active objects with private access
  - Implement getter/setters as needed.
  - Implement member methods as needed.

**Friend**
- Function or class that has access to private class member, and this function or class is not a member of the class it is accessing.
- Declare explicitly with the keyword `friend`.
- Not symmetric.
- Not transitive



