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
      Approach 1: Hash
      time complexity: O(n)
      space complexity: O(1)
    */

    bool isNegative = false;

    if (x < 0) {
      isNegative = true;
      x * -1;
    }

    string xString = to_string(x);

    int startIndex = 0;

    while (xString[startIndex] == '0') {
      startIndex++;
    }

    string xStringReversed = "";

    for (int i = startIndex; i < xString.size() - startIndex; i++) {
      xStringReversed.insert(0, 1, xString[i]);
    }

    int res = isNegative ? stoi(xStringReversed) * -1 : stoi(xStringReversed);

    return res;
  }
};
// @lc code=end