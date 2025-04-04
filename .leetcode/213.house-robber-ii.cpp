/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
 public:
  int cal(vector<int> nums) {
    // int prev2 = 0, prev1 = 0;

    // for (int num : nums) {
    //   int curr = max(prev1, prev2 + num);

    //   prev2 = prev1;
    //   prev1 = curr;
    // }

    // return prev1;

    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];

    vector<int> dp(nums.size(), 0);

    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < nums.size(); i++) {
      dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp.back();
  }
  int rob(vector<int>& nums) {
    int n = nums.size();

    if (n == 0) return 0;
    if (n == 1) return nums[0];

    vector<int> case1(nums.begin(), nums.end() - 1);
    vector<int> case2(nums.begin() + 1, nums.end());

    return max(cal(case1), cal(case2));
  }
};
// @lc code=end
