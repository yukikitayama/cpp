#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;

        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.contains(-num)) {
                ans = max(ans, abs(num));
            }
            
            seen.insert(num);
        }

        return ans;        
    }
}