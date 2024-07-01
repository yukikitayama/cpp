class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int curr = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 != 0) {
                curr++;
                if (curr == 3) {
                    return true;
                }
            } else {
                curr = 0;
            }
        }

        return false;
    }
};