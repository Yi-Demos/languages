/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
 public:
  bool isValid(string s) {
    /*
      Approach 1: Stack
      time complexity: O(n)
      space complexity: O(n)
    */

    stack<char> stack;

    for (char c : s) {
      if (c == '(' || c == '{' || c == '[') {
        stack.push(c);
      } else {
        if (stack.empty()) return false;

        char top = stack.top();

        if (c == ')' && top != '(') return false;
        if (c == '}' && top != '{') return false;
        if (c == ']' && top != '[') return false;

        stack.pop();
      }
    }

    return stack.empty();
  }
};
// @lc code=end