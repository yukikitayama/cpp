#include <iostream>
#include <string>
using namespace std;

string fun(string t, string s = "x", int r = 1) {
    
    // cout << "&t" << endl;
    // cout << &t << endl;
    // cout << "s" << endl;
    // cout << s << endl;
    
    while(--r)
        // cout << "while" << endl;
        s += s;

    cout << "t" << endl;
    cout << t << endl;
    cout << "s" << endl;
    cout << s << endl;

    t = t + s;

    cout << "t" << endl;
    cout << t << endl;

    return s;
}

int main() {
    string name = "a";

    // cout << "&name" << endl;
    // cout << &name << endl;

    cout << fun(name);
    cout << name;
    return 0;
}


