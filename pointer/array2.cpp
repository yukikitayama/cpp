#include <iostream>
using namespace std;

int main() {
    int t[3] = { 3, 2, 1 }, *ptr = t + 1;

    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << *(ptr + 1) << endl;

    // ptr: points 2nd element
    (*(ptr + 1))++;

    cout << *(ptr + 1) << endl;

    cout << ptr << endl;

    // This increment pointer and dereference
    *ptr++;
    // ptr: points 3rd element

    cout << ptr << endl;

    cout << t[1] << t[2];

    return 0;
}