class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> pre(n + 1, 1);
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * nums[i - 1]; 
        }

        vector <int> suf(n + 1, 1);
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] * nums[i];
        }

        vector <int> ans(n);
        ans[0] = suf[1];
        ans[n - 1] = pre[n - 1];
        for (int i = 1; i < n - 1; i++) {
            ans[i] = pre[i] * suf[i + 1];
        }

        return ans;
    }
};

// https://leetcode.com/problems/product-of-array-except-self/description/
// O(n)
