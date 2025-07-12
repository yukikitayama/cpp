#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    // Mystring empty;
    // Mystring larry("Larry");
    // Mystring stooge {larry};
    // empty.display();
    // larry.display();
    // stooge.display();

    // Mystring a {"Hello"};
    // Mystring b;
    // b = a;
    // b = "This is a test";

    Mystring a {"Hello"};
    a = Mystring {"Hola"};
    a = "Bonjour";

    return 0;
}