/*
 * @lc app=leetcode id=983 lang=cpp
 *
 * [983] Minimum Cost For Tickets
 */

// @lc code=start
class Solution {
 public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    /*
      Aproach: Dynamic Programming
      Time Complexity: O(n)
      Space Complexity: O(n)
    */

    int j = 0;
    int lastDay = days.back();
    vector<int> dp(lastDay + 1, 0);

    for (int i = 1; i <= dp.size() - 1; i++) {
      if (i == days[j]) {
        j++;

        dp[i] = min({
            costs[0] + dp[i - 1],
            costs[1] + dp[i - min(i, 7)],
            costs[2] + dp[i - min(i, 30)],
        });
      } else {
        dp[i] = dp[i - 1];
      }
    }

    return dp[lastDay];
  }
};
// @lc code=end
