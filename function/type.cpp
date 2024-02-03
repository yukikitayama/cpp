#include <iostream>
using namespace std;

int fun(int a, int b) {
    return a + b;
}

int fun(int a, char b) {

    cout << a << endl;
    cout << b << endl;
    cout << b - a << endl;
    
    return b - a;
}

int fun(float a, float b) {
    return a * b;
}

int main() {
    // 124
    cout << fun(1, 0) << fun('a', 'c') << fun(2.f, 2.f);
    return 0;
}

