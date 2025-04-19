/*
 * @lc app=leetcode id=2116 lang=cpp
 *
 * [2116] Check if a Parentheses String Can Be Valid
 */

// @lc code=start
class Solution {
 public:
  bool canBeValid(string s, string locked) {
    /*
      Approach 1: Greedy
      Time complexity: O(4^n)
      Space complexity: O(n × 4^n)
    */

    int n = s.size();
    int x = 0;

    if (n & 1) return false;

    for (int i = 0; i < n; i++) {
      if (s[i] == '(' || locked[i] == '0') {
        x++;
      } else if (x) { // s[i] == ')' and locked[i] == '1'
        x--;
      } else { // too many ')' encountered
        return false;
      }
    }

    x = 0;

    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == ')' || locked[i] == '0') {
        x++;
      } else if (x) { // s[i] == '(' and locked[i] == '1'
        x--;
      } else { // too many '(' encountered
        return false;
      }
    }

    return true;
  }
};
// @lc code=end