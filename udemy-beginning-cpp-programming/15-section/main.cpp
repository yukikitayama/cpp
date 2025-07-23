#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

class Base {
    // Friends of Base have access to all
public:
    int a {0};
    // member method has access to all
    void display() { std::cout << a << ", " << b << ", " << c << endl; }
protected:
    int b {0};
private:
    int c {0};
};

class Derived: public Base {
    // Friends of Derived have access to only what Derived has access to
    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members() {
        a = 100;  // OK
        b = 200;  // OK
        // c = 300;  // Not accessible
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

    cout << "=== Base member access from base objects ===" << endl;
    Base base;
    base.a = 100;  // OK
    // base.b = 200;  // Compiler error
    // base.c = 300;  // Compiler error because private
    cout << "=== Base member access from derived objects ===" << endl;
    Derived d;
    d.a = 100;  // OK
    // d.b = 200;  // Compiler error
    // d.c = 300;  // Compiler error

    return 0;
}