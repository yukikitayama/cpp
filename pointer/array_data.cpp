#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> arr = { 1e-1, 1e0, 1e1 };

    cout << arr.data() << endl;

    double *ptr = arr.data() + 2;

    cout << *ptr << endl;

    cout << arr[1] - *ptr;
}