/*
 * @lc app=leetcode id=3392 lang=cpp
 *
 * [3392] Count Subarrays of Length Three With a Condition
 */

// @lc code=start
class Solution {
 public:
  int countSubarrays(vector<int>& nums) {
    /*
      Approach 1: Brute Force
      time complexity: O(n)
      space complexity: O(1)
    */

    int count = 0;

    for (int i = 0; i < nums.size() - 2; i++) {
      if ((nums[i] + nums[i + 2]) * 2 == nums[i + 1]) count++;
    }

    return count;
  }
};
// @lc code=end