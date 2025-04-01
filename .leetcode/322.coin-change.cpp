/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

 /*

  coins = {1, 2, 5}
  amount = 5

  init: dp = [0, ∞, ∞, ∞, ∞, ∞]

  for (int coin : coins)
    coin = 1
      dp = [0, 1, 2, 3, 4, 5]
    coin = 2
      dp = [0, 1, 1, 2, 2, 3]
    coin = 5
      dp = [0, 1, 1, 2, 2, 1]


  coins = {2, 5}
  amount = 10

  init: dp = [0, ∞, ∞, ∞, ∞, ∞, ∞, ∞, ∞, ∞, ∞]

  for (int coin : coins)
    coin = 2
      dp = [0, ∞, 1, ∞, 2, ∞, 3, ∞, 4, ∞, 5]
    coin = 5
      dp = [0, ∞, 1, ∞, 2, 1, 3, ∞, 4, 2, 5]

    dp[10] = min(dp[10], dp[10 - coin] + 1)
    dp[9] = min(dp[9], dp[9 - coin] + 1)
    dp[8] = min(dp[8], dp[8 - coin] + 1)
    dp[7] = min(dp[7], dp[7 - coin] + 1)
    dp[6] = min(dp[6], dp[6 - coin] + 1)
    dp[5] = min(dp[5], dp[5 - coin] + 1)
    dp[4] = min(dp[4], dp[4 - coin] + 1)
    dp[3] = min(dp[3], dp[3 - coin] + 1)
    dp[2] = min(dp[2], dp[2 - coin] + 1)
    dp[1] = min(dp[1], dp[1 - coin] + 1)

  */

// @lc code=start
class Solution {
 public:
  int coinChange(vector<int>& coins, int amount) {
    /*
      Approach: Dynamic Programming
      Time Complexity: O(n * m)
      Space Complexity: O(n)
    */

    vector<int> dp(amount + 1, INT_MAX);

    dp[0] = 0;

    for (int coin : coins) {
      for (int i = coin; i <= amount; i++) {
        if (dp[i - coin] != INT_MAX) dp[i] = min(dp[i], dp[i - coin] + 1);
      }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];

    /*
      Approach: Greedy (not work)
      Time Complexity: O(n)
      Space Complexity: O(1)

      not work
      coins = {1, 3, 4}, amount = 6

      4 + 1 + 1 -> 3
      3 + 3 -> 2
    */

    // int res = 0;

    // sort(coins.begin(), coins.end());

    // for (int coin : coins) cout << coin << " ";

    // for (int i = 0; i < coins.size(); i++) {
    //   int coin = coins[coins.size() - 1 - i];

    //   while (amount >= coin) {
    //     amount -= coin;
    //     res++;
    //   }
    // }

    // return amount > 0 ? -1 : res;
  }
};
// @lc code=end
