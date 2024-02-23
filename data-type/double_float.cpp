#include <iostream>
using namespace std;

int main(void)
{
    double d = 0.999999;
    float f = .0;

    cout << (int) d << endl;
    cout << int(f) << endl;

    int i = (int) d == int(f);

    cout << i << endl;

    return 0;
}