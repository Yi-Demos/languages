/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution {
 public:
  int getSquareSize(vector<vector<char>>& matrix, int x, int y) {
    // int size = 1;
    // bool hasNext = true;

    // while (hasNext) {
    //   int maxY = y + size;

    //   while (y <= maxY) {
    //     for (int i = x; i < size; i++) {
    //       if (matrix[i][y] != '1') break;

    //       y++;
    //     }
    //   }

    //   size++;
    // }

    // return size;

    int maxSize = 0;
    int m = matrix.size();
    int n = matrix[0].size();
    int maxPossibleSize = min(m - x, n - y);

    for (int size = 1; size <= maxPossibleSize; ++size) {
      // 檢查新增的行
      for (int i = 0; i < size; ++i) {
        if (matrix[x + size - 1][y + i] != '1') return maxSize * maxSize;
      }
      // 檢查新增的列
      for (int i = 0; i < size - 1; ++i) {
        if (matrix[x + i][y + size - 1] != '1') return maxSize * maxSize;
      }
      maxSize = size;
    }

    return maxSize * maxSize;
  }
  int maximalSquare(vector<vector<char>>& matrix) {
    /*
      Approach 1: None
      time complexity: O(m×n×min(m, n))
      space complexity: O(1)
    */

    // int maxSquare = 0;

    // for (int i = 0; i < matrix.size(); i++) {
    //   for (int j = 0; j < matrix[0].size(); j++) {
    //     if (matrix[i][j] == '1') {
    //       int squareSize = getSquareSize(matrix, i, j);

    //       maxSquare = max(maxSquare, squareSize);
    //     }
    //   }
    // }

    // return maxSquare;

    /*
      Approach 2: Dynamic Programming 2D
      time complexity: O(n*m)
      space complexity: O(n*m)
    */

    // int m = matrix.size();

    // if (m == 0) return 0;

    // int n = matrix[0].size();
    // int maxSide = 0;
    // vector<vector<int>> dp(m, vector<int>(n, 0));

    // for (int i = 0; i < m; ++i) {
    //   for (int j = 0; j < n; ++j) {
    //     if (matrix[i][j] == '1') {
    //       if (i == 0 || j == 0) {
    //         dp[i][j] = 1;
    //       } else {
    //         dp[i][j] =
    //             min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
    //       }
    //       maxSide = max(maxSide, dp[i][j]);
    //     }
    //   }
    // }

    // return maxSide * maxSide;

    /*
      Approach 3: Dynamic Programming 2D to 1D (Optimized)
      time complexity: O(n*m)
      space complexity: O(n)

      dp[j]：表示當前行中第 j 列的最大正方形邊長
      prev：儲存上一行中第 j-1 列的值，即 dp[i-1][j-1]
      temp：暫存當前 dp[j] 的值，以便在下一次迴圈中更新 prev
    */

    int m = matrix.size();

    if (m == 0) return 0;

    int n = matrix[0].size();
    vector<int> dp(n + 1, 0);
    int maxSide = 0, prev = 0;

    for (int i = 0; i < m; ++i) {
      prev = 0;

      for (int j = 1; j <= n; ++j) {
        int temp = dp[j];

        if (matrix[i][j - 1] == '1') {
          dp[j] = min({dp[j], dp[j - 1], prev}) + 1;
          maxSide = max(maxSide, dp[j]);
        } else {
          dp[j] = 0;
        }

        prev = temp;
      }
    }

    return maxSide * maxSide;
  }
};
// @lc code=end