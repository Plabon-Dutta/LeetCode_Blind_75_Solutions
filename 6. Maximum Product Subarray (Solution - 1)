class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx, mn, ans;
        mx = mn = ans = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            int tmp = max({nums[i], nums[i] * mx, nums[i] * mn});
            mn = min({nums[i], nums[i] * mx, nums[i] * mn});
            mx = tmp;
            ans = max(ans, mx);
        }

        return ans;
    }
};

// O(N)
// https://leetcode.com/problems/maximum-product-subarray/
