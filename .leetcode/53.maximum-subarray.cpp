/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    /*
      Approach 1: Two Pointers (slow and fast)
      time complexity: O(n)
      space complexity: O(1)
    */

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
      currentSum = max(nums[i], currentSum + nums[i]);
      maxSum = max(maxSum, currentSum);
    }

    return maxSum;
  }
};
// @lc code=end
