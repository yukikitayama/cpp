class Solution {
public:
    int passThePillow(int n, int time) {
        int full_round = time / (n - 1);
        int remaining = time % (n - 1);

        if (full_round % 2 == 0) {
            return remaining + 1;
        } else {
            return n - remaining;
        }
    }

    int passThePillow1(int n, int time) {
        int ans = 1;
        int updater = 1;
        for (int i = 0; i < time; i++) {
            ans += updater;

            if (ans == n) {
                updater = -1;
            } else if (ans == 1) {
                updater = 1;
            }
        }

        return ans;
    }
};