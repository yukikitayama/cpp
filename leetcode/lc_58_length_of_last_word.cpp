#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length();
        int ans = 0;

        while (i > 0) {
            i--;
            if (s[i] != ' ') {
                ans++;
            } else if (ans > 0) {
                return ans;
            }
        }

        return ans;
    }
};
