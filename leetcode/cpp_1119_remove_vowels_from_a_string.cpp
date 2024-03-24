#include <string>

using namespace std;

class Solution {
public:
    string removeVowels(string s) {
        string ans;

        for (char c : s) {
            if (!isVowel(c)) {
                ans += c;
            }
        }

        return ans;
    }

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};