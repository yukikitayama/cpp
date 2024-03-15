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

## Memory

**Memory leak** is failure to clean the memory. Objects are allocated memory and this memory should be released when the object finishes its activity and cleaning automatically.

**Automatic variable** is a variable inside a function which automatically finishes its life when the execution of the function ends.

**Destructor** is a special function to protect from memory leaking.
- named `~X` if class name is `X`.
- Once class has only one destructor.
- No parameters
- Invoked implicitly.

`auto` keyword came from **C** programming language, meaning automatic variable, creted and destroyed automatically. In C and C++, all variables are automatic by default unless declared explicitly as static. People still use `auto` for backward compatibility.

## Static component

`static` is a keyword to make a variable persist from **program prologue** to **program epilogue**.

A static component exists throughout the whole life of the program.

Only one component regardless of the number of instances of the class. Different objects of the same class share the static variables and functions.

Static class variables act as counters of instances of a particular class.

Static functions (or variable) cannot invoke a non-static function, because non-static function can exists when the object of a class exists. Compilation error.

Non-static function can invoke static function because the static function is available before any object has been created.

Static function can invoke static function, and non-static function can invoke non-static function.

## Stack

**Stack** is a separate area of memory to store all automatic variables. Not under my control.

**Heap** is a memory region where the entities are created on demand by `new`. Under my control.

Use `->` arrow operator to access the object in the heap.

## Objects inside objects

An object of any class may be the field of an object of any other class.

Constructors from inner objects (objects stored inside other objects) are invoked before the outer object's constructors start their work.

`class-constructor(...) : inner_field_constr1(...), inner_field_constr2(...) {...}` to list all the inner obejcts' constructors that you wish to use instead of the default constructors.