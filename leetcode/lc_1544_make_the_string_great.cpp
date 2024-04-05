#include <iostream>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            if (left > 0 && abs(s[right] - s[left - 1]) == 32) {
                left--;
            } else {
                s[left] = s[right];
                left++;
            }
        }

        return s.substr(0, left);
    }
};