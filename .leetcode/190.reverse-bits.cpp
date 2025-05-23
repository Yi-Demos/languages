/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    /*
      Approach 1: Iterative (Optimized)
      time complexity: O(1)
      space complexity: O(1)
    */

    uint32_t res = 0;

    for (int i = 0; i < 32; ++i) {
      res = (res << 1) | (n & 1);
      n >>= 1;
    }

    return res;
  }
};
// @lc code=end
