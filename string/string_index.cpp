#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ABCDEF";

    for (int i = 1; i < s.length(); i += 2)
        s[i - 1] = s[i] + 'a' - 'A';
    
    cout << s;

    return 0;
}