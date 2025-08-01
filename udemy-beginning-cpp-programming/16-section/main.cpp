#include <iostream>
#include <vector>

// class Base {
// public:
//     void say_hello() const {
//         std::cout << "Hello - I'm a Base class object" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void say_hello() const {
//         std::cout << "Hello - I'm a Derived class object" << std::endl;
//     }
// };

// void greetings(const Base &obj) {
//     std::cout << "Greetings: ";
//     obj.say_hello();
// }

// class Account {
// public:
//     virtual void withdraw(double amount) {
//         std::cout << "In Account::withdraw" << std::endl;
//     }
//     virtual ~Account() { std::cout << "Account::destructor" << std::endl; }
// };

// class Checking: public Account {
// public:
//     virtual void withdraw(double amount) {
//         std::cout << "In Checking::withdraw" << std::endl;
//     }
//     virtual ~Checking() { std::cout << "Checking::destructor" << std::endl; }
// };

// class Savings: public Account {
// public:
//     virtual void withdraw(double amount) {
//         std::cout << "In Savings::withdraw" << std::endl;
//     }
//     virtual ~Savings() { std::cout << "Savings::destructor" << std::endl; }
// };

// class Trust: public Account {
// public:
//     virtual void withdraw(double amount) {
//         std::cout << "In Trust::withdraw" << std::endl;
//     }
//     virtual ~Trust() { std::cout << "Trust::destructor" << std::endl; }
// };

// class Base {
// public:
//     virtual void say_hello() const {
//         std::cout << "Hello - I'm a Base class object" << std::endl;
//     }
//     virtual ~Base() {}
// };

// class Derived: public Base {
// public:
//     virtual void say_hello() const override {
//         std::cout << "Hello - I'm a Derived class object" << std::endl;
//     }
// };

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

class Trust: public Account {
    virtual void withdraw(double amount) override {
        std::cout << "Trust::withdraw" << std::endl;
    }
};

class Savings: public Account {
    virtual void withdraw(double amount) override {
        std::cout << "Savings::withdraw" << std::endl;
    }
};

class Checking: public Account {
    virtual void withdraw(double amount) override {
        std::cout << "Checking::withdraw" << std::endl;
    }
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main() {
    // Base b;
    // b.say_hello();
    // Derived d;
    // d.say_hello();
    // greetings(b);
    // greetings(d);
    // Base *ptr = new Derived();
    // ptr->say_hello();
    // std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    // ptr1->say_hello();
    // delete ptr;

    // Account *p1 = new Account();
    // Account *p2 = new Savings();
    // Account *p3 = new Checking();
    // Account *p4 = new Trust();
    // p1->withdraw(1000);
    // p2->withdraw(1000);
    // p3->withdraw(1000);
    // p4->withdraw(1000);
    // Account *array [] = {p1, p2, p3, p4};
    // for (auto i = 0; i < 4; ++i)
    //     array[i]->withdraw(1000);
    // array[0] = p4;
    // Account *array [] = {p1, p2, p3, p4};
    // for (auto i = 0; i < 4; ++i)
    //     array[i]->withdraw(1000);
    // std::vector<Account *> accounts {p1, p2, p3, p4};
    // for (auto acc_ptr: accounts)
    //     acc_ptr->withdraw(1000);
    // accouts.push_back(p4);
    // accouts.push_back(p4);
    // for (auto acc_ptr: accounts)
    //     acc_ptr->withdraw(1000);
    // delete p1;
    // delete p2;
    // delete p3;
    // delete p4;

    // Base *p1 = new Base();
    // p1->say_hello();
    // Derived *p2 = new Derived();
    // p2->say_hello();
    // Base *p3 = new Derived();
    // p3->say_hello();

    Account a;
    Account &ref = a;
    ref.withdraw(1000);
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);

    return 0;
}