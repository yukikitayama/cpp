#include <iostream>
using namespace std;

int main() {
    int *val = new int;

    cout << sizeof(val) << endl;
    cout << sizeof(int *) << endl;

    // val is a pointer only initialized
    *val = sizeof(val) / sizeof(int *);
    // *val contains 1 now

    cout << val << endl;
    cout << *val << endl;

    // tab is a pointer to size 1 array
    int *tab = new int[*val];

    // Put 1 into first element of the array
    tab[0] = *val;

    delete val;

    cout << *tab;
    // This prints 1

    delete [] tab;

    return 0;
}