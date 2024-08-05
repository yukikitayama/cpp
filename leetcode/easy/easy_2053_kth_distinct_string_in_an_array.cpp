class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> counter;

        for (string& str_ : arr) {
            counter[str_]++;
        }

        for (string& str_ : arr) {
            if (counter[str_] == 1) {
                k--;
                if (k == 0) {
                    return str_;
                }
            }
        }

        return "";
    }
};