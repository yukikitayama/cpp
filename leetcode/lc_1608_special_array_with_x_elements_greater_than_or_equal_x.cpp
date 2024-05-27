class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = -1;
        for (int x = 0; x <= n; ++x) {
            int idx = binarySearch(x, nums);
            int count = n - idx;
            if (count == x) {
                ans = x;
            }
        }
        return ans;
    }

    int binarySearch(int target, vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        int res = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (target <= nums[mid]) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }
};