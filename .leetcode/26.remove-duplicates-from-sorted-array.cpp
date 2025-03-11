/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    /*
      Approach 1: Two Pointers (slow and fast)
      time complexity: O(n)
      space complexity: O(1)
    */

    if (nums.empty()) return 0;

    int slow = 0;

    for (int fast = 1; fast < nums.size(); fast++) {
      if (nums[fast] != nums[slow]) {
        slow++;
        nums[slow] = nums[fast];
      }
    }

    return slow + 1;
  }
};
// @lc code=end
