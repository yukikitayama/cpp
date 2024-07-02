class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // To reduce space for hashmap, keep nums1 (data for hashmap) is smaller than nums2
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> map;

        for (auto num : nums1) {
            map[num]++;
        }

        int i = 0;

        for (auto n : nums2) {
            auto j = map.find(n);

            if (j != map.end() && --j->second >= 0) {
                nums1[i++] = n;
            }
        }

        return vector(begin(nums1), begin(nums1) + i);
    }
};