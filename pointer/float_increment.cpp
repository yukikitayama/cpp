#include <iostream>
using namespace std;

int main() {
    float x = 3.14, *p = &x;

    p[0] = ++x;

    cout << p << endl;
    cout << p[0] << endl;

    cout << x;

    return 0;
}