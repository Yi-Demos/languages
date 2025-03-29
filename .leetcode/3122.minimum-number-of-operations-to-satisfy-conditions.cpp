/*
 * @lc app=leetcode id=3122 lang=cpp
 *
 * [3122] Minimum Number of Operations to Satisfy Conditions
 */

// @lc code=start
class Solution {
 public:
  int minimumOperations(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++) {
      int rowMin = INT_MAX;

      for (int j = 0; j < n; j++) {
        if (grid[i][j] != 0) rowMin = min(rowMin, grid[i][j]);

        if (grid[i][j] == 0) {
          grid[i][j] = 1;
        }
      }
    }
  }
};
// @lc code=end
