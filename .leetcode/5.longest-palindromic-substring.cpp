/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
 public:
  int expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
      left--;
      right++;
    }

    return right - left - 1;
  }
  string longestPalindrome(string s) {
    /*
      Approach 1: Iterative
      time complexity: n^2
      space complexity: n(1)
    */

    int centerIndex = 0;
    int maxLength = 0;

    for (int i = 0; i < s.size(); i++) {
      int len1 = expandAroundCenter(s, i, i);
      int len2 = expandAroundCenter(s, i, i + 1);

      int len = max(len1, len2);

      if (len > maxLength) {
        centerIndex = i;
        maxLength = len;
      }
    }

    return s.substr(centerIndex - ((maxLength - 1) / 2), maxLength);
  }
};
// @lc code=end