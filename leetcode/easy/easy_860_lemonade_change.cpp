class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> counter;

        for (int bill : bills) {
            if (bill == 5) {
                counter[5]++;
            } else if (bill == 10) {
                if (counter[5] > 0) {
                    counter[5]--;
                    counter[10]++;
                } else {
                    return false;
                }
            } else if (bill == 20) {
                if (counter[10] > 0 && counter[5] > 0) {
                    counter[10]--;
                    counter[5]--;
                } else if (counter[5] >= 3) {
                    counter[5] -= 3;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};