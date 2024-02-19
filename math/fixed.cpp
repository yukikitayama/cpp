#include <iostream>
using namespace std;

int main() {
    double big = 1e15;
    double small = 1e-15;

    cout << big + small << endl;
    cout << fixed << big + small << endl;
    cout << scientific << big + small << endl;

    return 0;
}