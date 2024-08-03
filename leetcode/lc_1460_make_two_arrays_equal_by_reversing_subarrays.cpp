class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> counter;
        for (int num : target) {
            counter[num]++;
        }

        for (int num : arr) {
            if (counter.find(num) == counter.end()) {
                return false;
            } else {
                counter[num]--;
                if (counter[num] == 0) {
                    counter.erase(num);
                }
            }
        }

        return true;
    }
};