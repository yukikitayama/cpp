# Exception

**End of file (EOF)** is the event where there is no more data to process. EOF can be caused by **Control-D** in Linux and **Control-Z** in Windows.

If there is no data in the input stream `cin` or the data is invalid, the `cin` stream returns a null reference.

**Exception** means when things don't go as they are supposed to. When something goes wrong in a program, an exception arises. Some exceptions arise automatically, while others may be created at our request.

The part of the code that may cause problems needs to be marked within a block. When an exception arises, the execution of the block is terminated, but the program itself is still alive. 

Exception
- `logic_error`
  - Program logic, algorithm, implementation, data validity
- `runtime_error`
  - Unexpected accidents like a lack of memory

These entities are defined within the header file `#include <exception>`.

The exception class has a constuctor, virtual destructor, and virtual function `what` `virtual char* what()`, which provides a text describing the nature and cause of the exception.

In C++, **division by zero doesn't throw an exception**.

`catch` statement will be placed after `try` statement, and it will catch only those exceptions that are compatible with the specified type.

`catch(...)` doesn't identify the exception object and doesn't make any use of it, but it acts for some very general actions, such as final cleaning.

`catch(exception &ex)` can catch all exceptions because all exceptions are derived from the `exception` class and compatible in type.



