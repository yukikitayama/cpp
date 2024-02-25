#include <iostream>
using namespace std;

int main() {
    short s = 1;
    int i = 2;
    long l = 3;
    float f = 4.4;
    double d = 6.6;

    cout << s / i << endl;  // Short is integer, so this is integer division
    cout << f / i << endl;
    cout << d / s << endl;

    cout << s/i + f/i + d/s;

    return 0;
}