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



