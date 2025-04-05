/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
 public:
  int res = 0;
  void dfs(vector<int>& nums, int target, int index, int sum) {
    if (index == nums.size()) {
      if (sum == target) res++;

      return;
    }

    dfs(nums, target, index + 1, sum + nums[index]);
    dfs(nums, target, index + 1, sum - nums[index]);
  }
  int findTargetSumWays(vector<int>& nums, int target) {
    /*
      Approach 1: DFS
      time complexity: O(2^n)
      space complexity: O(n)
    */

    dfs(nums, target, 0, 0);

    return res;
  }
};
// @lc code=end
