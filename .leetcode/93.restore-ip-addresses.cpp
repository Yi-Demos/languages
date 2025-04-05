/*
 * @lc app=leetcode id=93 lang=cpp
 *
 * [93] Restore IP Addresses
 */

// @lc code=start
class Solution {
public:
  void backtrack(string &s, int start, int part, string &current, vector<string> &result) {
    if (part == 4 && start == s.size()) {
      result.push_back(current);
      return;
    }
    if (part >= 4 || start >= s.size())
      return;

    for (int len = 1; len <= 3; ++len) {
      if (start + len > s.size())
        break;
      string segment = s.substr(start, len);
      if ((segment[0] == '0' && segment.size() > 1) ||
          (len == 3 && stoi(segment) > 255)) {
        continue;
      }
      string temp = current;
      if (!current.empty()) {
        temp += ".";
        Ｆ
      }
      temp += segment;
      backtrack(s, start + len, part + 1, temp, result);
    }
  }

  vector<string> restoreIpAddresses(string s) {
    vector<string> result;
    string current;
    backtrack(s, 0, 0, current, result);
    return result;
  }
};
// @lc code=end