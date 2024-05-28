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

