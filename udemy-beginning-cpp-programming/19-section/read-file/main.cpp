#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    // std::ifstream in_file;
    // std::string line;
    // int num;
    // double total;
    // in_file.open("test.txt");
    // if (!in_file) {
    //     std::cerr << "Problem opening file" << std::endl;
    //     return 1;
    // }
    // std::cout << "File is good to go" << std::endl;
    // in_file >> line >> num >> total;
    // std::cout << line << std::endl;
    // std::cout << num << std::endl;
    // std::cout << total << std::endl;
    // in_file.close();

    std::ifstream in_file;
    int num;
    double total;
    std::string line;
    in_file.open("test2.txt");
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    // while (!in_file.eof()) {
    while (in_file >> line >> num >> total) {
        std::cout << std::setw(10) << std::left << line
                << std::setw(10) << num
                << std::setw(10) << total
                << std::endl;
    }
    in_file.close();
    return 0;
}