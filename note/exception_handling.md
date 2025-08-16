# Exception Handling

Basic concepts
- Exception handling is to indicate that an extraordinary situation has occurred
- It allows a program to deal with the situation in a suitable manner
- What causes exceptions?
  - Insufficient resources
  - Missing resourcs
  - Invalid operations
  - Range violations
  - Underflow and overflow
  - Illegal data
- Said **exception safe** when a code handles exceptions.
- **Exception** is an object or primitive type that signals that an error has occurred
- **Throwing an exception (raising an exception)** is that the code detects that an error has occurred.
- **Catching an exception (handle the exception)** is the code that handles the exception
- `throw` throws an exception
- `try {}` is where it may throw an exception
  - If the code throws an exception, the try block is exited
- `catch(Exception ex) {}` is where it handles the exception
  - It can have multiple catch handlers
  - If no catch handler exists, the program terminates.
- Usually we do exception handling when a function throws an exception.

Throwing an exception from function
- 
```
double calculate_avg(int sum, int total) {
  if (total == 0)
    throw 0;
  return static_cast<double>(sum) / total;
}
```

Catch
- Catch by reference `&` is the best practice
- `catch(...)` is catch all, catching any type of exception, at the last of catch block

Stack unqwinding
- If an exception is thrown but not caught in the current scope, C++ tries to find a handler for the exception by **unwinding the stack**.
- Function in which the exception was not caught terminates and is removed from the call stack.
- If a `try` block was used to then `catch` blocks are checked for match
- If no `try` block was used, or the `catch` handler doesn't match, stack unwinding occurs again
- If the stack is unwound back to `main` and no `catch` handler handles the exception, the program terminates.

User-defined exceptions
- Create exception classes and throw instances of those classes
- Best practice
  - Throw an object, not a primitive type
  - Throw an object by value
  - Catch an object by reference (or const reference)

Class-level exceptions
- Exceptions can be thrown from within a class
- Method works the same way as functions
- Constructors may fail, do not return any value, throws an exception if you cannot initialize an object
- **Do not throw exceptions from destructor**.
