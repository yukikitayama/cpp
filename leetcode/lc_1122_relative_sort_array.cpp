class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int max_val = *max_element(arr1.begin(), arr1.end());
        vector<int> count(max_val + 1);

        for (int val : arr1) {
            count[val]++;
        }

        vector<int> ans;

        for (int val : arr2) {
            while (count[val] > 0) {
                ans.push_back(val);
                count[val]--;
            }
        }

        // Remaining
        for (int val = 0; val <= max_val; val++) {
            while (count[val] > 0) {
                ans.push_back(val);
                count[val]--;
            }
        }

        return ans;
    }
};