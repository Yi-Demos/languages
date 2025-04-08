/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
 public:
  vector<int> grayCode(int n) {
    /*
      Approach 1: Iterative
      Time complexity: O(2^n)
      Space complexity: O(2^n)
    */

    vector<int> result;

    result.push_back(0);

    for (int i = 0; i < n; i++) {
      int size = result.size();

      for (int j = size - 1; j >= 0; --j) {
        result.push_back(result[j] | (1 << i));
      }
    }

    return result;
  }
};
// @lc code=end
