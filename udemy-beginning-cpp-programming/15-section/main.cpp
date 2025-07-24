#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

// class Base {
//     // Friends of Base have access to all
// public:
//     int a {0};
//     // member method has access to all
//     void display() { std::cout << a << ", " << b << ", " << c << endl; }
// protected:
//     int b {0};
// private:
//     int c {0};
// };

// class Derived: public Base {
//     // Friends of Derived have access to only what Derived has access to
//     // a will be public
//     // b will be protected
//     // c will not be accessible
// public:
//     void access_base_members() {
//         a = 100;  // OK
//         b = 200;  // OK
//         // c = 300;  // Not accessible
//     }
// };

// class Base {
// private:
//     int value;
// public:
//     Base() : value {0} { cout << "Base no-args constructor" << endl; }
//     Base(int x): value {x} { cout << "Base (int) overloaded constructor" << endl; }
//     ~Base() { cout << "Base destructor" << endl; }
// };

// class Derived : public Base {
//     using Base::Base;
// private:
//     int doubled_value;
// public:
//     Derived() : doubled_value {0} { cout << "Derived no-args constructor" << endl; }
//     Derived(int x) : doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl; }
//     ~Derived() { cout << "Derived destructor" << endl; }
// };

// class Base {
// private:
//     int value;
// public:
//     Base(): value {0} {
//         cout << "Base no-args constructor" << endl;
//     }
//     Base(int x): value {x} {
//         cout << "Base (int) overloaded constructor" << endl;
//     }
//     ~Base() {
//         cout << "Base destructor" << endl;
//     }
// };

// class Derived : public Base {
// private:
//     int doubled_value;
// public:
//     Derived()
//         : Base {}, doubled_value {0} {
//             cout << "Derived no-args constructor" << endl;
//     }
//     Derived (int x)
//         : Base{x}, doubled_value {x * 2} {
//             cout << "Derived (int) constructor" << endl;
//     }
//     ~Derived() {
//         cout << "Derived destructor" << endl;
//     }
// };

class Base {
private:
    int value;
public:
    Base(): value {0} {
        cout << "Base no-args constructor" << endl;
    }
    Base(int x): value {x} {
        cout << "Base (int) overloaded constructor" << endl;
    }
    Base(const Base &other)
        : value {other.value} {
        cout << "Base copy constructor" << endl;
    }
    Base &operator=(const Base &rhs) {
        cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived()
        : Base {}, doubled_value {0} {
            cout << "Derived no-args constructor" << endl;
    }
    Derived (int x)
        : Base{x}, doubled_value {x * 2} {
            cout << "Derived (int) constructor" << endl;
    }
    Derived (const Derived &other)
        : Base(other), doubled_value {other.doubled_value} {
        cout << "Derived copy constructor" << endl;
    }
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator=" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {

    // cout << "Account" << endl;
    // Account acc {};
    // acc.deposit(2000.0);
    // acc.withdraw(500.0);
    // cout << endl;
    // Account *p_acc {nullptr};
    // p_acc = new Account();
    // p_acc->deposit(1000.0);
    // p_acc->withdraw(500.0);
    // delete p_acc;
    // cout << "Savings_Account" << endl;
    // Savings_Account sav_acc {};
    // sav_acc.deposit(2000.0);
    // sav_acc.withdraw(500.0);
    // cout << endl;
    // Savings_Account *p_sav_acc {nullptr};
    // p_sav_acc = new Savings_Account();
    // p_sav_acc->deposit(1000.0);
    // p_sav_acc->withdraw(500.0);
    // delete p_sav_acc;

    // cout << "=== Base member access from base objects ===" << endl;
    // Base base;
    // base.a = 100;  // OK
    // // base.b = 200;  // Compiler error
    // // base.c = 300;  // Compiler error because private
    // cout << "=== Base member access from derived objects ===" << endl;
    // Derived d;
    // d.a = 100;  // OK
    // // d.b = 200;  // Compiler error
    // // d.c = 300;  // Compiler error

    // Base b;
    // Base b {100};
    // Derived d;
    // Derived d {1000};

    // Derived d;
    // Derived d {1000};

    // Base b {100};
    // Base b1 {b};  // Copy constructor
    // b = b1;  // Copy assignment

    Derived d {100};
    Derived d1 {d};
    d = d1;

    return 0;
}