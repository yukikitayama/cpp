#include <iostream>
using namespace std;

class A {
public:
    A(A &src) { cout << "copying A..." << endl; }
    A(void) {}
    void Do(void) { cout << "A is doing something" << endl; }
};

class B {
public:
    B(B &src) { cout << "copying B..." << endl; }
    B(void) {}
    void Do(void) { cout << "B is doing something" << endl; }
};

class Compo {
public:
    Compo(Compo &src) : f1(src.f1), f2(src.f2) { cout << "Copying Compo..." << endl; }
    Compo(void) {} ;
    A f1;
    B f2;
};

int main(void) {
    Compo co1;
    Compo co2 = co1;
    co2.f1.Do();
    co2.f2.Do();
    return 0;
}
