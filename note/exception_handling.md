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
