/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
 public:
  int distributeCandies(vector<int>& candyType) {
    /*
      Approach: Set
      Time complexity: O(n)
      Space complexity: O(n)
    */

    unordered_set<int> types(candyType.begin(), candyType.end());

    return min(types.size(), candyType.size() / 2);
  }
};
// @lc code=end
