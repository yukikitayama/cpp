#include <iostream>
#include <vector>
#include <algorithm>

int global_x {1000};

void test1() {
    std::cout << "\nTest1 =====" << std::endl;
    int local_x {100};
    auto l = [local_x] () {
        std::cout << local_x << std::endl;
        std::cout << global_x << std::endl;
    };
    l();
}

void test2() {
    std::cout << "\nTest2 =====" << std::endl;
    int x {100};
    auto l = [x] () mutable {
        x += 100;
        std::cout << x << std::endl;
    };
    l();
    std::cout << x << std::endl;
    l();
    std::cout << x << std::endl;
}

void test3() {
    std::cout << "\nTest3 =====" << std::endl;
    int x {100};
    auto l = [&x] () mutable {
        x += 100;
        std::cout << x << std::endl;
    };
    l();
    std::cout << x << std::endl;
}

void test4() {
    std::cout << "\nTest4 =====" << std::endl;
    int x {100};
    int y {200};
    int z {300};
    auto l = [=] () mutable {
        x += 100;
        y += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        // std::cout << z << std::endl;
    };
    l();
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    // std::cout << z << std::endl;
}

void test5() {
    std::cout << "\nTest5 =====" << std::endl;
    int x {100};
    int y {200};
    int z {300};
    auto l = [&] () {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l();
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

void test6() {
    std::cout << "\nTest6 =====" << std::endl;
    int x {100};
    int y {200};
    int z {300};
    auto l = [=, &y] () mutable {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l();
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();
    return 0;
}