class Solution {
public:
    long long minEnd(int n, int x) {
        long curr = x;
        n--;

        while (n > 0) {
            curr = (curr + 1) | x;
            n--;
        }

        return curr;
    }
};