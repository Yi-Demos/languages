/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
 public:
  string convert(string s, int numRows) {
    /*
      Approach 1: None
      time complexity: O(n)
      space complexity: O(n)

      https://www.youtube.com/watch?v=CPamjPdCvIk&ab_channel=%E5%B1%B1%E6%99%AF%E5%9F%8E%E4%B8%80%E5%A7%90
    */

    if (numRows == 1) return s;

    vector<string> rows(numRows);
    int currentRow = 0;
    bool goingDown = false;

    for (char c : s) {
      rows[currentRow] += c;

      if (currentRow == 0 || currentRow == numRows - 1) goingDown = !goingDown;

      currentRow += goingDown ? 1 : -1;
    }

    string result;

    for (const string& row : rows) {
      result += row;
    }

    return result;
  }
};
// @lc code=end