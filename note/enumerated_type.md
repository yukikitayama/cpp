# Enumerated type

The C++ language pre-processor offers a method to create symbols which will be replaced by their values during compilation time. 

`#define symbol string`. The pre-processor will automatically replace each occurrence of the `symbol` with the `string`. 

`symbol` is upper-case letters by convention to distinguish from regular variables

`string` is a series of characters.

**Enumerated type** looks lile `enum weekday (SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY);`. `weekday` is new type created. `(...)` is **a list of all of the values creating the new type**. The compiler implicitly assign `0` to the first element of the list.

**When a value of the type is assigned to any int value, everything is okay**.

`int day = SUNDAY;`

**Any enum type value is implicitly promoted to the int type**. **All symbols in the list must be unique**. **enum type symbols must be unique across a namespace**, meaning two different `enum` types can't use idential symbols.
