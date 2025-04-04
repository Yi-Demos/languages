/*
 * @lc app=leetcode id=241 lang=cpp
 *
 * [241] Different Ways to Add Parentheses
 */

// @lc code=start
class Solution {
 public:
  unordered_map<string, vector<int>> memo;

  vector<int> diffWaysToCompute(string expression) {
    if (memo.count(expression)) return memo[expression];

    vector<int> res;

    for (int i = 0; i < expression.size(); i++) {
      if (expression[i] == '+' || expression[i] == '-' ||
          expression[i] == '*') {
        vector<int> left = diffWaysToCompute(expression.substr(0, i));
        vector<int> right =
            diffWaysToCompute(expression.substr(i + 1, expression.size()));

        for (int l : left) {
          for (int r : right) {
            if (expression[i] == '+') {
              res.push_back(l + r);
            } else if (expression[i] == '-') {
              res.push_back(l - r);
            } else if (expression[i] == '*') {
              res.push_back(l * r);
            }
          }
        }
      }
    }

    if (res.empty()) res.push_back(stoi(expression));

    memo[expression] = res;

    return res;
  }
};
// @lc code=end
