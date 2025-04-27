/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
 public:
  string multiply(string num1, string num2) {
    /*
      Approach 1: None
      time complexity: O(1)
      space complexity: O(1)
    */

    long long longVal = stoll(num1) * stoll(num2);

    int res = static_cast<int>(longVal);

    return to_string(longVal);
  }
};
// @lc code=end