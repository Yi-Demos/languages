/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution {
 public:
  string minRemoveToMakeValid(string s) {
    /*
      Approach 1: Stack
      Time complexity: O(n)
      Space complexity: O(n)
    */

    stack<int> stack;
    unordered_set<int> indexesToRemove;

    for (int i = 0; i < s.size(); i++) {
      char c = s[i];

      if (c == '(') stack.push(i);

      if (c == ')') {
        if (stack.empty()) {
          indexesToRemove.insert(i);
        } else {
          stack.pop();
        }
      }
    }

    while (!stack.empty()) {
      indexesToRemove.insert(stack.top());
      stack.pop();
    }

    string result;

    for (int i = 0; i < s.size(); ++i) {
      if (indexesToRemove.find(i) == indexesToRemove.end()) {
        result += s[i];
      }
    }

    return result;
  }
};
// @lc code=end