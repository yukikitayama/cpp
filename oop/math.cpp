#include <iostream>
using namespace std;

class A {
    int a;
};

int main(void) {
    A a;
    // Cannot access because a.a is a private variable
    a.a = 1/2;
    cout << a.a << endl;
    return 0;
}