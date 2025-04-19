/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> combine(int n, int k) {
    vector<int> nums;

    for (int i = 1; i < n; i++) {
      nums.push_back(i);
    }

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i; j < nums.size(); j++) {

      }
    }
  }
};
// @lc code=end