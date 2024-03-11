#include <iostream>

using namespace std;

class Class {
public:
    Class(void) { this -> value = -1; }
    Class(int val) { this -> value = val; }
    void setVal(int value) {
        Class::value = value;
        // or
        // this -> value = value;
    }
    void setVal(void) { value = -2; }
    int getVal(void);
private:
    int value;
};

int Class::getVal(void) {
    return value;
}

int main(void) {
    Class object1, object2(100);

    // This implicitly invokes the constructor
    cout << object1.getVal() << endl;

    cout << object2.getVal() << endl;

    return 0;
}