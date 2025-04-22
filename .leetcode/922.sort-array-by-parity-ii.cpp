/*
 * @lc app=leetcode id=922 lang=cpp
 *
 * [922] Sort Array By Parity II
 */

// @lc code=start
class Solution {
 public:
  vector<int> sortArrayByParityII(vector<int>& nums) {
    /*
      Approach 1: Two Pointers
      time complexity: O(n)
      space complexity: O(1)
    */

    // int ptr1 = 0;
    // int ptr2 = 0;

    // for (int i = 0; i < nums.size(); i++) {
    //   if ((i & 1) != (nums[i] & 1)) {
    //     for (int j = i; j < nums.size(); j++) {
    //       if ((i & 1) == (nums[j] & 1)) {
    //         swap(nums[i], nums[j]);
    //         break;
    //       }
    //     }
    //   }
    // }

    // return nums;

    /*
      Approach 2: Two Pointers
      time complexity: O(n)
      space complexity: O(1)
    */

    int evenIndex = 0;
    int oddIndex = 1;

    while (evenIndex < nums.size() && oddIndex < nums.size()) {
      if (!(nums[evenIndex] & 1)) {
        evenIndex++;
      } else if (nums[oddIndex] & 1) {
        oddIndex++;
      } else {
        swap(nums[oddIndex], nums[evenIndex]);

        oddIndex++;
        evenIndex++;
      }
    }

    return nums;
  }
};
// @lc code=end