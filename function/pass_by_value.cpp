#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v) {
    for (auto s : v) {
        cout << s << " ";
    }
    cout << endl;
}

// Pass-by-value
void modify_vector(vector<int> nums) {
    nums.push_back(4);
    cout << "In modify_vector()" << endl;
    print_vector(nums);
}

int main() {
    vector<int> nums {1, 2, 3};
    
    cout << "Before modify_vector()" << endl;
    print_vector(nums);

    // Pass-by-value
    modify_vector(nums);

    cout << "After modify_vector()" << endl;
    print_vector(nums);

    return 0;
}