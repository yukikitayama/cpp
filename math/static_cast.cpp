#include <iostream>

using namespace std;

int main()
{
    short s = 1;
    int i = 2;
    float f = 4.;

    cout << i / static_cast<float>(s) << endl;
    cout << i / 2 << endl;
    cout << i / f << endl;
    cout << 1 / 2 << endl;
    cout << 1.0f / 2 << endl;
    cout << 1 / 2.0f << endl;

    cout << i / static_cast<float>(s) + i / 2 + i / f;

    int j = 2;
    float g = 1;

    cout << (static_cast<float>(j) >> 1);

    return 0;
}

