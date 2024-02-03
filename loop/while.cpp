#include <iostream>
#include <string>
using namespace std;

string fun(string &t, string s = "", int r = 2) {
    // Run once when r = 2?
    while(--r)
        // cout << r << endl;
        s += s;
    t = t + s;

    cout << t << endl;
    cout << s << endl;

    return s;
}

int main() {
    string name = "x";
    cout << fun(name, name);
    cout << name;
    return 0;
}