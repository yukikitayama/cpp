#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> scoreCopy(n);

        // Copy vector
        copy(score.begin(), score.end(), scoreCopy.begin());

        // Save vector index and value
        unordered_map<int, int> scoreToIndex;
        for (int i = 0; i < n; i++) {
            scoreToIndex[scoreCopy[i]] = i;
        }

        // Sort copied vector in descending order
        sort(scoreCopy.begin(), scoreCopy.end(), greater<int>());

        // Assign ranks
        vector<string> rank(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                rank[scoreToIndex[scoreCopy[i]]] = "Gold Medal";
            } else if (i == 1) {
                rank[scoreToIndex[scoreCopy[i]]] = "Silver Medal";
            } else if (i == 2) {
                rank[scoreToIndex[scoreCopy[i]]] = "Bronze Medal";
            } else {
                rank[scoreToIndex[scoreCopy[i]]] = to_string(i + 1);
            }
        }

        return rank;
    }
};