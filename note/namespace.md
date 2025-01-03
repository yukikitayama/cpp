# Namespace

When a program becomes complex by the combination of our own code, C++ standard libraries and third party libraries, we will have a **naming conflict**. **Namespaces** are used to reduce naming conflict.

We use namespaces as containers to group the code entities.

The **name space** is a space where a particular name has an unambiguous and clear meaning.

Name spaces exist to avoid the possibility of a **name conflict**.

## Use namespace

A way to qualify the names like `cout`, `endl` in order to bind them to their home name space (`std`)

- `using namespace std;` then `cout`. This uses entire `std`
- `std::cout`
- `using namesapce std::cout;`, `using namesapce std::cin;`. This uses only `cout` and `cin`. Use only what you need.

`::` is called **scope resolution operator**

`using namespace` statement affects the code after the statement until the end of the source file.

**Selective use** places the `using namespace` statement **inside a block** and its scope ends in the same place where the block ends.

```
{
  using namespace name;
  variable
}
```

Many programmers find it tedious to type `std::` all the time, you can use `using namespace std`.

```
using namespace std; // Use the entire std namespace
```

```
using std::cout; // Use only what you need
using std::cin;
using std::endl;
```

## Define namespace

```
namespace the_name_1 {
  int variable = 1;
}

namespace the_name_2 {
  int variable = 2;
}

the_name_1::variable
the_name_2::variable

or

using namespace the_name_1;

variable
```

If you define the namespace again with the same name as the previous, the namespace will be **extended**.

- **Original name space** is the first appearance of a name space.
- **Extension name space** is any name space witht the same name that appears after the original name space.

**Anonymous namespace** defines a name space without a name. Implicitly and automatically used in a source file.

**Rename** can work by `namespace new_name = old_name;`. It can work as aliasing. The old name is recognized under the new name only in the source file where the renaming occurred.
