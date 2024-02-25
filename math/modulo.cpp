#include <iostream>
using namespace std;

int main() {
    int i = 2;
    float f = 4.4;

    // cout << f % float(i);
    // cout << int(f) % float(i);
    cout << int(f) % i;

    return 0;
}