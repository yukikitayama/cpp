# Inheritance

Superclass is **base** class. Subclass is **derived** class.

`class Y:{visibility_specifier}X{...};` when `Y` is subclass and `X` is superclass.

When you omit the **visibility specifier**, it will be **private inheritance**, meaning all public superclass components turn into private access.

`class Y : public X {};` is a workaround, but the originally private components of super class won't be public. So subclass will lose access to the private components of superclass.

`protected` keyword allows components to behave like a public component when used by subclass, but looks like private component to the rest.

`public`, `private` and `protected` makes the **visibility inheritance model**.
