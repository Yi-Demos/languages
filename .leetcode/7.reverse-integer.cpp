/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
 public:
  int reverse(int x) {
    /*
      Approach 1:
      time complexity: O(1)
      space complexity: O(1)
    */

    long long lx = static_cast<long long>(x);
    bool isNegative = lx < 0;
    if (isNegative) lx = -lx;

    std::string xStr = std::to_string(lx);
    std::reverse(xStr.begin(), xStr.end());

    long long res = std::stoll(xStr);
    if (isNegative) res = -res;

    if (res > INT_MAX || res < INT_MIN) return 0;
    return static_cast<int>(res);
  }
};
// @lc code=end