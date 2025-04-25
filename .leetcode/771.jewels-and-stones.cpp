/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
 public:
  int numJewelsInStones(string jewels, string stones) {
    /*
      Approach: Brute force
      Time complexity: O(n * m)
      Space complexity: O(1)
    */

    // int count = 0;

    // for (char j : jewels) {
    //   for (char s : stones) {
    //     if (j == s) count++;
    //   }
    // }

    // return count;

    /*
      Approach: Set (Optimized)
      Time complexity: O(n + m)
      Space complexity: O(n)
    */

    unordered_set<char> jewelSet(jewels.begin(), jewels.end());
    int count = 0;

    for (char s : stones) {
      if (jewelSet.count(s)) count++;
    }

    return count;
  }
};
// @lc code=end