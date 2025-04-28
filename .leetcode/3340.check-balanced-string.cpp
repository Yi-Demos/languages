/*
 * @lc app=leetcode id=3340 lang=cpp
 *
 * [3340] Check Balanced String
 */

// @lc code=start
class Solution {
 public:
  bool isBalanced(string num) {
    /*
      Approach: Iterative
      Time Complexity: O(n)
      Space Complexity: O(1)
    */

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < num.size(); i++) {
      int digit = num[i] - '0';

      if (i & 1) {
        oddSum += digit;
      } else {
        evenSum += digit;
      }
    }

    return oddSum == evenSum;
  }
};
// @lc code=end