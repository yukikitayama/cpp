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

Integer
- Default format
  - Integers are base 10
  - `noshowbase` prefix of oct and hex isn't displayed.
  - `nouppercase` when displaying prefix
  - `noshowpos` no `+` displayed for positive numbers
- `std::cout << std::dec << num << std::endl;`
  - `std::hex`, `std::oct`
- `std::cout << std::showbase;`
- `std::cout << std::showbase << std::uppercase;  // For 0XFF`
- `std::cout << std::showpos;  // +255`
- `std::cout.setf(std::ios::showbase)`

Floating point
- Default number of digits displayed is 6
- `setprecision`
- `fixed`
- `noshowpoint`
- `nouppercase`
- `noshowpos`
- `std::cout << std::setprecision(3) << std::fixed;` will display precision 3 from the decimal
- `std::cout << std::setprecision(3) << std::scientific;`
- `std::cout << std::setprecision(3) << std::scientific << std::uppercase;`
- `std::showpoint` shows trailing 0s.
- Returning to general settings
  - `std::cout.unsetf(std::ios::scientific | std::ios::fixed);`
  - `std::cout << std::resetiosflags(std::ios::floatfield);`

Align and fit
- Default when displaying floating point values is
  - `setw` not set by default
  - `left` when no field width, `right` when using field width
  - `fill` not set by default, blank space is used.

Input files
- `#include <fstream>`
- Declare an fstream or `ifstream` object
- Connect it to a file
- Read data via stream
- Close the stream
- `std::fstream in_file {"text.txt", std::ios::in};`
- `std::ifstream in_file {""};`
  - Input file only
- `in_file.close();`
- Use `>>` to read from `in_file`
- `std::getline(in_file, lin);` reads the file one line at a time
```
std::ifstream in_file;
std::string filename;
std::cin >> filename;

in_file.open(filename);

if (in_file.is_open()) {
  // read from it
} else {

}

if (in_file) {

} else {}
```

Output files
- `#include <fstream>`
- Declare an `fstream` or `ofstream` object
- Connect it to a file on file system (opens it for writing)
- Write data to the file via the stream
- Close the stream.
- Output files will be created if they don't exist
- Output files will be overwritten (truncated) by default.
- Can be open so that new writes append
- Can be open in text or binary modes.
```
std::ofstream out_file {"./my_file.txt", std::ios::out};
std::ofstream out_file {"./my_file.txt"};
std::ofstream out_file {"./my_file.txt", std::ios::binary};

// Truncate (discard contents) when opening
std::ofstream out_file {"./my_file.txt", std::ios::trunc};

// Append on each write
std::ofstream out_file {"./my_file.txt", std::ios::app};

// Seek to the end of stream when opening
std::ofstream out_file {"./my_file.txt", std::ios::ate};
```
- Write to files using `<<`
- Using `std::ifstream in_file` and `std::oftream out_file` to copy a text file one line at a time
```
std::string line {};
while (std::getline(in_file, line))
    out_file << line << std::endl;

// Copying a text file one character at a time
char c;
while (in_file.get(c))
    out_file.put(c)
```

String stream
- Using **string stream** allows us to read or write from strings in memory as we would read and write to files
  - Like putting string object to stream, and can use with `>>` or `<<`.
- Useful for data validation
- `#include <sstream>`
- Declare an `stringstream`, `istringstream`, or `ostringstream` object
  - `ostringstream` object has `str()` method.
- Connect it to `std::string`
- Read/write data from/to the string stream using formatted I/O.