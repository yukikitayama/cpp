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

