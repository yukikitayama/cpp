#include <iostream>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, balance = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                balance++;
            } else if (s[i] == ')') {
                balance--;
            }

            ans = max(ans, balance);
        }

        return ans;   
    }
};