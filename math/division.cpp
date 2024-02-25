#include <iostream>
using namespace std;

int main() {
    short s = 1;
    int i = 2;
    long l = 3;
    float f = 4.4;
    double d = 6.6;

    cout << s / float(i) << endl;
    cout << int(f) / i << endl;
    cout << long(d) / s << endl;  // long is integer, so this is integer division
    cout << s/float(i) + int(f)/i + long(d)/s << endl;

    return 0;
}