# Smart pointers

Issues with raw pointers
- C++ is flexible with memory management of allocation, deallocation and lifetime management
- But it has potential serious problems such as uninitialized pointers, memory leaks, dangling pointers, and not exception safe-
- Raw pointers are unclear about who owns it and when to be deleted.

Smart pointer
- An object that can only point to heap-allocated memory
- Automatically call delete when no longer needed
- Adhere to RAII principles (Resource Acquisition Is Initialization)
- C++ smart pointers are unique pointer, shared pointer and weak pointer.
- `#include <memory>`
- Defined by class template as wrapper around a raw pointer
- Has overloaded operators like dereference (*), member selection (->)
- Pointer arithmetic is not supported (++, --)
```
std::smart_pointer<Some_Class> ptr = ...;
ptr->method();
cout << (*ptr) << endl;

// ptr will be destroyed automatically when no longer needed
```

RAII (resource acquisition is initialization)
- Common pattern in software design based on container object lifetime
- RAII objects are allocated on stack
- Resource acquisition means open a file, allocate memory, acquire a lock
- Is initialization means that the resource is acquired in a constructor
- Resource relinquishing happens in the destructor
  - Close the file, deallocate the memory, release the lock

Unique pointer
- simpler smart pointer that's very efficient
- `unique_ptr<T>`
- Points to an object of type `T` on the heap
- There can only be one pointing to the object on the heap
- Owns what it points to, cannot be assigned or copied, but can be moved.
- When the pointer is destroyed, what it points to is automatically destroyed.
- `std::unique_ptr<int> p1 = {new int {100}};`
- `get()` returns address
- `reset()` makes the pointer `nullptr`
- Can directly passed to `if`
- `make_unique` C++14
  - `auto p = make_unique<int>(100);`
  - No calls to `new` or `delete`, more efficient