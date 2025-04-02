/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
 public:
  int minCostClimbingStairs(vector<int>& cost) {
    /*
      Approach 1: Dynamic Programming
      time complexity: O(n)
      space complexity: O(1)
    */

    // int result = 0;
    // int prev1 = cost.at(0);
    // int prev2 = cost.at(1);

    // for (int i = 2; i < cost.size(); i++) {
    //   result = cost.at(i) + min(prev1, prev2);

    //   prev1 = prev2;
    //   prev2 = result;
    // }

    // return min(prev1, prev2);

    /*
      Approach 2: Dynamic Programming
      time complexity: O(n)
      space complexity: O(1)
    */

    if (cost.size() == 1) return cost[0];
    if (cost.size() == 2) return min(cost[0], cost[1]);

    for (int i = 2; i < cost.size(); i++) {
      cost[i] = min(cost[i] + cost[i - 2], cost[i] + cost[i - 1]);
    }

    return min(cost[cost.size() - 1], cost[cost.size() - 2]);
  }
};
// @lc code=end
