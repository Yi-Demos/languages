/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    /*
      Approach: Hash Map
      Time complexity: O(n)
      Space complexity: O(n)
    */
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++) {
      m[nums[i]]++;

      if (m[nums[i]] > nums.size() / 2) return nums[i];
    }

    return 0;
  }
};
// @lc code=end
