/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    /*
      Two pointers (incorrect)
      Time complexity: O(n)
      Space complexity: O(1)

      input = [0, 1, 0, 3, 12]
      output = [12, 3, 1, 0, 0]
      expected = [1, 3, 12, 0, 0]
    */

    // int l = 0;
    // int r = nums.size() - 1;

    // while (l < r) {
    //   if (nums[l] == 0) {
    //     swap(nums[l], nums[r]);
    //     r--;
    //   }

    //   l++;
    // }

    /*
      Solution 1: Two pointers (fast and slow)
      Time complexity: O(n)
      Space complexity: O(1)
    */

    int zeroIndex = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        swap(nums[i], nums[zeroIndex]);
        zeroIndex++;
      }
    }
  }
};
// @lc code=end
