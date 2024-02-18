# Structure

Structure contains any number of elements of any type.

Each of these element is called a **field**. The field name must be unique.

**Struct tag** is the name of the structure, capital letter by convention.

```
struct STUDENT {
  string name;
  float time;
  int recent_chapter;
};

struct STUDENT stdnt;
STUDENT stdnt2;

stdnt.time = 1.5;
```

The declaration doesn't create a variable, but only describes the structure.

`.` **selection operator**. 

**Structure cannot be a field of iteself, like defining a structure `A` and `A` has a field `A`. But **a structure could be a field inside another structure**.

## Arrow operator ->

**Arrow operator** `->` allows to access elements in **Structure** and **Union**. It's used with **pointer variable pointing to a structure or union**.

`(pointer_name)->(variable_name)`

https://www.geeksforgeeks.org/arrow-operator-in-c-c-with-examples/

## Coding

It’s also possible to kill two birds with one stone by defining the structure tag and declaring any number of variables simultaneously in the same statement, like this:

```
struct DATE {
     int year, month, day;
} DateOfBirth, Visits[100];

DATE current_date;
```

We can also omit the tag and declare the variables only:

```
struct {
  int year, month, day;
}
the_date_of_the_end_of_the_world;
```

## Structure's initiator

- **Structure's initiator** is enclosed in curly brackets and contains a list of values assigned to the subsequent fields, starting from the first.
- The value listed in the initiator must conform to the types of the field.
- If the initiator contains fewer elements than the number of the structure's fields, it's presumed that the list is automatically extended with zeros.

Tricky example

```
struct A {
    int a;
    float b;
};

struct B {
    int b;
    float a;
};

struct C {
    A a;
    B b;
};

// 1 goes to C's a field's a
// 2 goes to C's a field's b
// 3 goes to C's b field's b
// 4 goes to C's b field's a
C c1 = { 1, 2, 3, 4 };

cout << c1.a.a << endl;  // 1
cout << c1.a.b << endl;  // 2
cout << c1.b.a << endl;  // 4, messing the order
cout << c1.b.b << endl;  // 3
```

