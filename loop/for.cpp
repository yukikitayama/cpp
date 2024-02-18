#include <iostream>
using namespace std;
int main(void)
{
    float a;
    int i = 0;
    for (a = .009; a < 1e2; a *= 1e1)
      i++;
    cout << i << endl;

    return 0;
}

/*
a: 0.009, i: 1
a: 0.09, i: 2
a: 0.9, i: 3
a: 9, i: 4
a: 90, i: 5
a: 900, break
*/