/*
 * @lc app=leetcode id=400 lang=cpp
 *
 * [400] Nth Digit
 */

// 1-9 9
// 10-99 90*2
// 100-999 900*3

// @lc code=start
class Solution {
 public:
  int findNthDigit(int n) {
    long digitLength = 1;
    long count = 9;
    long start = 1;

    while (n > digitLength * count) {
      n -= digitLength * count;
      digitLength++;
      count *= 10;
      start *= 10;
    }

    int number = start + (n - 1) / digitLength;
    int numberIndex = (n - 1) % digitLength;

    // trick: char to number method 1
    // c - '0'
    return to_string(number)[numberIndex] - '0';
    // trick: char to number method 2
    // char c = to_string(number)[numberIndex];
    // return stoi(string(1, c));
  }
};
// @lc code=end
