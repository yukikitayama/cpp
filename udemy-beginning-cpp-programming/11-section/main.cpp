#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // double num {};
    // cout << "Enter double: ";
    // cin >> num;
    // cout << "Sqrt of " << num << " is: " << sqrt(num) << endl;
    // double power {};
    // cout << "Enter a power to raise " << num << " to: ";
    // cin >> power;
    // cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};
    cout << "RAND_MAX: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i {1}; i <= count; ++i) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    return 0;
}