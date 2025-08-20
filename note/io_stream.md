# I/O and Streams

- C++ uses a stream as an interface between the program and input and output devices
- It's sequence of bytes
- Header files
  - `iostream` for from/to streams
  - `fstream` for from/to file streams
  - `iomanip` manipulators to format stream I/O
- Stream classes
  - `ios`
  - `ifstream`
  - `ofstream`
  - `fstream`
  - `stringstream`
- Global stream objects
  - Global objects are initialized before main executes
  - `cin`
  - `cout`
  - `cerr`
  - `clog`

Stream manipulator
- **Stream manipulators** are member functions to control formatting on both input and output streams
- Can be member functions or a manipulator
```
std::cout.width(10);  // Member function
std::cout << std::setw(10);  // Manipulator
```
- Common stream manipulators
  - Boolean
    - `boolalpha`, `noboolalpha`
  - Integer
    - `dec`, `hex`, `oct`, `showbase`, `noshowbase`, `showpos`, `noshowpos`, `uppercase`, `nouppercase`
  - Floating point
    - `fixed`, `scientific`, `setprecision`, `showpoint`, `noshowpoint`, `showpos`, `noshowpos`
  - Field width, justification, fill
    - `setw`, `left`, `right`, `internal`, `setfill`
  - Others
    - `endl`, `flush`, `skipws`, `noskipws`, `ws`

Booleans
- **Default when displaying boolean value is `1` or `0`**.
- Sometimes the string `true` or `false` is appropriate.
- `std::cout << std::boolalpha;`
  - All further boolean output will be affected
- Method version (less used)
  - `std::cout.setf(std::ios::boolalpha);`
  - `std::cout.setf(std::ios::noboolalpha);`
- `std::cout << std::resetiosflags(std::ios::boolalpha);` resets to default
