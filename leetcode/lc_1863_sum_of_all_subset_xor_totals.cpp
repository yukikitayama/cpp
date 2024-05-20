class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return backtracking(nums, 0, 0);
    }

private:
    int backtracking(vector<int>& nums, int index, int current_total) {
        if (index == nums.size()) {
            return current_total;
        }

        int with_element = backtracking(nums, index + 1, current_total ^ nums[index]);
        int without_element = backtracking(nums, index + 1, current_total);

        return with_element + without_element;
    }
};