#include <iostream>

using namespace std;

int main()
{
    float var;
    var = .1;
    var = var + 1.;

    cout << var << endl;
    cout << 1e1 << endl;

    var = var + 1e1;

    cout << var << endl;

    return 0;
}