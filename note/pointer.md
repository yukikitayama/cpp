# Pointer

The **value** of the variable is what the variable stores.

The **address** of the variable is information about where this variable is placed.

**Pointers** are used to store information about the location (address) of any other data. It points to the specific 
data referred to in the declaration.

`int *p;` `p` is a pointer and will be used to store information about the location of the data of type `int`. `p` is a 
variable of type "pointer to int". `p` is a variable of "type int asterisk"

`p = 0;` **null pointer** a pointer which is assigned a value of zero. It doesn't point to anything. But this confuses 
developers, so `p = NULL;` is used instead by convention. This is **macro**, a variable but you cannot modify its value.
 `NULL` should be assigned only to pointers. To use `NULL`, you need to include the header file `cstring` or any other header file which include `cstring` like `iostream`.

We can assign to the pointer **a value which points to any already existing variable**. `p = &i;` `&` is a unary prefix operator, **reference operator**. This operator finds the address of its argument. So 
`p` variable points to the place where the `i` variable is stored in the memory.

```
int ivar, *ptr;
ivar = 2;
ptr = &ivar;
*ptr
```

`*` in the last line is **dereferencer**, getting a value which is stored at the location pointed to by the pointer.

`cout << *ptr;` will display `2` on the screen, as the dereferenced `ptr` value is sent to `cout`.

`*ptr = 4;` will change the value of a variable pointed by the pointer.

## sizeof

`sizeof` is a **unary prefix operator**. It provides information on **how many bytes of memory its argument occupies**.

`char` values always occupy **one byte**. `i = sizeof(char);` variable `i` will be assigned the value of `1`. Below, 
variable `i` will be set to the value of `10`.

```
char tab[10];

i = sizeof tab;
```

Below, typically, the value of `int` type occupy `32 bits = 4 bytes`, so `sizeof i` gives `4`.

```
int i;

i = sizeof i;
```

```
#include <iostream>

using namespace std;

int main(void) {
  cout << "This computing environment uses:" << endl;
  cout << sizeof(char) << " bytes for chars" << endl;
  cout << sizeof(short int) << " bytes for shorts" << endl;
  cout << sizeof(int) << " bytes for ints" << endl;
  cout << sizeof(long int) << " bytes for longs" << endl;
  cout << sizeof(float) << " bytes for floats" << endl;
  cout << sizeof(double) << " bytes for doubles" << endl;
  cout << sizeof(bool) << " byte for bools" << endl;
  cout << sizeof(int * ) << " bytes for pointers" << endl;
  return 0;
}

This computing environment uses:
1 bytes for chars
2 bytes for shorts
4 bytes for ints
8 bytes for longs
4 bytes for floats
8 bytes for doubles
1 byte for bools
8 bytes for pointers
```

## Array

The name of an array without the indices is a synonym of the pointer pointing to the first element of the array.

`int *ptr, arr[3]`, then `arr == &arr[0]` is true. `&` is reference operator, so it gives the address of the first element of `arr` array, and it's true, because the array name `arr` also points to the first element of the array.

## Arithmetic of pointers

- pointer + integer -> pointer
- pointer - integer -> pointer
- pointer - pointer -> integer
- pointer == pointer -> integer (1 because it's true)
- pointer != pointer -> integer (0 because it's false)

When addition of pointers occurs,
1. Check the type pointed to by the pointer.
2. Check how many bytes of memory the type occupies
3. The value we want to add to the pointer is multiplied by the given size
4. The address is increased by the product

## Amorphous pointer

`void *ptr;`

A pointer that points at nothing. It can point to any value of any type. 

You cannot dereference it by `*ptr;`.

Useful when you don't know what it may be used for in the future. As soon as it becomes clear, the pointer can easily be converted into another pointer of the desired type.


## Array of pointers

`int **` is **a pointer to a pointer to `int`**

## Implicit conversions

https://edube.org/learn/c-essentials-part-1-1/conversions-24

