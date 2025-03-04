# Function

## Function prototype

- Without **function prototype**, compiler must know the function details before it is called. 
- It means you cannot define function below the line of calling the function.
- **Function prototype** tells the compiler what it needs to know without a full function definition. 
- It's also called **forward declarations**. Place functions prototypes at the beginning of the program. 
- Function prototypes are also used in **header files**. Semi-colon at the end. 
- The compiler only cares about the types of argument and return. 
- Argument of prototype is fine with only argument type, not with argument names.

```
int function_name(); // prototype

int function_name()
{
  statements(s);
  return 0;
}

int func(int);

int func(int num) {
  return num * num;
}
```

The data to be passed to a function
- Called **argument** in the function call
- Called **parameter** in the function defition

**Pass-by-value** is the usual way you pass data into a function
- A **copy** of the data is passed to the function
- Whatever changes you make to the parameter in the function does not affect the argument that was passed in.
- Pass-by-value is the default behavior of C++ function.

**Formal parameters** are the parameters defined in the function header.

**Actual parameters** are the parameters used in the function call ("the arguments").

**Default argument values**
- can be in the prototype or definition, but **not both**. 
- Best practice is in the prototype. 
- It must appear at the **tail end of the parameter list**.

**Overloading functions**
- C++ allows us to create overload functions which are functions that have different parameter lists but have the same name. 
- It's a type of abstraction and a type of **polymorphism** meaning many forms with the same concept. 
- **Return type is not considered**.
  - `int get_value();` and `double get_value();` produce compiler error.
- Overloaded functions with default arguments could trigger ambiguous call of the function, so need to be careful.

Passing arrays to functions
- Passing arrays to functions needs to provide **square brackets** in the formal parameter description. 
- **The array elements are not copied**, because the array name evaluates to the location of the array in memory - this address is what is copied. 
- The function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array). 
- Since it's passing the location of the array, the function can modify the actual array. 
- `const` parameters (e.g. `const int nums []`) can tell the compiler that function parameters are const (read-only). 
- If a function attempts to modify the array, it will result in a compiler error.

Pass by reference
- **Pass by reference** is to change the actual parameter from within the function body. 
- It allows us to use the location or address of the actual parameter. 
- Use **reference parameter** `&param_name` to tell the compiler to pass in a reference to the actual parameter. 
- The formal parameter will now be an alias for the actual parameter. 
- If pass-by-reference has concerns for overwriting the contents, `const` keyword can be used with `&`.
- Pass by reference allows you to avoid copy a huge data, becayse pass by value always creates a copy of the given data.

Pass by reference
- It allows us to change an actual parameter if we need to
- We don't make a copy of the parameter which could be large and take time.
  - e.g. When we pass a huge vector to a function, passing reference to the vector is efficient, because the pass-by-value instead makes copy and allocate memory before running a function.

Scope rules

C++ uses static or lexical scoping, meaning the scope is determined in the order of the code lines. C++ has 2 scopes; Local scope (Block scope) or global scope.

Local scope (Block scope)
- Identifiers declared in block `{}`.
  - Every time you see a block, it creats a new level of scope.
- Only visible within the block
- Function parameters have this
- With nested blocks inner blocks can see but outer blocks cannot see in.

**Static local variables** are the values which are preserved between function calls. It has the same lifetime as the program. Only visible in the statements of the function bodies. e.g. `static int value {10};`. Only initialized the first time the function is called. It's handly if you wanna know the value of the previous function calls.

For example, one function is defined to initialize a static local variable. We call this function for the first time, the variable is initialized. When we call the same function again in the same program, it will skip the initialization and keep using the value from the previous function call. Initialization only happens once.

Global scope
- Identifiers declared outside any function or class.
- Visible to all parts of the program
- Global constants are ok.
- **Best practice is don't use global variables**.

**Function call stack** is Last In First Out, push and pop.

**Stack frame (activation record)**
- Functions return control to functions that called it
- Each time, a new activation record is created and push it on stack
- When a function terminate, the activation record is popped and return.
- Local variables and function parameters are allocated on the stack
- Stack size is finite, so if exceeds, **stack overflow**.

**Inline function** `inline`
- Avoid **function call overhead**
- Generally faster
- Could cause code bloat
- Compilers optimizations are very sophisticated, so it will likely inline even without your suggestion, so no need to worry about too much.

```
inline int add_numbers(int a, int b) {
    return a + b;
}
```

Recursive function has base case, and divides the rest of problem into subproblem and do recursive call.



-----------

- Predefined functions or library functions
- Functions witten by you

Creating functions is always a good idea even if the new function is invoked only once during the program's execution.

**Function declaration** or **function prototype** is to specify the functions elements such as name, parameters, and 
type of result. Function declaration is intended to **inform a compiler** about the function's name, its return type and 
type of parameters if any.

A function of type `void` returns nothing. Such a function may have an effect. If you omit the returned type, the compiler 
assumes that the function returns a value of type `int`.

You have to put the function declaration before the first function invocation.

**Function definition** is the body of the declared function.

**Formal parameter** is the parameter defined within the function. **Actual parameter** is the value transferred into 
the function.

`float square(float x);` is an example of function declaration. You can omit the formal parameter's name in the function 
prototype like `float square(float);`

```
float square(float x) {
  float result;
  
  result = x * x;
  return result;
}
```

`void func(void);` returns nothing and has no parameters.

If the return type is `void`, you can omit `return` statement. It's assumed that the `return` statement is implicitly 
executed within the `void` function's body just before the closing bracket.

If the return type is not `void`, the body must contain at least one `return` statement.

## Global variable

**Global variables** are declared outside any function and are accessible for all the functions declared in the same 
source file.

The variable declaration has to precede the function definition to be recognizable by the function.

If a function modifies any global variable, the function has a **side effect**. Side effects are not recommended and bad 
programming style because it makes the code difficult to understand.

```
int globvar = 0;

void func(void) {
  globvar++;
}
```

**Passing parameters by value** is a way to transfer a value from the invoker to the function. The formal parameter's 
value doesn't replace the actual parameter's value upon return from the function.

**Passing parameters by reference** allows functions to affect an actual parameter's value. Place `&` sign in front of 
the parameter's name. The formal parameter is just a synonym of an actual parameter. Every modification made into a 
formal parameter immediately affects an associated actual parameter.

If a parameter is declared as passed by reference, its corresponding actual parameter must be a variable.

- type `name` - the `name` parameter is passed by value
- type `&name` - the `name` parameter is passed by reference

```
#include <iostream>

using namespace std;

void can_i_change_my_parameter(int & param) {
  cout << "----------" << endl;
  cout << "I have got: " << param << endl;
  param++;
  cout << "I'm about to give back: " << param << endl;
  cout << "----------" << endl;
}

int main(void) {
  int
  var = 1;

  cout << "var = " <<
    var << endl;
  can_i_change_my_parameter(var);
  cout << "var = " <<
    var << endl;
  return 0;
}

/*
var = 1
----------
I have got: 1
I'm about to give back: 2
----------
var = 2
*/
```

Transferring a pointer to value is a way to pass by value but propagate the value outside the function. But this way is 
not recommended. The declared function with prototype is like `void func(int *ptr);`

**Default parameter** `void greet(string greet, int repeats = 1);`. When you set default parameter, the order of 
parameters is important. Non-default parameters must be coded before the default ones.

**Prologue** is the part of the code implicitly executed before the function code. Prologue stores parameters in **stack**.

**Epilogue** is implicitly executed just after the function's code. Epilogue transfers the function result and clears the 
stack made by prologue.

The function code, prologue, epilogue occupy the same memory space, so the code is compact. But sometimes it cannot be 
fast if the function invocation happens many times and if the function is shorter than prologue and epilogue.

Insert the function's code directly into the invoker's code

## Function inlining

In function inlining, we expect the function to be invoked very often. Such function is **inline function**.

`inline int function(int parameter)` or `int inline function(int parameter)`.

## Overloading

Having more than one function of the same name

Consideration by
- Number of parameters
- Parameters' type

The `return` type isn't taken into consideration.

- `<cmath>` contains common mathematical calculations
- Compiler must know the function details before it is called, without prototype