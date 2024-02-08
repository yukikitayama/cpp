#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "123";

    // appends 3rd string "3" to the end, and then push_back is just the same as append, 
    //  so appends the 2nd from the last string to the end of the string, which is the original "3"
    s.append(s.substr(2)).push_back(s[s.length() - 2]);

    cout << s;
}