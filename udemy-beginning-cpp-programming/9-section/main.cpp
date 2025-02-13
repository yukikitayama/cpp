#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    // int num {};
    // const int min {10};
    // const int max {100};
    // cout << "Enter a number between " << min << " and " << max << ": ";
    // cin >> num;
    // if (num >= min) {
    //     cout << "\n------------- If statement 1 -------------" << endl;
    //     cout << num << " is greater than or equal to " << min << endl;
    //     int diff {num - min};
    //     cout << num << " is " << diff << " greater than " << min << endl;
    // }
    // if (num <= max) {
    //     cout << "\n------------- If statement 2 -------------" << endl;
    //     cout << num << " is less than or equal to " << max << endl;
    //     int diff {max - num};
    //     cout << num << " is " << diff << " less than " << max << endl;
    // }
    // if (num >= min && num <= max) {
    //     cout << "\n------------- If statement 3 -------------" << endl;
    //     cout << num << " is in range " << endl;
    //     cout << "This means statements 1 and 2 must also display" << endl;
    // }
    // if (num == min || num == max) {
    //     cout << "\n------------- If statement 4 -------------" << endl;
    //     cout << num << " is right on a boundary" << endl;
    //     cout << "This means all 4 statements display" << endl;
    // }

    // int num {20};
    // int target {10};
    // if (num >= target) {
    //     cout << num << " is greater than or equal to " << target << endl;
    // } else {
    //     cout << num << " is less than " << target << endl;
    // }

    // int score {};
    // cout << "Enter score: ";
    // cin >> score;
    // char letter_grade {};
    // if (score >= 0 && score <= 100) {
    //     if (score >= 90) {
    //         letter_grade = 'A';
    //     }
    //     else if (score >= 80) {
    //         letter_grade = 'B';
    //     }
    //     else if (score >= 70) {
    //         letter_grade = 'C';
    //     }
    //     else {
    //         letter_grade = 'F';
    //     }
    //     cout << "Grade: " << letter_grade << endl;
    //     if (letter_grade == 'F') {
    //         cout << "Failed" << endl;
    //     } else {
    //         cout << "Passed" << endl;
    //     }
    // } else {
    //     cout << "Sorry, " << score << " is not in range" << endl;
    // }

    // Shipping cost calculator
    // int length {}, width {}, height {};
    // double base_cost {2.50};
    // const int tier1_threshold {100};
    // const int tier2_threshold {500};
    // int max_dimension_length {10};
    // double tier1_surcharge {0.10};
    // double tier2_surcharge {0.25};
    // int package_volume {};
    // cout << "Enter length, width, height: ";
    // cin >> length >> width >> height;
    // if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
    //     cout << "Package rejected" << endl;
    // } else {
    //     double package_cost {};
    //     package_volume = length * width * height;
    //     package_cost = base_cost;
    //     if (package_volume > tier2_threshold) {
    //         package_cost += package_cost * tier2_surcharge;
    //         cout << "adding tier 2 surchage" << endl;
    //     } else if (package_volume > tier1_threshold) {
    //         package_cost += package_cost * tier1_surcharge;
    //         cout << "adding tier 1 surchage" << endl;
    //     }

    //     cout << fixed << setprecision(2);
    //     cout << "The volume of your package is: " << package_volume << endl;
    //     cout << "Your package will cost $" << package_cost << " to ship" << endl;   
    // }

    // char letter_grade {};
    // cout << "Enter grade: ";
    // cin >> letter_grade;
    // switch (letter_grade) {
    //     case 'a':
    //     case 'A':
    //         cout << "You need a 90 or above, study hard!" << endl;
    //         break;
    //     case 'b':
    //     case 'B':
    //         cout << "You need 80-89 for a B, go study!" << endl;
    //         break;
    //     case 'c':
    //     case 'C':
    //         cout << "You need 70-79 for an average grade" << endl;
    //         break;
    //     default:
    //         cout << "Not good" << endl;
    // }

    // enum Direction {
    //     left, right, up, down
    // };
    // Direction heading {up};
    // switch (heading) {
    //     case left:
    //         cout << "Going left" << endl;
    //         break;
    //     case right:
    //         cout << "Going right" << endl;
    //         break;
    //     default:
    //         cout << "OK" << endl;
    // }

    // int num {};
    // cout << "Enter an integer: ";
    // cin >> num;
    // if (num % 2 == 0) {
    //     cout << num << " is even" << endl;
    // } else {
    //     cout << num << " is odd" << endl;
    // }
    // cout << num << " is " << ( (num % 2 == 0) ? "even" : "odd" ) << endl;;

    // int num1 {}, num2 {};
    // cout << "Enter 2 integers: ";
    // cin >> num1 >> num2;
    // if (num1 != num2) {
    //     cout << "Largest: " << ( (num1 > num2) ? num1 : num2 ) << endl;
    //     cout << "Smallest: " << ( (num1 > num2) ? num2 : num1 ) << endl;
    // } else {
    //     cout << "The numbers are the same" << endl;
    // }

    // for (int i {1}; i <= 10; ++i) {
    //     cout << i << endl;
    // }
    // for (int i {1}; i <= 10; i += 2) {
    //     cout << i << endl;
    // }
    // for (int i {10}; i > 0; --i)
    //     cout << i << endl;
    // cout << "Hello" << endl;
    // for (int i {10}; i <= 100; i += 10) {
    //     if (i % 15 == 0)
    //         cout << i << endl;
    // }
    // for (int i {1}, j {5}; i <= 5; ++i, ++j) {
    //     cout << i << " + " << j << " = " << (i + j) << endl;
    // }
    // for (int i {1}; i <= 100; ++i) {
    //     cout << i;
    //     if (i % 10 == 0) {
    //         cout << endl;
    //     } else {
    //         cout << " ";
    //     }
    // }
    // for (int i {1}; i <= 100; ++i) {
    //     cout << i << ( (i % 10 == 0) ? "\n" : " ");
    // }
    // vector <int> nums {10, 20, 30, 40, 50};
    // for (unsigned i {0}; i < nums.size(); ++i) {
    //     cout << nums[i] << endl;
    // }

    // int scores[] {10, 20, 30};
    // for (auto score : scores)
    //     cout << score << endl;
    // vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    // double average_temp {};
    // double total {};
    // for (auto temp : temperatures) {
    //     total += temp;
    // }
    // average_temp = total / temperatures.size();
    // cout << fixed << setprecision(1);
    // cout << "Average temperature: " << average_temp << endl;
    // for (auto val : {1, 2, 3, 4, 5}) {
    //     cout << val << endl;
    // }
    // for (auto c : "Yuki Kitayama")
    //     if (c == ' ')
    //         cout << "\t";
    //     else
    //         cout << c;

    // int num {};
    // cout << "Enter positive integer";
    // cin >> num;
    // while (num > 0) {
    //     cout << num << endl;
    //     --num;
    // }
    // cout << "End" << endl;
    // int num {};
    // cout << "Enter: ";
    // cin >> num;
    // while (num >= 100) {
    //     cout << "Enter: ";
    //     cin >> num;
    // }
    // cout << "Thanks" << endl;
    bool done {false};
    int num {0};
    while (!done) {
        cout << "Enter:";
        cin >> num;
        if (num <= 1 || num >= 5) {
            cout << "Again" << endl;
        } else {
            cout << "Thanks" << endl;
            done = true;
        }
    }

    return 0;
}