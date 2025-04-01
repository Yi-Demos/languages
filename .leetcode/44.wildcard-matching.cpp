/*
 * @lc app=leetcode id=44 lang=cpp
 *
 * [44] Wildcard Matching
 */

// @lc code=start
class Solution {
 public:
  bool isMatch(string s, string p) {
    /*
      Approach: Iterative
      Time Complexity: O(m + n)
      Space Complexity: O(1)
    */

    // int i = 0, j = 0, iStar = -1, jStar = -1, m = s.size(), n = p.size();

    // while (i < m) {
    //   if (j < n && (s[i] == p[j] || p[j] == '?')) {
    //     ++i;
    //     ++j;
    //   } else if (j < n && p[j] == '*') {
    //     iStar = i;
    //     jStar = j++;
    //   } else if (iStar >= 0) {
    //     i = ++iStar;
    //     j = jStar + 1;
    //   } else {
    //     return false;
    //   }
    // }

    // while (j < n && p[j] == '*') ++j;

    // return j == n;

    // Approach: Recursive

    // int i = 0, j = 0;

    // if (p == "*") return true;

    // for (int i = 0; i < s.size(); i++) {
    //   if (j >= p.size()) return false;

    //   if (s[i] == p[j] || p[j] == '?') {
    //     j++;
    //   }

    //   if (p[j] == '*') {
    //     while (p[j+1] == s[i] && i < s.size()) {
    //       i++;
    //     }
    //   }
    // }

    // return j == p.size();

    int i = 0, j = 0;

    if (p == "*") return true;

    while (i < s.size()) {
      if (j >= p.size()) return false;

      if (p[j] == '*') {
        // 跳過連續的 '*'
        while (j < p.size() && p[j] == '*') j++;
        if (j == p.size()) return true;  // '*' 在模式的結尾，匹配成功

        // 嘗試匹配 '*' 後的模式
        while (i < s.size() && s[i] != p[j] && p[j] != '?') i++;
      } else if (s[i] == p[j] || p[j] == '?') {
        i++;
        j++;
      } else {
        return false;
      }
    }

    while (j < p.size() && p[j] == '*') j++;  // 處理模式末尾的 '*'

    return j == p.size();
  }
};
// @lc code=end
