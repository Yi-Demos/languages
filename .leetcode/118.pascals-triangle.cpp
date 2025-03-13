/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;

    if (numRows == 1) return {{1}};
    if (numRows == 2) return {{1}, {1, 1}};

    for (int i = 0; i < numRows; i++) {
      vector<int> row = {1};

      for (int j = 1; j < i; j++) {
        row[j] = res[i - 1][j - 1] + res[i - 1][j];
      }

      res.push_back(row);
    }

    return res;
  }
};
// @lc code=end
