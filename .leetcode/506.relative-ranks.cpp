/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
 public:
  vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> res;
    vector<int> sortedScores = score;

    sort(sortedScores.begin(), sortedScores.end(), greater<int>());

    for (int s : sortedScores) {
      cout << s << endl;
    }

    for (int s : score) {
      if (s == sortedScores[0]) {
        res.push_back("Gold Medal");
      } else if (s == sortedScores[1]) {
        res.push_back("Silver Medal");
      } else if (s == sortedScores[2]) {
        res.push_back("Bronze Medal");
      } else {
        res.push_back(to_string(s));
      }
    }

    return res;
  }
};
// @lc code=end