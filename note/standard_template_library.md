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

Iterators
- Iterators are implemented as template classes
- **Iterator** allows abstracting an arbitrary container as a sequence of elements
- They are objects that work like **pointers** by design
- Most container classes can be traversed with iterators.
- Iterators must be declared based on the container type they will iterate over
  - `container_type::iterator_type iterator_name;`
  - `std::vector<int>::iterator it1;`
- `begin()` is the first element
- `end()` is the location one after the last element.
  - **`end()` is not the last element**. 
- `std::vector<int>::iterator it = vec.begin();` initializes iterators
  - Or `auto it = vec.begin();` lets compiler deduce the type
  - If container is empty, `begin()` points at `end()`
```
while (it != vec.end()) {
  std::cout << *it << " ";
  ++it;
}

// Range-based for loop
for (auto it = vec.begin(); it != vec.end(); it++) {
  std::cout << *it << " ";
}
```
- In reverse iterator, last element is the first, and first is the last
  - `++` moves backward
  - `std::vector<int>::reverse_iterator it = vec.begin()` points at the last element
- Iterators
  - `begin()`, `end()`
  - `cbegin()`, `cend()` are `const_iterator`
  - `rbegin()`, `rend()` are `reverse_iterator`
  - `crbegin()`, `crend()` are `const_reverse_iterator`
- `std::list` is doubly linked list
  
Algorithms
- STL algorithms work on sequences of container elements provided to them by an iterator
- Many algorithms require extra information in order to do their work
  - Functors (function objects)
  - Function pointers
  - Lambda expressions (C++11)
- `#include <algorithm>`
- All STL algorithms expect iterators as arguments
- **Iterator invalidation** means it's possible iterators become invalid during processing
  - Iterators point to container elements
- `for_each` algorithm applies a function to each element in the iterator sequence 

`std::array`
- `#include <array>`
- Creates fixed size array
- Direct element access and provide access to the underlying raw array
- Use `std::array` instead raw arrays when possible
- All iterators available and do not invalidate
- `std::array<type, size>`
- `arr1.swap(arr2)` works if both sizes are the same.
- `std::accumulate` is in `#include <numeric>`.

`std::vector`
- `#include <vector>`
- Dynamic size
- Elements are stored in contiguous memory
- Direct element access (constant time)
- Rapid insertion and deletion at the back (constant time)
- Insertion or removal of elements other than at the back is linear time.
- All iterators available and mayb invalidate.
- `size()`, `capacity()` 
- Typical behavior of `capacity()` is, once vector exceeds the capacity by `push_back`, it **doubles the size**.
- `shrink_to_fit()`
- `push_back()`, `pop_back()`, `emplace_back()` is **efficient** to create a new object and place
- `std::sort()`, `std::find()`
- `insert()`

`std::deque`
- `#include <deque>`
- Dynamic size
- Elements are NOT stored in contiguous memory
  - Blocks contain contiguous elements, but blocks are not contiguous
- Direct element access (constant time)
- Rapid insertion and deletion at the front and back (constant time)
- Insertion or removal of elements in the middle is linear time
- All iterators are available and may invalidate
- `push_front`, `push_back`
- `pop_front`, `pop_back`
- `emplace_front`, `emplace_back`
