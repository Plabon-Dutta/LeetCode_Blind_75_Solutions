class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int last = prices[0];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] < last) last = prices[i];
            else ans = max (ans, prices[i] - last);
        }
        return ans;
    }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// O(n)
