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

