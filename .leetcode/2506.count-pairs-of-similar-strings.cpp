/*
 * @lc app=leetcode id=2506 lang=cpp
 *
 * [2506] Count Pairs Of Similar Strings
 */

// @lc code=start
class Solution {
 public:
  int similarPairs(vector<string>& words) {
    /*
      Approach 1: Bitmask (Optimized)
      time complexity: O(n*k) n：​字串陣列 words 中的字串數量 k：​每個字串的平均長度
      space complexity: O(n)
    */

    unordered_map<int, int> maskCount;
    int result = 0;

    for (const auto& word : words) {
      int mask = 0;

      for (char c : word) {
        mask |= 1 << (c - 'a');
      }

      result += maskCount[mask];
      ++maskCount[mask];
    }

    return result;
  }
};
// @lc code=end
