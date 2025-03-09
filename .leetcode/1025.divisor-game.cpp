/*
 * @lc app=leetcode id=1025 lang=cpp
 *
 * [1025] Divisor Game
 */

// @lc code=start
class Solution {
 public:
  bool divisorGame(int n) {
    /*
      Approach 1: Dynamic Programming
      time complexity: O(n^2)
      space complexity: O(n)
    */

    vector<bool> dp(n + 1, false);

    for (int i = 2; i <= n; i++) {
      for (int x = 1; x < i; x++) {
        if (i % x == 0 && !dp[i - x]) {
          dp[i] = true;
          break;
        }
      }
    }

    return dp[n];

    /*
      Approach 2: Math
      time complexity: O(1)
      space complexity: O(1)
    */

    // return n % 2 == 0;
  }
};
// @lc code=end
