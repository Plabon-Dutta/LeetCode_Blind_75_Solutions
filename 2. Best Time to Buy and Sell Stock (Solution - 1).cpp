class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int suf[n];
        suf[n - 1] = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], prices[i]);
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, suf[i + 1] - prices[i]);
        }

        return ans;
    }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// O(n)
