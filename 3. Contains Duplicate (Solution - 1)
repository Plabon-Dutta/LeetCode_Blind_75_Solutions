class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> cnt;
        for (int i = 0; i < nums.size(); i++) {
            cnt.insert(nums[i]);
        }

        if (cnt.size() == nums.size()) return false;
        return true;
    }
};

// https://leetcode.com/problems/contains-duplicate/description/
// O(n)
