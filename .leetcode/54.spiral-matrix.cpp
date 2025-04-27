/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    /*
      Approach 1: None
      time complexity: O(m*n)
      space complexity: O(1)
    */

    if (matrix.empty()) return {};

    vector<int> res;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && right >= left) {
      // 從左到右
      for (int i = left; i <= right; ++i) {
        res.push_back(matrix[top][i]);
      }

      top++;

      // 從上到下
      for (int i = top; i <= bottom; ++i) {
        res.push_back(matrix[i][right]);
      }

      right--;

      // 從右到左
      if (top <= bottom) {
        for (int i = right; i >= left; --i) {
          res.push_back(matrix[bottom][i]);
        }

        bottom--;
      }

      // 從下到上
      if (left <= right) {
        for (int i = bottom; i >= top; --i) {
          res.push_back(matrix[i][left]);
        }

        left++;
      }
    }

    return res;
  }
};
// @lc code=end