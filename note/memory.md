# Memory

All work associated with memory allocation is organized by the compiler. High level languages and their compilers are designed to lease the developers' minds from such responsibilities.

But C++ gives developers control over how much memory is used and when it's used, meaning allocating and freeing up of memory.

`new` and `delete` the 2 specialized keywords that C++ gives us to have full control over how much memory is used and 
when it's used.

`new` keyword requests the creation of a new memory block. When it's no longer needed, the `delete` keyword returns the 
memory to the operating system.

## new

The **new statement** needs a type. If the created entity is an array, it needs size.

`new` returns a pointer of type.

The newly allocated memory area is not fill (initiated) in any way, so it contains **garbage**.

Example

```
float *array = new float[20];
int count = new int
```

## delete

`delete` allows us to release it (free it) when we no longer need the memory.

Example

```
delete [] array;
delete count;
```

To free up memory for array `float *array = new float[10];`, use `delete []` like `delete [] array;`

To free up memory for integer variable `int count = new int;`, use `delete count;`

Below, declare a variable `arr` which points to the data of type `float`. Use `new` keyword to allocate memory to store 
a float array consisting of 5 elements. Use `delete` keyword to release the memory. This array is called **dynamic array** 
which is created during the run of the program.

```
float * arr;

arr = new float[5];
for (int i = 0; i < 5; i++) 
  arr[i] = i * i;
 
delete[] arr;
```

## Use case

Ask the user how many numbers will be sorted and then allocate an array of the appropriate size. `int * numbers`, `numbers = new int[how_many_numbers];`, and `delete[] numbers;` are relevant part.

```
#include <iostream>

using namespace std;
int main(void) {
  int * numbers, how_many_numbers;
  int aux;
  bool swapped;

  cout << "How many numbers are you going to sort? ";
  cin >> how_many_numbers;
  if (how_many_numbers <= 0 || how_many_numbers > 1000000) {
    cout << "Are you kidding?" << endl;
    return 1;
  }
  numbers = new int[how_many_numbers];
  for (int i = 0; i < how_many_numbers; i++) {
    cout << "\nEnter the number #" << i + 1 << ": ";
    cin >> numbers[i];
  }
  do {
    swapped = false;
    for (int i = 0; i < how_many_numbers - 1; i++)
      if (numbers[i] > numbers[i + 1]) {
        swapped = true;
        aux = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = aux;
      }
  } while (swapped);
  cout << endl << "The sorted array:" << endl;
  for (int i = 0; i < how_many_numbers; i++)
    cout << numbers[i] << " ";
  cout << endl;
  delete[] numbers;
  return 0;
}
```

## Dynamic memory allocation

**Dynamic memory allocation** is allocating storage from the heap at runtime. We can use **pointers** to access newly allocated heap storage.

Use `new` keyword to allocate storage at runtime.

Use `delete` to deallocate storage

Allocated storage contains garbage until we initialize them

```
int *int_ptr {nullptr};

int_ptr = new int; // Allocate an integer on the heap

cout << int_ptr << endl; // Shows address

cout << *int_ptr << endl; // * deferences the pointer but it shows garbage, because it's not initialized yet.

*int_ptr = 100; // We initialize

cout << *int_ptr << endl; // 100

delete int_ptr; // frees the allocated storage
```

Deallocating array needs careful syntax

```
int *array_ptr {nullptr};

array_ptr = new int[size];

delete [] array_ptr; // Don't forget []
```

The pointer is the only way to access the data created dynamic memory allocation. If we lose the pointer, it's called **memory leak**. Before using `delete`, the pointer variable is gone or assign `nullptr` to the pointer, then we lose the only way to access the data.
