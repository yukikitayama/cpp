#include <iostream>
using namespace std;

int main() {
    int tab[5] = { 1, 2, 4, 8, 16};

    int *p1 = tab, *p2 = tab + 4;

    cout << *p1 << endl;  // Actual value that p1 pointer points at, 1st element
    cout << p1 << endl;  // Pointer to address
    cout << *p2 << endl;  // Actual value that p2 pointer points at. 5th element
    cout << p2 << endl;  // Pointer to address

    // p1 starts from pointing at 1st element, up to pointing at 4th element
    for(int *p = p1 + 1; p < p2; p++) {
      cout << *p << endl;
      cout << p << endl;

      *p = p[-1] * 2;
    }

    cout << tab[1] << tab[2];
}