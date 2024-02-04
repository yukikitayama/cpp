#include <iostream>
using namespace std;

float Float(float x) {
    return 2 * x / (.5 * x);
}

void Void(int n) {
    float v = n;

    while(n) {
        cout << "while start" << endl;

        v = Float(v);
        cout << v << endl;

        n >>= 1;
        cout << n << endl;

        cout << "while end" << endl;
    }

    cout << v;
}

int main() {
    Void(4);
    return 0;
}
