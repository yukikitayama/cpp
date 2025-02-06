#include <iostream>

using namespace std;

int main() {
    // int num1 {10};
    // int num2 {20};
    // num1 = num2 = 100;
    // cout << num1 << endl;
    // cout << num2 << endl;

    // const double usd_per_eur {1.19};
    // cout << "Enter the value in EUR: ";
    // double euros {0.0};
    // double dollars {0.0};
    // cin >> euros;
    // dollars = euros * usd_per_eur;
    // cout << euros << " euros is equal to " << dollars << " dollars" << endl;

    // int counter {10};
    // cout << "Counter: " << counter << endl;
    // counter++;
    // cout << "Counter: " << counter << endl;
    // ++counter;
    // cout << "Counter: " << counter << endl;

    // int counter {10};
    // int result {0};
    // result += ++counter;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // int counter {10};
    // int result {0};
    // result += counter++;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // int counter {10};
    // int result {0};
    // result += ++counter + 10;
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // int counter {10};
    // int result {0};
    // result += counter++ + 10;
    // cout << "Counter: " << counter << endl;  // 11
    // cout << "Result: " << result << endl;  // 20

    // int total {};
    // int num1 {}, num2 {}, num3 {};
    // const int count = 3;
    // cout << "3 integers with spaces: ";
    // cin >> num1 >> num2 >> num3;
    // total = num1 + num2 + num3;
    // double average {0.0};
    // average = static_cast<double>(total) / count;
    // // average = (double) total / count;  // Old style
    // cout << "Average: " << average << endl;

    // // cout << boolalpha;
    // int num1 = 1;
    // // int num2 = 1;
    // double num2 = 1.0;
    // bool res1 {false}, res2 {false};
    // res1 = (num1 == num2);
    // res2 = (num1 != num2);
    // cout << res1 << endl;
    // cout << res2 << endl;

    // int num {};
    // const int lower {10};
    // const int upper {20};
    // cout << boolalpha;
    // num = 15;
    // bool within_bounds {false};
    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    // num = 8;
    // bool outside_bounds {false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    int change_amount {};
    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    cout << "Enter cents: ";
    cin >> change_amount;

    dollars = change_amount / dollar_value;
    // balance = change_amount - (dollars * dollar_value);
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    // balance -= quarters * quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    // balance -= dimes * dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    // balance -= nickels * nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}