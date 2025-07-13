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

    // Mystring a {"Hello"};
    // a = Mystring {"Hola"};
    // a = "Bonjour";

    cout << boolalpha << endl;
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring stooge = larry;
    larry.display();
    moe.display();
    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    Mystring stooges = larry + "Moe";
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}