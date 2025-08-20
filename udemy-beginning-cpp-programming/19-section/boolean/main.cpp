#include <iostream>
#include <iomanip>

int main() {
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    std::cout << std::boolalpha;
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    std::cout << std::noboolalpha;
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    std::cout.setf(std::ios::boolalpha);
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    // Reset to default 1/0
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    return 0;
}