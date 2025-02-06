# Array

- **Array** is a compound data type or data structure, collection of elements.
- All the elements of an array have the same type.
- C doesn't allow the use of arrays with elements of various types (Python is okay).
- Fixed size, once created, cannot change.
- Stored **contiguously in memory**.
- Very efficient

Declaration is `element_type array_name [constant number of elements];`. `int numbers[5];`

Initialization is `element_type array_name [number of elements] {init list};`. `int test_scores [5] {100, 95, 99, 87, 88};`

Initialization has many forms.
```
int scores [10] {3, 5}; // Init first element 3 and second element 5, and remaining to 0

int scores [10] {0}; // Init all to zero

int scores [5] {}; // This also initializes everything to zero.

int scores [] {1, 2, 3, 4, 5}; // Size automatically calculated
```

- The name of the array represent the memory location of the first element in the array (index 0)
- The `[index]` represents the offset from the beginning of the array. `[2]` is 2 offsets away from the beginning.

**Indexing** is the operation of selecting an element from the array.

Sum of array

```
int numbers[5], sum = 0;

for (int i = 0; i < 5; i++)
  sum += numbers[i];
```

Array initialization `int vector[5] = {0, 1, 2, 3, 4};`. If you don't specify, the default value is 0.

`int vector[] = {0, 1, 2};` is legal.

## Multi-dimensional array

Two dimensional array `int chessboard[8][8];` (matrix)

Initializing multi-dimensional array

```
int movie_rating [3][4]
{
    {0, 4, 3, 5},
    {2, 3, 3, 5},
    {1, 4, 4, 5},
};
```

## Vector

`vector_variable.data()` returns a pointer to the first element in the array.


