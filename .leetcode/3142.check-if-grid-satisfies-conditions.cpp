/*
 * @lc app=leetcode id=3142 lang=cpp
 *
 * [3142] Check if Grid Satisfies Conditions
 */

// @lc code=start
class Solution {
 public:
  bool satisfiesConditions(vector<vector<int>>& grid) {
    /*
      Approach: Iterate
      Time complexity: O(m * n)
      Space complexity: O(1)
    */

    int m = grid.size(), n = grid[0].size();

    for (int col = 0; col < n; col++) {
      int val = grid[0][col];

      // 確保整欄一致
      for (int row = 1; row < m; row++) {
        if (grid[row][col] != val) return false;
      }

      // 與前一欄相比，不能相同
      if (col > 0 && grid[0][col] == grid[0][col - 1]) return false;
    }

    return true;
  }
};

// @lc code=end