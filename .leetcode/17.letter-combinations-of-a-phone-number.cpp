/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
 public:
  vector<string> res;
  vector<string> dict{"",    "",    "abc",  "def", "ghi",
                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

  void dfs(string& digits, int index, string path) {
    if (index == digits.size()) {
      res.push_back(path);
      return;
    }

    // TRICK: Input digits = "23", digits[index] is char
    //        digits[3] = dict['3' - '0']
    string letters = dict[digits[index] - '0'];

    for (char c : letters) {
      dfs(digits, index + 1, path + c);
    }
  }

  vector<string> letterCombinations(string digits) {
    /*
      Approach 1: DFS
      Time complexity: O(4^n)
      Space complexity: O(n × 4^n)
    */

    if (digits.empty()) return {};

    res.clear();

    dfs(digits, 0, "");

    return res;
  }
};
// @lc code=end
