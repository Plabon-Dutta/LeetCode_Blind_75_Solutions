class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN, max_ending_here = 0;
 
        for (int i = 0; i < nums.size(); i++) {
            max_ending_here = max_ending_here + nums[i];
            if (max_so_far < max_ending_here) {
                max_so_far = max_ending_here;
            }
    
            if (max_ending_here < 0) {
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }
};

// O(n)
// https://leetcode.com/problems/maximum-subarray/description/
