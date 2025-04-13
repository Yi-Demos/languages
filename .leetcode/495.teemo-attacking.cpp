/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */

// @lc code=start
class Solution {
 public:
  int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    if (timeSeries.size() == 1) return duration;

    int sum = 0;

    for (int i = 1; i < timeSeries.size(); i++) {
      sum += min(timeSeries[i] - timeSeries[i - 1], duration);
    }

    sum += duration;

    return sum;
  }
};
// @lc code=end
