
Allocate an integer on the heap, and frees the allocated storage.
```
int *int_ptr {nullptr};
int_ptr = new int;
delete int_ptr;
```

Array pointer, don't forget `[]`
```
int *array_ptr {nullptr};
array_ptr = new int[size];
delete [] array_ptr;
```

Arrays and pointers
- The value of an array name is the address of the first element in the array
- The value of a pointer variable is an address
- The pointer and array name can be used (almost) interchangeably if the pointer points to the same data type as the array element.

```
int array_name[] {1, 2, 3};
int *pointer_name {array_name};
```
- `array_name[index]` is equal to `pointer_name[index]`
- `*(array_name + index)` is equal to `*(pointer_name + index)`

Use dereference operator to compare the data pointers point to
```
string s1 {"Frank"};
string s2 {"Frank"};

string *p1 {&s1};
string *p2 {&s2};

cout << (*p1 == *p2) << endl;  // true
```

Pointers and constants
- `const int *score_ptr {&high_score};` cannot change the data pointed to by the pointer.
  - The pointer itself can change and point somewhere else.
  - *Pointers to constants*
- `int *const score_ptr {&high_score};` cannot change the pointer itself and cannot point somewhere else
  - The data pointed to by the pointer can be changed
  - *Constant pointers*
- `const int *const score_ptr {&high_score};` cannot change the data pointed to and cannot change the pointer itself.
  - *Constant pointers to constants*

Passing pointers to a function
- xxx

Returning a pointer from a function
- `type *function();`
- Return a parameter pointer
- Return a pointer to memory dynamically allocated in the function
- Return a pointer to data that was pased in
- Never return a pointer to a local function variable, because after function execution, function local variable is gone.