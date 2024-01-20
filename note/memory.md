# Memory

`new` and `delete` the 2 specialized keywords that C++ gives us to have full control over how much memory is used and 
when it's used.

`new` keyword requests the creation of a new memory block. When it's no longer needed, the `delete` keyword returns the 
memory to the operating system.

`delete` allows us to release it (free it) when we no longer need the memory.

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


