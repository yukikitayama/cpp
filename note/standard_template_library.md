# Standard Template Library (STL)

What is the STL?
- A library of powerful, reusable, adaptable, generic class and functions
- Implemented using C++ templates
- Implement common data structures and algorithms
- STL was developed in 1994 by Alexander Stepanov
- Assortment of commonly used containers
- Known time and size complexity
- Tried and tested extensively
- Consistent, fast, and type-safe

Element of the STL
- Containers
  - Collections of objects or primitive types
  - array, vector, deque, etc.
- Algorithms
  - Functions for processing sequences of elements from containers
  - find, max, count, etc.
- Iterators
  - Generate sequences of element from containers
  - forward, reverse, by value, etc.
- Examples
  - `std::sort(v.begin(), v.end());` sorts vector
  - `std::reverse(v.begin(), v.end());` reverses vector
  - `sum = std::accumulate(v.begin(), v.end(), 0);` accumulates numbers.

Types of containers
- Sequence containers
  - array, vector, list, deque
- Associative containers
  - set, multi set, map
- Container adapters
  - stack, queue, priority queue

Types of iterators
- Input iterators
- Output iterators
- Forward iterators
- Bi-directional iterators
- Random access iterators

Types of algorithms
- About 60 algorithms in STL
- Non-modifying
- Modifying

Generic programming
- **Generic programming** means writing code that works with a variety of types as arguments, as long as those argument types meet specific syntactic and semantic requirements

Macros
- C++ preprocessor directives
- No type information
- Simple substitution
- Best practice of macro is to wrap everything with `()`

C++ template
- Blueprint
- Define a function with a placeholder type, then we plug in actual data type when we need it
  - Allow **plugging-in**
- Compiler generates the appropriate function/class from the blueprint
- Supports concept of generic programming or meta-programming.
- Complex and error messages from compliler are difficult to understand.
- `typename` or `class`
```
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int a {10};
int b {20};

max<int>(a, b);
```
- vector and smart pointers are implemented as a template class.

C++ class template
- Similar to function template but at the class level
- Allow pluggin-in any data type
- Compiler generates the appropriate class from the blueprint
- `include <utility>`, `std::pair<>`, 
- **Template classes are typically completely contained in header files**.

std::array
- Since C++11, the STL has `std::array` which is a template-based array class.
- Use `std::array` instead of raw arrays whenever possible.

STL containers
- **Container** is data structure that can store object of almost any type
- It's implemented in template-based classes
- Each container has member functions
- Each container has an associated header file `#include <container_type>`
- All primitives are okay to stored in the container
- When an object is stored in the container, the **copy** of the element will be stored.
- So the element should be copyable, assignable and moveable for efficiency
- Ordered associative containers must be able to compare elements.
  - `operator<`, `operator==`