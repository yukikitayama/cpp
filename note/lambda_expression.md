# Lambda Expressions

Overview
- Introduced in C++11 and extended in C++14/17
- Consider motivation, function objects (functors), and relation between lambdas and function objects
- Stateless lambda expression and stateful lambda expression (capturing context)
- Relation between lambda and STL

Motivation
- Prior to C++11, people rely on **function objects** and **function pointers**.
- People write short functions and encapsulated tehm in small classes to product **function objects**.
- `operator()` is overloading operator, allows you to create function objects
- Often end up writing many short functions that control algorithms
- Many times the classes and functions are far from where they are used, leading to modification, maintenance, and testing issues
- Compiler cannot effectively inline these functions for efficiency.
- 