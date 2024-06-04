class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> counter;

        for (char c : s) {
            counter[c]++;
        }

        int ans = 0;
        bool oddExist = false;

        for (auto& entry : counter) {
            int freq = entry.second;

            if (freq % 2 == 0) {
                ans += freq;
            } else {
                ans += freq - 1;
                oddExist = true;
            }
        }

        if (oddExist) {
            return ans + 1;
        } else {
            return ans;
        }
    }
};