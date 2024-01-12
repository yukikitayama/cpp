# Array

All the elements of an array have the same type.

C doesn't allow the use of arrays with elements of various types (Python is okay).

`int numbers[5];`

**Indexing** is the operation of selecting an element from the array.

Sum of array

```
int numbers[5], sum = 0;

for (int i = 0; i < 5; i++)
  sum += numbers[i];
```

Array initialization `int vector[5] = {0, 1, 2, 3, 4};`. If you don't specify, the default value is 0.

`int vector[] = {0, 1, 2};` is legal.

Two dimensional array `int chessboard[8][8];` (matrix)



