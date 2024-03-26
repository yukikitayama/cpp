bool isBadVersion(int version) {
    return true;
};


class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        int mid;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid - 1;
            }

            else {
                left = mid + 1;
            }
        }

        return left;
    } 
};