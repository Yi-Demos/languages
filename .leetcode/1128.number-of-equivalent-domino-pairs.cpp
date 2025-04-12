/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
class Solution {
 public:
  int numEquivDominoPairs(vector<vector<int>>& dominoes) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(n)
    */

    unordered_map<int, int> count;
    int res = 0;

    // 統計每個標準化鍵值的出現次數
    for (const auto& domino : dominoes) {
      int a = domino[0];
      int b = domino[1];

      if (a > b) swap(a, b); // 確保 a <= b，這樣 [a, b] 和 [b, a] 會有相同的鍵值

      int key = a * 10 + b;
      ++count[key];
    }

    // 計算等價對的數量
    for (const auto& pair : count) {
      int n = pair.second;

      if (n > 1) res += n * (n - 1) / 2;  // C(n, 2)
    }

    return res;

    /*
      Approach 2: Iterative (Optimized)
      time complexity: O(n)
      space complexity: O(n)
    */

    // map<pair<int, int>, int> seen;
    // int result = 0;

    // for (auto& v : dominoes) {
    //   if (v[0] > v[1]) swap(v[0], v[1]);

    //   result += seen[make_pair(v[0], v[1])]++;
    // }

    // return result;
  }
};
// @lc code=end
