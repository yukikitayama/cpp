#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable *obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}

class Account : public I_Printable {
    // friend std::ostream &operator<<(std::ostream &os, const Account &scc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Account display";
    }
    virtual ~Account() {}
};

// std::ostream &operator<<(std::ostream &os, const Account &acc) {
//     os << "Account display";
//     return os;
// }

class Checking : public Account {
    // friend std::ostream &operator<<(std::ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() {}
};

// std::ostream &operator<<(std::ostream &os, const Checking &acc) {
//     os << "Checking display";
//     return os;
// }

class Savings : public Account {
    // friend std::ostream &operator<<(std::ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Saving display";
    }
    virtual ~Savings() {}
};

// std::ostream &operator<<(std::ostream &os, const Savings &acc) {
//     os << "Savings display";
//     return os;
// }

class Trust : public Account {
    // friend std::ostream &operator<<(std::ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount) override {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Trust display";
    }
    virtual ~Trust() {}
};

// std::ostream &operator<<(std::ostream &os, const Trust &acc) {
//     os << "Trust display";
//     return os;
// }

class Dog : public I_Printable {
public:
    virtual void print(std::ostream &os) const override {
        os << "Woof woof";
    }
};

void print(const I_Printable &obj) {
    std::cout << obj << std::endl;
}

int main() {
    Account a;
    std::cout << a << std::endl;
    Checking c;
    std::cout << c << std::endl;
    Savings s;
    std::cout << s << std::endl;
    Trust t;
    std::cout << t << std::endl;
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;
    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;
    Dog *dog = new Dog();
    std::cout << *dog << std::endl;
    print(*dog);
    return 0;
}