/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
 public:
  void dfs(vector<vector<int>>& grid, int i, int j, int& area) {
    int m = grid.size(), n = grid[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1) return;

    area++;
    grid[i][j] = 0;

    dfs(grid, i + 1, j, area);
    dfs(grid, i - 1, j, area);
    dfs(grid, i, j + 1, area);
    dfs(grid, i, j - 1, area);
  }

  int maxAreaOfIsland(vector<vector<int>>& grid) {
    /*
      Approach 1: DFS
      time complexity: O(M × N)
      space complexity: O(min(M, N))
    */

    // int res = 0;

    // for (int i = 0; i < grid.size(); i++) {
    //   for (int j = 0; j < grid[0].size(); j++) {
    //     if (grid[i][j] == 1) {
    //       int area = 0;

    //       dfs(grid, i, j, area);

    //       res = max(area, res);
    //     }
    //   }
    // }

    // return res;

    /*
      Approach 2: BFS
      time complexity: O(M × N)
      space complexity: O(min(M, N))
    */

    int maxArea = 0;
    int m = grid.size(), n = grid[0].size();

    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j] == 1) {
          int area = 0;
          queue<pair<int, int>> q;
          q.push({i, j});
          grid[i][j] = 0;  // 標記為已訪問

          while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            ++area;

            for (const auto& [dx, dy] : directions) {
              int nx = x + dx, ny = y + dy;
              if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1) {
                q.push({nx, ny});
                grid[nx][ny] = 0;  // 標記為已訪問
              }
            }
          }

          maxArea = max(maxArea, area);
        }
      }
    }
    return maxArea;
  }
};
// @lc code=end