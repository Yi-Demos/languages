/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
 public:
  int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;  // base case: 湊出金額 0 不需要任何硬幣

    for (int coin : coins) {
      for (int i = coin; i <= amount; ++i) {
        if (dp[i - coin] != INT_MAX) {
          cout << "dp[i - coin] " << dp[i - coin] << "\n";

          dp[i] = min(dp[i], dp[i - coin] + 1);
        }
      }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
  }
};
// @lc code=end
