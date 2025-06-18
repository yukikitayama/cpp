#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// void display(const vector<string> *const v) {
//     // (*v).at(0) = "Funny";
//     for (auto str : *v)
//         cout << str << " ";
//     cout << endl;
//     // v = nullptr;
// }

// void display(int *array, int sentinel) {
//     while (*array != sentinel)
//         cout << *array++ << " ";
//     cout << endl;
// }

int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i {0}; i < size; ++i)
        cout << array[i] << " ";
}

int main() {
    // int num {10};
    // cout << "Value of num is: " << num << endl;
    // cout << "sizeof of num is: " << sizeof num << endl;  // in bytes
    // cout << "Address of num is: " << &num << endl;

    // int *p;
    // cout << "Value of p is: " << p << endl;
    // cout << "Address of p is: " << &p << endl;
    // cout << "sizeof of p is: " << sizeof p << endl;
    // p = nullptr;
    // cout << "Value of p is: " << p << endl;

    // int *p1 {nullptr};
    // double *p2 {nullptr};
    // unsigned long long *p3 {nullptr};
    // vector<string> *p4 {nullptr};
    // string *p5 {nullptr};
    // cout << "sizeof p1 is: " << sizeof p1 << endl;
    // cout << "sizeof p2 is: " << sizeof p2 << endl;
    // cout << "sizeof p3 is: " << sizeof p3 << endl;
    // cout << "sizeof p4 is: " << sizeof p4 << endl;
    // cout << "sizeof p5 is: " << sizeof p5 << endl;

    // int score {10};
    // // double high_temp {100.7};
    // int *score_ptr {nullptr};
    // score_ptr = &score;
    // cout << "Value of score is: " << score << endl;
    // cout << "Address of score is: " << &score << endl;
    // cout << "Value of score_ptr is: " << score_ptr << endl;
    // // score_ptr = &high_temp;

    // int score {100};
    // int *score_ptr {&score};
    // cout << *score_ptr << endl;  // 100
    // *score_ptr = 200;
    // cout << *score_ptr << endl;  // 200
    // cout << score << endl;  // 200

    // double high_temp {100.7};
    // double low_temp {37.4};
    // double *temp_ptr {&high_temp};
    // cout << *temp_ptr << endl;  // 1007
    // temp_ptr = &low_temp;
    // cout << *temp_ptr << endl;  // 37.4

    // string name {"Frank"};
    // string *string_ptr {&name};
    // cout << *string_ptr << endl;  // Frank
    // name = "James";
    // cout << *string_ptr << endl;  // James

    // vector<string> stooges {"Larry", "Moe", "Curly"};
    // vector<string> *vector_ptr {nullptr};
    // vector_ptr = &stooges;
    // cout << "First stooge: " << (*vector_ptr).at(0) << endl;
    // cout << "Stooges: ";
    // for (auto stooge : *vector_ptr)
    //     cout << stooge << " ";
    // cout << endl;

    // int *int_ptr {nullptr};
    // int_ptr = new int;
    // cout << int_ptr << endl;
    // delete int_ptr;

    // size_t size {0};
    // double *temp_ptr {nullptr};
    // cout << "How many temps? ";
    // cin >> size;
    // temp_ptr = new double[size];
    // cout << temp_ptr << endl;
    // delete [] temp_ptr;

    // int scores[] {100, 95, 89};
    // int *score_ptr {scores};
    // cout << scores << endl;
    // cout << score_ptr << endl;
    // cout << scores[0] << ' ' << scores[1] << ' ' << scores[2] << endl;
    // cout << score_ptr[0] << ' ' << score_ptr[1] << ' ' << score_ptr[2] << endl;
    // cout << *scores << ' ' << *(scores + 1) << ' ' << *(scores + 2) << endl;
    // cout << *score_ptr << ' ' << *(score_ptr + 1) << ' ' << *(score_ptr + 2) << endl;

    // int scores[] {100, 95, 89, 68, -1};
    // int *score_ptr {scores};
    // while (*score_ptr != -1) {
    //     cout << *score_ptr << endl;
    //     score_ptr++;
    // }
    // score_ptr = scores;
    // while (*score_ptr != -1)
    //     cout << *score_ptr++ << endl;

    // string s1 {"Frank"};
    // string s2 {"Frank"};
    // string s3 {"James"};
    // string *p1 {&s1};
    // string *p2 {&s2};
    // string *p3 {&s1};
    // cout << boolalpha;
    // cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;
    // cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;
    // cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;
    // cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;
    // p3 = &s3;
    // cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;
    
    // char name[] {"Frank"};
    // char *char_ptr1 {nullptr};
    // char *char_ptr2 {nullptr};
    // char_ptr1 = &name[0];  // F
    // char_ptr2 = &name[3];  // n
    // cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    // int value {10};
    // int *int_ptr {nullptr};
    // cout << value << endl;
    // double_data(&value);
    // cout << value << endl;
    // int_ptr = &value;
    // double_data(int_ptr);
    // cout << value << endl;

    // int x {100}, y {200};
    // cout << x << endl;
    // cout << y << endl;
    // swap(&x, &y);
    // cout << x << endl;
    // cout << y << endl;

    // vector<string> stooges {"Larry", "Moe", "Curly"};
    // display(&stooges);
    // display(&stooges);

    // int scores[] {100, 98, 97, 79, 85, -1};
    // display(scores, -1);

    int *my_array {nullptr};
    size_t size;
    int init_value {};
    size = 10;
    init_value = 2;
    my_array = create_array(size, init_value);
    display(my_array, size);
    delete [] my_array;

    return 0;
}