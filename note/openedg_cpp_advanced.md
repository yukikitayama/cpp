# OPEN EDG C++ Advanced

- https://edube.org/study

Introduction
- Standard Template Library (STL) provides ready-to-use solutions for many programming problems.
- Every C++ compiler is accompanied by STL
- As long as you use STL, your program portability is high
- STL can be divided into **Containers** and **Algorithms**.

- **Containers**, or collections, are meant to contain something inside.
- An array is a very basic container

STL can be divided into the following parts
- containers
- algorithms
- input/output
- strings
- numeric library
- iterators
- utilities
- localizations
- regular expressions
- atomic operations
- thread support
- concepts

Containers
- sequential containers
  - `vector`
  - `list`
  - `deque`
- associative containers
  - `set`
  - `multiset`
  - `map`
  - `multimap`
- container adapters
  - `stack`
  - `queue`
  - `priority_queue`

Algorithm
- A means to transform data
- Expressed as functions
- Non-modifying sequence operations
- Modifying sequence operations
- Sorting
- Set operations
- Binary search
- Heap operations
- Min/max operations

Input/output library
- Input and output operations: console and files

Iterators
- Iterators are generalization of pointers
- Input iterator
- Output iterator
- Forward iterator
- Bidirectional iterator
- Random access iterator
- Every type of iterator has its own set of operations, which must be supported for a particular type to be called an iterator.

Utilities
- Last part of STL
- Date/time manipulation
- Functional objects

Sequence containers
- Maintain a certain order to the elements inside them

vector
- Dynamic array
- Continuous memory block
- `allocator` is responsible for providing a memory model for the container elements.
- a vector is a template class

https://edube.org/learn/cpp-advanced/stl-sequential-containers-21