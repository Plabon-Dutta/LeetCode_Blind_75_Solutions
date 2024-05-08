class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() - 1;
        int l = 0, r = n, ans;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (mid + 1 < n && nums[mid + 1] < nums[mid]) {
                ans = nums[mid + 1];
                break;
            }
            else if (mid - 1 >= 0 && nums[mid - 1] > nums[mid]) {
                ans = nums[mid];
                break;
            }
            else if (nums[mid] < nums[r]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};

// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// O(log N)
