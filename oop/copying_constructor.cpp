#include <iostream>

using namespace std;

class Class1 {
public:
    Class1(int val) { this -> value = val; }
    // Copying constructor
    Class1(Class1 const &source) { value = source.value + 100; }
    int value;
};

int main(void) {
    Class1 object11(100);

    // Invoke copying class
    Class1 object12 = object11;

    cout << object12.value << endl;
}
