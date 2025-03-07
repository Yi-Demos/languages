/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
 public:
  bool isPalindrome(string s, int l, int r, bool deleted) {
    while (l < r) {
      if (s.at(l) == s.at(r)) {
        l++;
        r--;
      } else {
        if (deleted) return false;

        // TRICK: don't use l++ or r-- in isPalindrome() params!
        return isPalindrome(s, l+1, r, true) || isPalindrome(s, l, r-1, true);
      }
    }

    return true;
  }
  bool validPalindrome(string s) {
    int l = 0;
    int r = s.size() - 1;

    // Approach 1: Recursion
    // time complexity: O(n)
    // space complexity: O(1)
    // int max = 0;
    return isPalindrome(s, 0, s.length() - 1, false);
  }
};
// @lc code=end
