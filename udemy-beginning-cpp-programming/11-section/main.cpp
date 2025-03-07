#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

// double calc_volume_cylinder(double, double);
// double calc_area_circle(double);
// void area_circle();
// void volume_cylinder();
// void pass_by_value1(int num);
// void pass_by_value2(string s);
// void pass_by_value3(vector<string> v);
// void print_vector(vector<string> v);

// void pass_by_value1(int num) {
//     num = 1000;
// }

// void pass_by_value2(string s) {
//     s = "Changed";
// }

// void pass_by_value3(vector<string> v) {
//     v.clear();
// }

// void print_vector(vector<string> v) {
//     for (auto s : v)
//         cout << s << " ";
//     cout << endl;
// }

// const double pi {3.14159};

// double calc_cost(double = 100, double = 0.06, double = 3.5);

// void greeting(string name, string prefix = "Mr.", string suffix ="");

// double calc_cost(double base_cost, double tax_rate, double shipping) {
//     return base_cost += (base_cost * tax_rate) + shipping;
// }

// void greeting(string name, string prefix, string suffix) {
//     cout << "Hello " << prefix + " " + name + " " + suffix << endl;
// }

// void print(int);
// void print(double = 125.5);
// void print(string);
// void print(string, string);
// void print(vector<string>);

// void print(int num) {
//     cout << "Printing int: " << num << endl;
// }

// void print(double num) {
//     cout << "Printing double: " << num << endl;
// }

// void print(string s) {
//     cout << "Printing string: " << s << endl;
// }

// void print(string s, string t) {
//     cout << "Printing 2 strings: " << s << " and " << t << endl;
// }

// void print(vector<string> v) {
//     cout << "Printing vector of strings: ";
//     for (auto s : v)
//         cout << s + " ";
//     cout << endl;
// }

// void print_array(const int arr[], size_t size);
// void set_array(int arr[], size_t size, int value);

// void print_array(const int arr[], size_t size) {
//     for (size_t i {0}; i < size; ++i)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// void set_array(int arr[], size_t size, int value) {
//     for (size_t i {0}; i < size; ++i)
//         arr[i] = value;
// }

// void pass_by_ref1(int &num);
// void pass_by_ref2(string &s);
// void pass_by_ref3(vector<string> &v);
// void print_vector(const vector<string> &v);

// void pass_by_ref1(int &num) {
//     num = 1000;
// }

// void pass_by_ref2(string &s) {
//     s = "Changed";
// }

// void pass_by_ref3(vector<string> &v) {
//     v.clear();
// }

// void print_vector(const vector<string> &v) {
//     for (auto s : v)
//         cout << s << " ";
//     cout << endl;
// }

// int num {300};

// void global_example() {
//     cout << "Global num is: " << num << " in global_example - start" << endl;
//     num *= 2;
//     cout << "Global num is: " << num << " in global_example - end" << endl;
// }

// void local_example(int x) {
//     int num {1000};
//     cout << "Local num is: " << num << " in local_example - start" << endl;
//     num = x;
//     cout << "Local num is: " << num << " in local_example - end" << endl;
// }

// void static_local_example() {
//     static int num {5000};
//     cout << "Local static num is: " << num << " in static_local_example - start" << endl;
//     num += 1000;
//     cout << "Local static num is: " << num << " in static_local_example - end" << endl;
// }

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
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
    // area_circle();
    // volume_cylinder();
    // int num {10};
    // int another_num {20};
    // cout << "num before calling pass_by_value1: " << num << endl;
    // pass_by_value1(num);
    // cout << "num after calling pass_by_value1: " << num << endl;
    // cout << "another_num before calling pass_by_value1: " << another_num << endl;
    // pass_by_value1(another_num);
    // cout << "another_num after calling pass_by_value1: " << another_num << endl;
    // string name {"Frank"};
    // cout << "name before calling pass_by_value2: " << name << endl;
    // pass_by_value2(name);
    // cout << "name after calling pass_by_value2: " << name << endl;
    // vector<string> stooges {"Larry", "Moe", "Curly"};
    // cout << "stooges before calling pass_by_value3: ";
    // print_vector(stooges);
    // pass_by_value3(stooges);
    // cout << "stooges after calling pass_by_value3: ";
    // print_vector(stooges);

    // double cost {0};
    // cost = calc_cost(100.0, 0.08, 4.25);
    // cout << fixed << setprecision(2);
    // cout << "Cost is: " << cost << endl;
    // cost = calc_cost(100.0, 0.08);
    // cout << "Cost is: " << cost << endl;
    // cost = calc_cost(200.0);
    // cout << "Cost is: " << cost << endl;
    // cost = calc_cost();
    // cout << "Cost is: " << cost << endl;
    // greeting("Glenn Jones", "Dr.", "M.D.");
    // greeting("James Rogers", "Professor", "Ph.D.");
    // greeting("Frank Miller", "Dr.");
    // greeting("William Smith");

    // print();
    // print(100);
    // print('A');
    // print(100.0);
    // print(123.3F);
    // print("C-style string");
    // string s {"C++ string"};
    // print(s);
    // print("C-style string", s);
    // vector<string> three_stooges {"Larry", "Moe", "Curly"};
    // print(three_stooges);

    // int my_scores[] {100, 98, 90, 86, 84};
    // print_array(my_scores, 5);
    // set_array(my_scores, 5, 100);
    // print_array(my_scores, 5);
    // print_array(my_scores, 5);

    // int num {10};
    // int another_num {20};
    // cout << "num before calling pass_by_ref1: " << num << endl;
    // pass_by_ref1(num);
    // cout << "num after calling pass_by_ref1: " << num << endl;

    // cout << "another_num before calling pass_by_ref1: " << another_num << endl;
    // pass_by_ref1(another_num);
    // cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    // string name {"Frank"};
    // cout << "name before: " << name << endl;
    // pass_by_ref2(name);
    // cout << "name after: " << name << endl;

    // vector<string> stooges {"A", "B", "C"};
    // cout << "before: ";
    // print_vector(stooges);
    // pass_by_ref3(stooges);
    // cout << "after: ";
    // print_vector(stooges);

    // int num {100};
    // int num1 {500};
    // cout << "Local num is: " << num << " in main" << endl;

    // {
    //     int num {200};
    //     cout << "Local num is: " << num << " in inner block in main" << endl;
    //     cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    // }

    // cout << "Local num is: " << num << " in main" << endl;

    // local_example(10);
    // local_example(20);

    // global_example();
    // global_example();

    // static_local_example();
    // static_local_example();
    // static_local_example();

    cout << fibonacci(5) << endl;  // 5
    cout << fibonacci(30) << endl;  // 832040
    cout << factorial(3) << endl;  // 6
    cout << factorial(8) << endl;  // 40320

    return 0;
}

// double calc_area_circle(double radius) {
//     return pi * radius * radius;
// }

// double calc_volume_cylinder(double radius, double height) {
//     return calc_area_circle(radius) * height;
// }

// void area_circle() {
//     double radius {};
//     cout << "Enter radius: ";
//     cin >> radius;
//     cout << "The area of a circle with radius: " << radius << " is " << calc_area_circle(radius) << endl;
// }

// void volume_cylinder() {
//     double radius {};
//     double height {};
//     cout << "Enter radius: ";
//     cin >> radius;
//     cout << "Enter height: ";
//     cin >> height;
//     cout << "The volume of a cylinder with radius: " << radius << " and height: " << height << " is " << calc_volume_cylinder(radius, height) << endl;
// }