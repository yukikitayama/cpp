int guess(int num) {
    return 0 || -1 || 1;
};


class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n;
        int mid;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (guess(mid) == 0) {
                return mid;
            } else if (guess(mid) == -1) {
                right = mid - 1;
            } else if (guess(mid) == 1) {
                left = mid + 1;
            }
        }

        return -1;
    }
};