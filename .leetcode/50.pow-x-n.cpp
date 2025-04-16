/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
 public:
  double myPow(double x, int n) {
    /*
      Approach 1: Brute Force
      time complexity: O(n)
      space complexity: O(1)
    */

    double res = 1;

    while (n >= 1) {
      res = res * x;

      n--;
    }

    return res;
  }
};
// @lc code=end