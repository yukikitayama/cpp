# Object-oriented programming

## Introduction

- The data and the code are enclosed together in the same world, divided into classes.
- Each class is like a recipe that can be used when you want to create a useful object.
- Create a template which is a generalized, parameterized class for vary requirements and different situations to be used.

## Object

- An object is a being belonging to a class
- An object belonging to a specific class belongs to all the superclasses at the same time.

## Superclass vs subclass

- Subclass is more specialized or more specific than its superclass
- Each superclass is more general or more abstract than all its subclasses.

`class <subclass-name>:<superclass-name> {};`

When you create a subclass object, you should take care of the superclass initialization.

`<subclass-name>::<subclass-name>(void) : <superclass-name>() {}`

`: <superclass-name>()` invokes the superclass constructor before the current constructor starts its work.

## Inheritance

- Any object bound to a specific level of a class hierarchy inherits all the traits defined inside any of the superclasses.

## Encapsulation

The ability to hide (protect) selected values against unauthorized access. Neither accessed or modified if use exclusively.

`private:` to make variables inaccessible from outside, but it's by default.

`public:` accessible to users of a class.

When components are declared without **access specifier** (`public`, `private`), the components are **private** by default.

A function that is a class component has full access to other class components including private ones.

`<class-name>::<class-outsite-function-name>` implements class method outside the class.

## Constructor

**Constructor** uses the name same as the class name. A function with a name identical to its home class name. The constructor must not be declared using return type specifications. It can be overloaded.

**Copying constructor** is intended to copy one object into another. A constructor which has one parameter to an object of the same class and is used to copy data from the source object to the object **currently being created**. Implicitly invoked. The copied data could be modified during the process.

`const` in the parameter declaration is **a promise** that the function won't modify the values in the referenced object.

## Components

Variables (properties) and functions (methods) are class **compoents**.
- **Property (member variable)** is data of object
- **Method (member function)** is function of object

`this` pointer, a pointer to the current object.

## Pointer

When `S` is a class and `C` is a component, and `p` is a pointer to `S`, the `C` component is accessed by either
- `(*p).C`, explicitly dereferenced to access `C`
- `p->C`, implicitly dereferenced to access `C`.
