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

    // cout << boolalpha << endl;
    // Mystring larry {"Larry"};
    // Mystring moe {"Moe"};
    // Mystring stooge = larry;
    // larry.display();
    // moe.display();
    // cout << (larry == moe) << endl;
    // cout << (larry == stooge) << endl;
    // larry.display();
    // Mystring larry2 = -larry;
    // larry2.display();
    // Mystring stooges = larry + "Moe";
    // Mystring two_stooges = moe + " " + "Larry";
    // two_stooges.display();
    // Mystring three_stooges = moe + " " + larry + " " + "Curly";
    // three_stooges.display();

    // Mystring larry {"Larry"};
    // larry.display();
    // larry = -larry;
    // larry.display();
    // cout << boolalpha << endl;
    // Mystring moe {"Moe"};
    // Mystring stooge = larry;
    // cout << (larry == moe) << endl;
    // cout << (larry == stooge) << endl;
    // Mystring stooges = "Larry" + moe;
    // stooges.display();
    // Mystring two_stooges = moe + " " + "Larry";
    // two_stooges.display();
    // Mystring three_stooges = moe + " " + larry + " " + "Curly";
    // three_stooges.display();

    // Mystring larry {"Larry"};
    // Mystring moe {"Moe"};
    // Mystring curly;
    // cout << "Enter the third stooge's first name: ";
    // cin >> curly;
    // cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    // cout << "\nEnter the three stooges names separated by a space: ";
    // cin >> larry >> moe >> curly;
    // cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    b = "george";
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    Mystring s1 {"FRANK"};
    s1 = -s1;
    cout << s1 << endl;
    s1 = s1 + "*****";
    cout << s1 << endl;
    s1 += "-----";
    cout << s1 << endl;

    return 0;
}