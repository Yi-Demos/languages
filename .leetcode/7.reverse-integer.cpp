/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
 public:
  int reverse(int x) {
    if (x < 0) x * -1;

    int digit = 0;

    while ((x / 10 ^ digit) < 10) {
      digit++;
    }

    cout << digit << endl;

    return 0;
  }
};
// @lc code=end
