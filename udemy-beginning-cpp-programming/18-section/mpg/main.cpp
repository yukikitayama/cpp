#include <iostream>

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw 0;
    return static_cast<double>(miles) / gallons;
}

int main() {
    // No exception
    // int miles {};
    // int gallons {};
    // double miles_per_gallon {};
    // std::cout << "Enter the miles: ";
    // std::cin >> miles;
    // std::cout << "Enter the gallons: ";
    // std::cin >> gallons;
    // // miles_per_gallon = miles / gallons;
    // if (gallons != 0) {
    //     miles_per_gallon = static_cast<double>(miles) / gallons;
    //     std::cout << "Result: " << miles_per_gallon << std::endl;
    // } else {
    //     std::cerr << "Sorry, can't divide by zero" << std::endl;
    // }

    // With exception
    // int miles {};
    // int gallons {};
    // double miles_per_gallon {};
    // std::cout << "Enter the miles: ";
    // std::cin >> miles;
    // std::cout << "Enter the gallons: ";
    // std::cin >> gallons;
    // try {
    //     if (gallons == 0) {
    //         throw 0;
    //     }
    //     miles_per_gallon = static_cast<double>(miles) / gallons;
    //     std::cout << "Result: " << miles_per_gallon << std::endl;
    // }
    // catch (int &ex) {
    //     std::cerr << "Sorry, can't divide by zero" << std::endl;
    // }
    // std::cout << "Bye" << std::endl;

    // Function throws an exception
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;
    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    } 
    catch (int &ex) {
        std::cerr << "Tried to divide by zero" << std::endl;
    }
    std::cout << "Bye" << std::endl;

    return 0;
}