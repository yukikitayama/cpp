#include <iostream>
#include <climits>

using namespace std;

int main() {

    // int room_width {0};
    // cout << "Enter the width of the room: ";
    // cin >> room_width;
    // int room_length {0};
    // cout << "Enter the length of the room: ";
    // cin >> room_length;
    // cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

    // char first_initial {'Y'};
    // cout << "My initial: " << first_initial << endl;
    // long long people_on_earth {7'600'000'000};
    // cout << "There are about " << people_on_earth << " people on earth";
    // long double large_amount {2.7e120};
    // cout << large_amount << " is a very large number" << endl;

    cout << "int: " << sizeof(int) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    int age {36};
    cout << "age: " << sizeof(age) << endl;
    cout << "age: " << sizeof age << endl;

    return 0;
}