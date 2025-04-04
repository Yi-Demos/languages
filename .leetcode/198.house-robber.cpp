/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
 public:
  int rob(vector<int>& nums) {
    /*
      Aproach: Dynamic Programming
      Time Complexity: O(n)
      Space Complexity: O(n)
    */

    // if (nums.size() == 0) return 0;
    // if (nums.size() == 1) return nums[0];

    // vector<int> dp(nums.size(), 0);

    // dp[0] = nums[0];
    // dp[1] = max(nums[0], nums[1]);

    // for (int i = 2; i < nums.size(); i++) {
    //   dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    // }

    // return dp.back();

    /*
      Aproach: Dynamic Programming
      Time Complexity: O(n)
      Space Complexity: O(1)
    */

    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return min(nums[0], nums[1]);

    int cur = 0;
    int prev1 = nums[0];
    int prev2 = nums[1];

    for (int i = 2; i < nums.size(); i++) {
      cur = min(prev1, nums[i] + prev2);
    }

    return cur;
  }
};
// @lc code=end
