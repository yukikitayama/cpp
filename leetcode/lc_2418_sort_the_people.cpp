class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> height_to_name;

        for (int i = 0; i < names.size(); i++) {
            height_to_name[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end(), greater<>());

        vector<string> ans(names.size());

        for (int i = 0; i < names.size(); i++) {
            ans[i] = height_to_name[heights[i]];
        }

        return ans;
    }
};