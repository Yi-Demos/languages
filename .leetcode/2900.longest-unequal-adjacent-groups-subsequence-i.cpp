/*
 * @lc app=leetcode id=2900 lang=cpp
 *
 * [2900] Longest Unequal Adjacent Groups Subsequence I
 */

// @lc code=start
class Solution {
 public:
  vector<string> getLongestSubsequence(vector<string>& words,
                                       vector<int>& groups) {
    // Approach 1: iterative
    // time complexity: O(n)
    // space complexity: O(n)
    vector<string> result;
    int prev = groups[0];

    result.push_back(words[0]);

    for (int i = 1; i < groups.size(); i++) {
      if (groups[i] != prev) {
        result.push_back(words[i]);
        prev = groups[i];
      }
    }

    return result;
  }
};
// @lc code=end
