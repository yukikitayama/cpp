# Review

# Resource

- ChatGPT

# Review

- Ampersand after return type of a function signifies that the function returns a reference to an object of that type.
```
int x = 1;

int& f() {
    return x;
}

int main() {
    f() = 10;
    cout << x;
}

// Outputs 10.
```