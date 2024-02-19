#include <iostream>
using namespace std;
int main()
{
    int a = 2;

    int b = a << a;

    cout << b << endl;
    cout << a << endl;

    switch(a << a) {
        case 8: cout << a++ << endl;
        case 4: cout << a++ << endl;;
        case 2: break;
        case 1: a--;
    }

    cout << a;

    return 0;
}