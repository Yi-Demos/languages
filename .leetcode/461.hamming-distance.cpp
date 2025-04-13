/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
 public:
  int hammingDistance(int x, int y) {
    /*
      Approach 1: XOR
      time complexity: O(1)
      space complexity: O(1)
    */

    int count = 0;
    int xorVal = x ^ y;

    while (xorVal) {
      count += xorVal & 1;
      xorVal >>= 1;
    }

    return count;
  }
};
// @lc code=end