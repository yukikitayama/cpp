#include <iostream>

using namespace std;

int main()
{
    int a = 0x02, b = 001;
 
    cout << a << endl;
    cout << b << endl;
 
    // "11" -> 3?
    int c = a ^ b;

    cout << c << endl;

    // still '11' -> 3?
    int d = c | a;

    cout << d << endl;

    int e = d & 0;

    cout << e;
}