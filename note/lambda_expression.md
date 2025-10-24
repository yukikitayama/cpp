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

Stateless lambda expression
- `[] () -> return_type specifiers { };`
  - `[] () { std::cout << "Hi"; }();` displays Hi
- `[]` is capture list, defines the context in which the lambda executes
- This empty `[]` is stateless lambda expression, captures no information from the environment
- Lambda expression can take value parameter and reference parameter (`&`, no copy is made)
- Pointer parameter (`*`) can also be used to achieve pass by reference.
  - Should use dereference operator (`*`) in the lambda expression body.
  - When calling the lambda expression, need to use referencing operator (`&`, address-of operator)
- Can use `auto` as lambda parameter type specifiers
  - e.g., `[] (auto x) {}`, x can be `int`, `float`, etc.
- Can use lambda expression as function parameters
  - Use `#include <functional>` and `func(std::function<void(int)> l)`, C++14
    - `void` is return type, `int` is parameter type
  - Use function pointer, `func(void (*l) (int))`, C++14
    - `void` is return type, `int` is parameter type
  - C++20, `func(auto l)`
- Can return lambda expression from functions
  - `#include <functional>` and `std::function<void(int)> func() {}`
  - `auto func() {}`
- Can use lambda expression as **predicate**.
  - Expects one or more parameters, and returns boolean (predicate lambda, predicate function)

Stateful lambda expression
- `[captured_variables] () -> return_type specifiers {};`
- `[captured_variables]` is non-empty capture list, defines what information/variables should be captured
- `[x]() {}` is capture by value as const, cannot modify
- `[x]() mutable {}` allows to modify the variable
- `[&x]() {}` is capture by reference, can modify variables
- **Default captures**
  - `[=]` captures everything by value
  - `[&]` captures everything by reference
  - `[this]` default capture this object by reference
  - `[=, &y]` captures everything by value, but capture only y by reference
  
