# Loop

- for loop
- Range-based for loop
- while loop
- do-while loop

## For loop

First initialization is executed once before any iterations.
Then condition is checked.
If the condition is True, the body will be executed.
Then increment.

```
for (initialization; condition; increment)
    statement;

for (int i {1}; i <= 5; ++i)
    cout << i << endl;
```

Okay to have multiple variables by `,`

```
for (int i {1}, j {5}; i <= 5; ++i, ++j) {
    cout << i * j << endl;
}
```

This is valid endless loop

```
for (;;)
    cout << "Endless loop" << endl;
```

Using `unsigned` instead of `int` can remove compiler warning, because vector `size()` won't be negative

```
vector <int> nums {1, 2, 3, 4, 5};
for (unsigned i {0}; i < nums.size(); ++i)
    cout << nums[i] << endl;
```

## Range-based for loop

C++11 **Range-based for loop** allows us to provide sequence to a for loop.

We can use `auto`. Can use **vector** too.

```
int scores [] {100, 90, 97};

for (auto score : scores) {
    cout << score << endl;
}
```

## While loop

boolean flag while loop

```
bool done {false};

while (!done) {
    // Do something
    done = true;
}
```

## do-while loop

**do-while loop** is post test loop. Loop body will be executed at least once

Need to declare variable outside do body (before `do`) is the variable is used in while expression.

```
do {
    statements;
} while (expression);
```

## Infinite loop

```
for (;;)
  cout << "This will print forever" << endl;
```

```
while (true)
  cout << "This will print forever" << endl;
```

```
do {
  cout << "This will print forever" << endl;
} while (true);
```

## Nested loop

Inner loop is faster than outer loop.

2D vector example using `auto`.

```
vector<vector<int>> vector_2d
{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (auto vec: vector_2d) {
    for (auto val: vec) {
        cout << val << " ";
    }
    cout << endl;
}

/*
1 2 3
4 5 6
7 8 9
*/
```