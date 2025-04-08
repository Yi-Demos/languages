/*
 * @lc app=leetcode id=816 lang=cpp
 *
 * [816] Ambiguous Coordinates
 */

// @lc code=start
class Solution {
 public:
  bool isValidInteger(const string& s) { return s == "0" || s[0] != '0'; }
  bool isValidDecimal(const string& s) { return !s.empty() && s.back() != '0'; }

  vector<string> makeValidNumbers(string s) {
    vector<string> results;

    int n = s.size();

    // 整數：沒有小數點
    if (isValidInteger(s)) results.push_back(s);

    // 小數：插入小數點的每個位置
    for (int i = 1; i < n; ++i) {
      string intPart = s.substr(0, i);
      string decPart = s.substr(i);

      if (isValidInteger(intPart) && isValidDecimal(decPart))
        results.push_back(intPart + "." + decPart);
    }

    return results;
  }

  vector<string> ambiguousCoordinates(string s) {
    vector<string> res;

    string trimmed = s.substr(1, s.size() - 2);

    for (int i = 1; i < trimmed.size(); i++) {
      string left = trimmed.substr(0, i);
      string right = trimmed.substr(i);

      vector<string> leftNums = makeValidNumbers(left);
      vector<string> rightNums = makeValidNumbers(right);

      for (string l : leftNums) {
        for (string r : rightNums) {
          res.push_back("(" + l + ", " + r + ")");
        }
      }
    }

    return res;
  };
};
// @lc code=end
