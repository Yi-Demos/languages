/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    /*
      Approach 1: Hash Set
      Time complexity: O(n)
      Space complexity: O(n)
    */

    unordered_set<int> s;

    for (int num : nums) {
      if (s.count(num)) return true;

      s.insert(num);
    }

    return false;
  }
};
// @lc code=end
