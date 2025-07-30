# Polymorphism

What is polymorphism
- Compile-time / early binding / static binding
  - Before the program runs
  - e.g. overloaded functions, overloaded operators
- Run-time / late binding / dynamic binding
- **Runtime polymorphism** is being able to assign different meaning to the same function at run-time
- In C++, the default is static binding. Run-time polymorphism is achieved via
  - Inheritance
  - Base class pointers or references
  - Virtual functions
- Types of polymorphism
  - Polymorphism
    - Compile-time
      - Function overloading
      - Operator overloading
    - Run-time
      - Function overriding
- Static binding (Non-polymorphic example)
```
Account *p = new Trust();
p->withdraw(1000);  // Account::withdraw(), but should be Trust::withdraw()

void display_account(const Account &acc) {
    acc.display();
    // will always use Account::display
}

Account a;
display_account(a);

Savigns b;
display_account(b);

Checking c;
display_account(c);

Trust d;
display_account(d);
```
- Dynamic binding (polymorphic example)
```
// withdraw method is virtual in Account
Account a;
a.withdraw(1000);  // Account::withdraw()

Savings b;
b.withdraw(1000);  // Savings::withdraw()

Checking c;
c.withdraw(1000);  // Checking::withdraw()

Trust d;
d.withdraw(1000);  // Trust::withdraw()

Account *p = new Trust();
p->withdraw(1000);  // Trust::withdraw()

// display method is virtual in Account
void display_account(const Account &acc) {
    acc.display();
    // will always call the display method depending on the object's type at run-time
}

Account a;
display_account(a);

Savigns b;
display_account(b);

Checking c;
display_account(c);

Trust d;
display_account(d);
```

Using a Base class pointer
- For dynamic polymorphism, we must have
  - Inheritance
  - Base class pointer or Base class reference
  - Virtual functions

Virtual functions
- Redefined functions are bound statically
- Overridden functions are bound dynamically
- Virtual functions are overridden
- Allow us to treat all objects generally as objects of the Base class.
- Declare the function you want to override as virtual in the Base class
- Virtual functions are virtual all the way down the hierarchy from this point.
- Dynamic polymorphism only via Account class pointer or reference
```
class Account {
public:
    virtual void withdraw(double amount);
};
```
- Override the function in the Derived class
- Function signature and return type must match exactly
- virtual keyword is not required but **is best practice to restate virtual**.
- If you don't provide an overridden version, it's inherited from its base case
```
class Checking: Account {
public:
    virtual void withdraw(double amount);
};
```
- Whenever you have virtual functions, you need to have virtual destructors.

Virtual destructors
- If a derived class is destroyed by deleting its storage via the base class pointer and the class a non-virtual destructor, then the behavior is undefined.
- Derived objects must be destroyed in the correct order starting at the correct destructor.
- **If a class has virtual functions, always provide a public virtual destructor**.
- If base class destructor is virtual, all derived class destructors are also virtual.
```
class Account {
public:
    virtual void withdraw(double amount);
    virtual ~Account();
};
```


