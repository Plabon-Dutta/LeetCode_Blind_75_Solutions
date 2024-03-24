class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, vector <int>> mm;
        for (int i = 0; i < nums.size(); i++) {
            mm[nums[i]].push_back(i);
        }

        vector <int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (target - nums[i] == nums[i]) {
                if (mm[target - nums[i]].size() > 1) {
                    ans.push_back(i);
                    ans.push_back(mm[target - nums[i]].back());
                    break;
                }
            }
            else {
                if (mm[target - nums[i]].size() > 0) {
                    ans.push_back(i);
                    ans.push_back(mm[target - nums[i]].back());
                    break;
                }
            }
        }
        return ans;
    }
};

// https://leetcode.com/problems/two-sum/
// O(n)
