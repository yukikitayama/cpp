#include <iostream>
using namespace std;

int fun(long a) {
    cout << "long" << endl;
    return a / a;
}

int fun(int a) {
    cout << "int" << endl;
    return 2 * a;
}

int fun(double a = 3.0) {
    cout << "double" << endl;
    return a;
}

int main() {
    cout << fun(100000000L) << fun(1L) << fun(1.f);
    return 0;
}