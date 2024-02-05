#include <iostream>
using namespace std;

int main() {
    float f[2];

    float *p1 = f, *p2 = p1 + 1;

    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << p2 - p1 << endl;

    // Pointer to array is integer, so after subtracting the numerator is still integer,
    // So this is integer division
    cout << (p2 - p1) / sizeof(float);

    return 0;
}