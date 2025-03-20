/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
 public:
  int uniquePaths(int m, int n) {
    /*
      Approach 1: Math
      Time complexity: O(m+n)
      Space complexity: O(1)
    */

    // int N = m + n - 2;
    // int k = min(m - 1, n - 1);
    // long long res = 1;

    // for (int i = 1; i <= k; ++i) {
    //   res = res * (N - k + i) / i;
    // }

    // return res;

    /*
      Approach 2: Dynamic Programming
      Time complexity: O(m*n)
      Space complexity: O(m*n)
    */

    // NOTE:
    // vector<int> v(3, 1) == vector<int> v = {1,1 1}

    vector<vector<int>> dp(m, vector<int>(n, 1));

    for (int i = 1; i < m; ++i) {
      for (int j = 1; j < n; ++j) {
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
      }
    }

    return dp[m - 1][n - 1];

    /*
      Approach 3: Dynamic Programming && Recursive (Easy understanding)
      Time complexity: O(m*n)
      Space complexity: O(n)

      https://www.youtube.com/watch?v=fmpP5Ll0Azc&ab_channel=HuaHua
    */

    // if (m == 0 || n == 0) return 0;
    // if (m == 1 && n == 1) return 1;
    // if (dp[m][n] > 0) return dp[m][n];

    // int leftPath = uniquePaths(m - 1, n);
    // int topPath = uniquePaths(m, n - 1);

    // return leftPath + topPath;
  }

 private:
  unordered_map<int, unordered_map<int, int>> dp;  // for Approach 3
};
// @lc code=end
