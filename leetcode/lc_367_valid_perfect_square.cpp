class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }

        int left = 1, right = num / 2;
        long mid;
        long squared;

        while (left <= right) {
            mid = left + (right - left) / 2;
            squared = mid * mid;

            if (squared == num) {
                return true;
            } else if (squared > num) {
                right = mid - 1;
            } else if (squared < num) {
                left = mid + 1;
            }
        }

        return false;        
    }
};