# OOP

- Procedural programming is a collection of functions.
  - Limitation is functions need to know the structure of the data.
  - As programs get larger, difficult to extend, maintain, fragile.
- Object-oriented programming is a collection of classes that model real-world domain entities.
- **Encapsulation** makes objects contain data and operations
- **information-hiding** hides implementation-specific logic
- Reusability
- **Inheritance** creates a new class in term of existing classes.
- Limitation of OO
  - Not suitable for all types of problems
  - More up-front design is necessary

Declaring a class
- Capitalize class name for a user defined class
- Creating a pointer to a class `Player *enemy = new Player();`, `delete enemy;`.

Accessing class members
- If a pointer to an object, two ways to access
  - `(*ptr).balance` dereference the pointer and use dot operator
  - `ptr->balance` use member of pointer operator (arrow operator)

public and private
- By default, everything inside class is private.

Implementing member methods
- Don't need to pass member attributes as arguments because methods have access to them.
- Can be implemented inside and outside the class declaration
  - `Class_name::method_name`, `::` is scope resolution operator.
- Can separate specification from implementation
  - .h file for class declaration and specification (method name, return type, argument type)
  - .cpp file for class implementation
- Get method returns a copy of attribute

Include Guard 
- allows to define only once even if cpp files include a particular .h file multiple times.
- If not defined
- `#pragma once` is the same, but some complier doesn't support.

```
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
  // Account class declaration
#endif
```

Connstructors
- Same name as the class
- No return type
- Can be overloaded

Destructors
- Same name as the class proceeded with a tilde (`~`)
- Invoked automatically when an object is destroyed
- Only 1 destructor per class
- No return type and no parameters
- Useful to release memory and other resources
- Automatic destructors are called in a reversed order.

Default constructor
- No argument
- C++ generate it if you don't write it
- Called when instantiate a new object with no argument
- Best practice is to make user-defined no-args constructor
- Once we provide a constructor for a class, C++ doesn't auto generate no arg default constructor

Constructor initialization list
- More efficient
- Initialization list immediately follows the parameter list
- Initializes the data members as the object is created
- Order of initialization is the order of declaration in the class
- Code in the body of the constructor is just assignment, even if it looks like initializing values.

Delegating constructors
- Code for one contructor can call another in the initialization list
- Avoids duplicating code

```
Player::Player(std::string name_val, int health_val, init xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
}

// Delegating
Player::Player()
    : Player {"None", 0, 0} {
}
```

Default constructor parameters
- Can reduce the number of overloaded constructors
- Default values appear in declaration, but don't appear in implementation.

Copy constructor
- `Type::Type(const Type &source);`
- When objects are copied, C++ must create a new object from an existing object
- A copy of an object is made when
  - Passing object by value as a parameter
  - Returning an object from a function by value
  - Constructing one object based on another of the same class.
- Best practices
  - Provide a copy constructor when your class has raw pointer members
  - Provide the copy constructor with a **const reference** parameter
  - Use STL classes as they already provide copy constructors
  - Avoid using raw pointer data members if possible.

```
Player hero {"Hero"};
Player another_hero {hero};  // A copy of hero is made
```

Shallow copy and deep copy
- Consider a class that contains a pointer as a data member
  - Constructor allocates storage dynamically and initializes the pointer
  - Destructor releases the memory allocated by the constructor.
- Shallow copy is the default behavior
  - Each data member is copied from the source object.
  - It copies the pointer but it doesn't copy the data it points to.
  - Problematic when we release the storage in the destructor and if the other object still refers to the released storage. 

Move constructor
- C++ 11 introduced move semantics and the move constructor
- Move constructor moves an object rather than copy it
- Optional but recommended when you have a raw pointer
- For efficiency
- Copies the address of the resource from source to the current object ("move the resource")
- **Didn't understand move constructor**

`this` pointer
- Contains the address of the current object
- A pointer to the current object
- Can only be used in class scope
- Compare two objects

```
void Account::set_balance(double balance) {
    this->balance = balance;
}
```

`const` object
- Can create `const` objects
  - `const Player villain {"Villain", 100, 55};`
- Need special syntax for get method
  - `std::string get_name() const;`
- All of the getters should be `const`.