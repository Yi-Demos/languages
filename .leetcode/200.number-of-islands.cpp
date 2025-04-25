/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
 public:
  void dfs(vector<vector<char>>& grid, int i, int j) {
    /*
      Approach 1: BFS
      time complexity: O(M × N)
      space complexity: O(min(M, N))
    */

    int m = grid.size(), n = grid[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1') return;

    grid[i][j] = '0';

    dfs(grid, i + 1, j);  // down
    dfs(grid, i - 1, j);  // up
    dfs(grid, i, j + 1);  // right
    dfs(grid, i, j - 1);  // left
  }
  int numIslands(vector<vector<char>>& grid) {
    int count = 0;

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {
          dfs(grid, i, j);
          count++;
        }
      }
    }

    return count;
  }
};
// @lc code=end