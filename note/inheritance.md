# Inheritance

Superclass is **base** class (parent class, super class). Subclass is **derived** class (child class, sub class).

- **Is-A relationship**
  - Derived classes are sub-types of their base classes.
- **Generalization**
  - Combine similar classes into a single, more general class based on common attributes
- **Specialization**
  - Create new classes from existing classes providing more specialized attributes or operations.

```
class Base {

};

class Derived: access-specifier Base {

};
```

Access-specifier can be `public`, `private`, `protected`.

- `public`
  - Most commond
  - is-a relationship
- `private` and `protected`
  - has-a relationship
  - Different from composition

`protected` class member modifier
- Accessible from the Base class itself
- Accessible from classes Derived from Base
- Not accessible by objects of Base or Derived

When a Derived object is created
- Base class constructor executes
- Then Derived class constructor executes

Destructor
- Class destructors are invoked in the reverse order as constructors
- When a Derived object is destroyed,
  - Derived class destructor executes
  - Then Base class destructor executes
- Each destructor should free resources allocated in it's own constructors

A Derived class does NOT inherit
- Base class constructors
- Base class destructor
- Base class overloaded assignment oeprators
- Base class friend functions

`using Base::Base;` anywhere in derived class declaration allows explicit inheritance of base 'non-special' constructors by C++11.

`class Y:{visibility_specifier}X{...};` when `Y` is subclass and `X` is superclass.

When you omit the **visibility specifier**, it will be **private inheritance**, meaning all public superclass components turn into private access.

`class Y : public X {};` is a workaround, but the originally private components of super class won't be public. So subclass will lose access to the private components of superclass.

`protected` keyword allows components to behave like a public component when used by subclass, but looks like private component to the rest.

`public`, `private` and `protected` makes the **visibility inheritance model**.

**Overriding** is when a subclass declares a method of the name previously known in its superclass, the original method is overridden.

## Polymorphism

**Polymorphism** is a method to redefine the behavior of a superclass without touching its implementation.

It means that the one and same class may show many forms not defined by the class itself, but by its subclasses. It's the ability to realize class behavior in multiple ways. Any of its subclasses may change its behavior.

Use `virtual` keyword.

## Copying constructor

**Copying constructor** expects one parameter to be a reference to an object.

`A(A &)` if class is called `A`.

If there's no explicit copying constructor, an **implicit constructor** will be used. The implicit constructor simply clones.

`Class o1();`, `Class o2 = o1;`, `Class o3(o2);`. `=` operator of assignment notation and functional notation are used to copy.