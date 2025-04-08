/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    /*
      Approach 1: Iterative
      time complexity: O(nlogn)
      space complexity: O(n)
    */

    vector<vector<int>> merged;

    if (intervals.size() == 1) return intervals;

    sort(intervals.begin(), intervals.end());

    vector<int> current = intervals[0];

    for (int i = 1; i < intervals.size(); i++) {
      if (current[1] >= intervals[i][0]) {
        current[1] = max(current[1], intervals[i][1]);
      } else {
        merged.push_back(current);

        current = intervals[i];
      }
    }

    merged.push_back(current);

    return merged;
  }
};
// @lc code=end
