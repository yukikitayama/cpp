# Memory

`new` and `delete` the 2 specialized keywords that C++ gives us to have full control over how much memory is used and 
when it's used.

`new` keyword requests the creation of a new memory block. When it's no longer needed, the `delete` keyword returns the 
memory to the operating system.

`int count = new int;`, `float *array = new float[10];`.

`delete` allows us to release it (free it) when we no longer need the memory.

`delete [] array;`, `delete count;`


