class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, product2 = 1, cnt = 0;
        for (auto i : nums) {
            product *= i;

            if (i != 0) product2 *= i;
            else cnt++;
        }

        vector <int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(product / nums[i]);
            else {
                if (cnt == 1) ans.push_back(product2);
                else ans.push_back(0);
            }
        }

        return ans;
    }
};

// https://leetcode.com/problems/product-of-array-except-self/description/
// O(n)
