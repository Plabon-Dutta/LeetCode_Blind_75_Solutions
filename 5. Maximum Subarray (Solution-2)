class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();

        int dp[n];
        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            dp[i] = nums[i] + max(0, dp[i - 1]);

            ans = max(ans, dp[i]);
        }

        return ans;
    }
};

// O(n)
// https://leetcode.com/problems/maximum-subarray/description/
