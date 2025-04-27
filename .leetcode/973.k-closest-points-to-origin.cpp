/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    /*
      Approach 1: Max heap
      time complexity: O(nlogk)
      space complexity: O(k)
    */

    auto compare = [](auto a, auto b) { return a.first < b.first; };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)>
        pq;

    for (int i = 0; i < points.size(); i++) {
      int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];

      pq.push({dist, i});

      if (pq.size() > k) pq.pop();
    }

    vector<vector<int>> res;

    while (!pq.empty()) {
      int index = pq.top().second;

      res.push_back(points[index]);
      pq.pop();
    }

    return res;
  }
};
// @lc code=end