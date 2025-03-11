/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    /*
      Approach 1: Two Pointers (slow and fast)
      time complexity: O(n)
      space complexity: O(1)
    */

    if (nums.empty()) return 0;

    int slow = 0;

    for (int fast = 0; fast < nums.size() - 1; fast++) {
      if (nums[fast] != val) {
        nums[slow] = nums[fast];
        slow++;
      }
    }

    return slow;
  }
};
// @lc code=end
