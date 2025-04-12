/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
 public:
  int hammingWeight(int n) {
    /*
      Approach 1: Iterative
      time complexity: O(k)
      space complexity: O(1)
    */

    // int count = 0;

    // while (n != 0) {
    //   // NOTE: n & 1 最右邊 bit 為 1 回 1、0 回 0，不需要再 n & 1 == 1
    //   if (n & 1) count++;

    //   n >>= 1;
    // }

    // return count;

    /*
      Approach 2: Brian Kernighan's Algorithm (Optimized)
      time complexity: O(k)
      space complexity: O(1)

      https://www.youtube.com/watch?v=e0sVe4-JJJI&ab_channel=bittechpie
    */

    int count = 0;

    while (n != 0) {
      n &= (n - 1);
      count++;
    }

    return count;
  }
};
// @lc code=end