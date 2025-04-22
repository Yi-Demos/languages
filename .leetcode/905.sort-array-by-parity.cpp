/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
 public:
  vector<int> sortArrayByParity(vector<int>& nums) {
    /*
      Approach 1: Two Pointers
      time complexity: O(n)
      space complexity: O(1)
    */

    int l = 0;
    int r = nums.size() - 1;

    while (r > l) {
      if ((nums[l] % 2 == 1) && (nums[r] % 2 == 0)) {
        swap(nums[l], nums[r]);
        l++;
        r--;
      }

      if (nums[l] % 2 == 0) l++;
      if (nums[r] % 2 == 1) r--;
    }

    return nums;
  }
};
// @lc code=end