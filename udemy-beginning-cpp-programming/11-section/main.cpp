#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

double calc_volume_cylinder(double, double);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string> v) {
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

const double pi {3.14159};

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
    // area_circle();
    // volume_cylinder();
    int num {10};
    int another_num {20};
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    cout << "another_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;
    string name {"Frank"};
    cout << "name before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "stooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);

    return 0;
}

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