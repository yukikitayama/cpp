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

    // cout << "int: " << sizeof(int) << endl;
    // cout << "long long: " << sizeof(long long) << endl;
    // cout << "float: " << sizeof(float) << endl;
    // cout << "INT_MIN: " << INT_MIN << endl;
    // int age {36};
    // cout << "age: " << sizeof(age) << endl;
    // cout << "age: " << sizeof age << endl;

    // cout << "Cleaning" << endl;
    // cout << "How many rooms? ";
    // int num_room {0};
    // cin >> num_room;
    // const double price_per_room {32.5};
    // const double sales_tax {0.06};
    // const int estimate_expiry {30}; // days
    // cout << "Estimate" << endl;
    // cout << "Number of rooms: " << num_room << endl;
    // cout << "Price per room: $" << price_per_room << endl;
    // cout << "Cost: $" << price_per_room * num_room << endl;
    // cout << "Tax: $" << price_per_room * num_room * sales_tax << endl;
    // cout << "================" << endl;
    // cout << "Total estimate: $" << (price_per_room * num_room) + (price_per_room * num_room * sales_tax) << endl;
    // cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    int small_rooms {0};
    cout << "How many small rooms? ";
    cin >> small_rooms;

    int large_rooms {0};
    cout << "How many large rooms? ";
    cin >> large_rooms;

    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $"
         << (price_per_small_room * small_rooms) +
            (price_per_large_room * large_rooms)
         << endl;
    cout << "Tax: $"
         << ((price_per_small_room * small_rooms) +
            (price_per_large_room * large_rooms)) * sales_tax
         << endl;
    cout << "================================" << endl;
    cout << "Total estimate: $"
         << ((price_per_small_room * small_rooms) +
            (price_per_large_room * large_rooms)) +
            ((price_per_small_room * small_rooms) +
            (price_per_large_room * large_rooms)) * sales_tax
         << endl;
    cout << "Estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}