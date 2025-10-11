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

`std::list`, `std::forward_list`
- Sequence containers
- Non-contiguous in memory
- No direct access to elements
- Very efficient for inserting and deleting elements once an element is found

`std::list`
- `#include <list>`
- Dynamic size
- Direct element access is not provided
- Rapid insertion and deletion of elements anywhere in the container (constant time)
- All iterators available and invalidate when corresponding element is deleted.
- `size()`, `max_size()`, `front()`, `back()`
- `push_back()`, `pop_back()`
- `push_front()`, `pop_front()`
- `emplace_back()`, `emplace_front()`
- `insert(iterator, element)`
- `erase(iterator)`
- `resize(size)`
- list is bidirectional, so we can iterate backward and forward

`std:forward_list`
- `#include <forward_list>`
- Dynamic size
- Uni-directional, singly-linked
- Less overhead than `std::list`
- Direct element access is not provided
- Rapid insertion and deletion of elements anywhere in the container (constant time)
- Reverse iterators not available
- Iterators invalidate when corresponding element is deleted.
- `size()` not available
- `back()` not available. Only `front()`.
- `push_front()`, `pop_front()`, `emplace_front()`
- `insert_after()`, `emplace_after()`, `erase_after()`
- `resize()`

The below clears anything in standard in. It's a good practice
```
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

The STL Set containers
- Associative containers
  - Collection of stored objects that allow fast retrieval using a key
  - STL provides Sets and Maps
  - Usually implemented as a balanced binary tree or hashsets
  - Most operations are very efficient
- Sets
  - `std::set`
  - `std::unordered_set`
  - `std::multiset`
  - `std::unordered_multiset`

`std::set`
- `#include <set>`
- Similar to a mathematical set
- Ordered by key
- No duplicate elements
- All iterators available and invalidate when corresponding element is deleted.
- Uses `operator<` for ordering and determines if an element exists in a set
- `set.insert()` returns a `std::pair<iterator, bool>` 
  - First item is an iterator to the inserted element or to the duplicate in the set
  - Second item is a boolean indicating success or failure of inserting.
- `set.find(element)` is more efficient than `std::find(set_object)`

`std::multi_set`
- `#include <set>`
- Sorted by key
- Allows duplicate elements
- All iterators are available

`std::unordered_set`
- `#include <unordered_set>`
- Elements are unordered
- No duplicate element allowed
- Elements cannot be modified
  - Must be erased and new element inserted
- No reverse iterators are allowed

`set::unordered_multiset`
- `#include <unordered_set>`
- Elements are unordered
- Allows duplicate elements
- No reverse iterators are allowed

The STL Map containers
- Associative containers
  - Collection of stored objects that allow fast retrieval using a key
  - STL provides Sets and Maps
  - Usually implemented as a balanced binary trees or hashsets
  - Most operations are very efficient
- Maps
  - `std::map`
  - `std::unordered_map`
  - `std::multimap`
  - `std::unordered_multimap`

`std::map`
- `#include <map>`
- Similar to a dictionary
- Elements are stored as Key, Value pairs (`std::pair`)
- Ordered by key
- No duplicate elements (keys are unique)
- Direct element access using the key
- All iterators available and invalidate when corresponding element is deleted.
- `std::make_pair()`
- `map_object["key"] = "value";`
- `map_object.at("key") = "value";`
- `find()`, `erase()`, `clear()`, `empty()`

`std::multi_map`
- `#include <map>`
- Ordered by key
- Allows duplicate elements
- All iterators are available

`std::unordered_map`
- `#include <unordered_map>`
- Elements are unordered
- No duplicate elements allowed
- No revere iterators are allowed.

`std::unordered_multimap`
- `#include <unordered_map>`
- Elements are unordered
- Allow duplicate elements
- No reverse iterators are allowed