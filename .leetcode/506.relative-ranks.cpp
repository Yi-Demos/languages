/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
 public:
  vector<string> findRelativeRanks(vector<int>& score) {
    /*
      Approach 1: Iterative
      time complexity: O(nlogn)​
      space complexity: O(n)
    */

    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < score.size(); i++) {
      pq.push({score[i], i});
    }

    int rank = 1;
    vector<string> res(score.size());

    while (!pq.empty()) {
      auto [s, idx] = pq.top();
      pq.pop();

      if (rank == 1) {
        res[idx] = "Gold Medal";
      } else if (rank == 2) {
        res[idx] = "Silver Medal";
      } else if (rank == 3) {
        res[idx] = "Bronze Medal";
      } else {
        res[idx] = to_string(rank);
      }

      rank++;
    }

    return res;
  }
};
// @lc code=end