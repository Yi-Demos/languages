/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    /*
      Approach 1: Hash Set
      Time complexity: O(n)
      Space complexity: O(k)
    */

    unordered_set<int> window;

    for (int i = 0; i < nums.size(); ++i) {
      if (window.find(nums[i]) != window.end()) return true;

      window.insert(nums[i]);

      if (window.size() > k) window.erase(nums[i - k]);
    }

    return false;
  }
};
// @lc code=end
