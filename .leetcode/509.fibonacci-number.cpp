/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
 public:
  int fib(int n) {
    /*
      Approach 1: Dynamic Programming
      time complexity: O(n)
      space complexity: O(1)
    */

    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0;
    int current = 1;
    int sum = 0;

    for (int i = 1; i < n; i++) {
      sum = current + prev;
      prev = current;
      current = sum;
    }

    return sum;
  }
};
// @lc code=end
