#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "Enter radius: ";
    cin >> radius;
    cout << "The area of a circle with radius: " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    cout << "The volume of a cylinder with radius: " << radius << " and height: " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    // double num {};
    // cout << "Enter double: ";
    // cin >> num;
    // cout << "Sqrt of " << num << " is: " << sqrt(num) << endl;
    // double power {};
    // cout << "Enter a power to raise " << num << " to: ";
    // cin >> power;
    // cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    // int random_number {};
    // size_t count {10};
    // int min {1};
    // int max {6};
    // cout << "RAND_MAX: " << RAND_MAX << endl;
    // srand(time(nullptr));
    // for (size_t i {1}; i <= count; ++i) {
    //     random_number = rand() % max + min;
    //     cout << random_number << endl;
    // }

    area_circle();
    volume_cylinder();

    return 0;
}