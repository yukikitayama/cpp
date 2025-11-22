#include <iostream>

void test1() {
    int x = 5;
    std::cout << x-- << " " << x;
}

void test2() {
    int a = 4;
    int b = 5;
    std::cout << (a, b);
}

int main() {
    // test1();
    test2();

// FROM 24

    return 0;
}