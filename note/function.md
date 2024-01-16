# Function

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
