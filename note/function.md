# Function

Without **function prototype**, compiler must know the function details before it is called. It means you cannot define function below the line of calling the function.

**Function prototype** tells the compiler what it needs to know without a full function definition. It's also called **forward declarations**. Place functions prototypes at the beginning of the program. Function prototypes are also used in **header files**. Semi-colon at the end. The compiler only cares about the types of argument and return. Argument of prototype is fine with only argument type, not with argument names.

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

**Default argument values** can be in the prototype or definition, **not both**. Best practice is in the prototype. It must appear at the **tail end of the parameter list**.

C++ allows us to create overload functions which are functions that have different parameter lists but have the same name. It's a type of abstraction and a type of **polymorphism** meaning many forms with the same concept. **Return type is not considered**. Overloaded functions with default arguments could trigger ambiguous call of the function, so need to be careful.

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
