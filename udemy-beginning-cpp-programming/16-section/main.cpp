#include <iostream>
#include <vector>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived : public Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings: ";
    obj.say_hello();
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

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Aacount *p3 = new Checking();
    Account *P4 = new Trust();
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    Account *array [] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(1000);
    array[0] = p4;
    Account *array [] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(1000);
    std::vector<Account *> accounts {p1, p2, p3, p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
    accouts.push_back(p4);
    accouts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}