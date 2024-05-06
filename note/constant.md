# Constant

`const` is **unalterable** in C++.

Both `const in size1 = 100;` and `int const size2 = 100;` forms are acceptable. **Read-only variables**.

You must not declare a `const` without initialization. `const int size;` will cause a compilation error.

**Defined constants** `#define p1 3.14`. But don't use defined constants in Modern C++.

**Constant pointer** can be declared with a specific syntax. `const` keyword is placed after the `*` and before the variable name. These pointers cannot be incremented or decremented. The entities pointed to by the const pointers may be modified.

```
int arr[5] = {1, 2, 4, 8, 16};
int * const iptr = arr + 2;
char * const cptr = "Why?";
```

Not allowed.

```
--iptr;
++cptr;
```

Allowed.

```
*iptr = 0;
*cptr = 'T';
```

**Pointers to constants** are pointers to constants. It's different from the above.

Given,

```
int arr[5] = {1, 2, 4, 8, 16};
const int *iptr = arr + 2;
const char *cptr = "Why?";
```

Not allowed,

```
*iptr = 0;
*cptr = 'T';
```

Allowed,

```
--iptr;
++cptr;
```

**Constant pointers to constants** do both above.

Given,

```
int arr[5] = {1, 2, 4, 8, 16};
const int * const iptr = arr + 2;
const char * const cptr = "Why?";
```

Not allowed,

```
--iptr;
++cptr;
*iptr = 0;
*cptr = 'T';
```

**Constant function parameters passed by reference** is a strong form of promise that I'm not going to modify your actual parameter.

Not allowed,

```
int fun(const int &n) {
    return n++;
}
```
