#include <iostream>
using namespace std;

class A {
public:
    int a[2];
    A() { a[0] = 1; a[1] = 0; }
    int b(void) {
        int x = a[0];
        a[0] = a[1];
        a[1] = x;
        return x;
    }
};

int main(void) {
    A a;
    a.b();
    cout << a.b() << a.a[1] << endl;
    return 0;
}
