#include <iostream>
#include <iomanip>

void ruler() {
    std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl;
}

int main() {
    int num1 {1234};
    double num2 {1234.5678};
    std::string hello {"Hello"};
    std::cout << "Default" << std::endl;
    ruler();
    std::cout << num1 << num2 << hello << std::endl;
    std::cout << "Default one per line" << std::endl;
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;
    std::cout << "Field width with default right justified" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1 << num2 << hello << std::endl;
    ruler();
    std::cout << std::setw(10) << num1 << std::setw(10) << num2 << hello << std::endl;
    ruler();
    std::cout << std::setw(10) << num1 << std::setw(10) << num2 << std::setw(10) << hello << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << std::setfill('*') << num1 << std::setw(10) << std::left << std::setfill('#') << num2 << std::setw(10) << std::left << std::setfill('-') << hello << std::endl;
        
    return 0;
}