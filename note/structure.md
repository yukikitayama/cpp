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

