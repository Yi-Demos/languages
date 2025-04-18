/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
 public:
  void backtrack(vector<string>& v, string cur, int open, int close, int max) {
    if (cur.size() == max * 2) {
      v.push_back(cur);

      return;
    }

    if (open < max) backtrack(v, cur + '(', open + 1, close, max);
    if (close < open) backtrack(v, cur + ')', open, close + 1, max);
  }
  vector<string> generateParenthesis(int n) {
    /*
      Approach 1: Backtracking
      time complexity: O(4ⁿ / √n)
      space complexity: O(n)
    */

    vector<string> res;

    backtrack(res, "", 0, 0, n);

    return res;
  }
};
// @lc code=end