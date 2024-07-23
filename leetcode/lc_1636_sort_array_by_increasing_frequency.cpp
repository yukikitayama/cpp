class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            counter[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (counter[a] == counter[b]) {
                return a > b;
            } else {
                return counter[a] < counter[b];
            }
        });

        return nums;
    }
};