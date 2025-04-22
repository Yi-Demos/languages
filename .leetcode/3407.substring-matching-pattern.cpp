/*
 * @lc app=leetcode id=3407 lang=cpp
 *
 * [3407] Substring Matching Pattern
 */

// @lc code=start
class Solution {
 public:
  bool hasMatch(string s, string p) {
    /*
      Approach: Substr
      Time Complexity: O(n * m)
      Space Complexity: O(m)
    */

    int x = p.find("*");
    string b = p.substr(0, x);
    string e = p.substr(x + 1);
    int i = s.find(b);
    int j = s.rfind(e);

    return i != -1 && j != -1 && i + b.size() <= j;
  }
};
// @lc code=end