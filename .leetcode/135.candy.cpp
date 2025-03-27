/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */

// @lc code=start
class Solution {
 public:
  int candy(vector<int>& ratings) {
    /*
      Approach: Greedy
      Time complexity: O(n)
      Space complexity: O(n)
    */

    int n = ratings.size();
    vector<int> candies(n, 1);

    // from left to right
    for (int i = 1; i < n; i++) {
      if (ratings[i] > ratings[i - 1]) candies[i] = candies[i - 1] + 1;
    }

    // from right to left
    for (int i = n - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1])
        candies[i] = max(candies[i], candies[i + 1] + 1);
    }

    // sum
    int res = 0;
    for (int c : candies) res += c;

    return res;
  }
};
// @lc code=end
