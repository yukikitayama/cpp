#include <unordered_map>

using namespace std;

class Solution {
private:
    unordered_map<int, int> dp = {
        {0, 0},
        {1, 1},
        {2, 1}
    };

    int recursion(int i) {
        if (dp.count(i)) {
            return dp[i];
        }

        int ans = recursion(i - 1) + recursion(i - 2) + recursion(i - 3);
        dp[i] = ans;
        return ans;
    }
public:
    int tribonacci(int n) {
        return recursion(n);
    }
};