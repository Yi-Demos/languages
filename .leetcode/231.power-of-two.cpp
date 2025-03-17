/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
 public:
  bool isPowerOfTwo(int n) {
    /*
      Approach: Bit Manipulation
      Time complexity: O(1)
      Space complexity: O(1)

      if n is power of 2, then it has only one bit set to 1
      2: 0010
      4: 0100
      8: 1000
      16: 10000
      so n & (n - 1) will be 0
    */

    // return n > 0 && (n & (n - 1)) == 0;

    /*
      Approach: Recursive
      Time complexity: O(log n)
      Space complexity: O(log n)
    */

    if (n == 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;

    return isPowerOfTwo(n / 2);
  }
};
// @lc code=end
