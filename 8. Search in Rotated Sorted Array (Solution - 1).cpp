class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (nums[mid] == target) {
                ans = mid;
                break;
            }
            else if (nums[r] < nums[mid]) {
                if (target < nums[mid] && target >= nums[l]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            else if (nums[l] > nums[mid]) {
                if (target > nums[mid] && target <= nums[r]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
            else {
                if (target > nums[mid]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }
        return ans;
    }
};

// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
// O(log N)
