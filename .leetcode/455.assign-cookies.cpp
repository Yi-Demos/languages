/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int child = 0;
    int cookie = 0;

    while (child < g.size() && cookie < s.size()) {
      if (s[cookie] >= g[child]) child++;

      cookie++;
    }

    return child;
  }
};
// @lc code=end