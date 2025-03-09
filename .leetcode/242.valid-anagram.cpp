/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
 public:
  bool isAnagram(string s, string t) {
    /*
      Approach 1: Hashmap char counter
      time complexity: O(n)
      space complexity: O(n)
    */

    if (s.length() != t.length()) return false;

    unordered_map<char, int> sCounter;

    for (const char c : s) {
      sCounter[c]++;
    }

    for (const char c : t) {
      sCounter[c]--;
    }

    for (const char c : s) {
      if (sCounter[c] != 0) return false;
    }

    return true;
  }
};
// @lc code=end
