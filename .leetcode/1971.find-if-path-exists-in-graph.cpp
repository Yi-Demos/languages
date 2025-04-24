/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

// @lc code=start
class Solution {
 public:
  bool validPath(int n, vector<vector<int>>& edges, int source,
                 int destination) {
    /*
      Approach 1: BFS
      time complexity: O(V + E) V 為節點數，E 為邊數
      space complexity: O(V)
    */

    if (n == 1) return true;

    vector<vector<int>> graph(n);

    for (const vector<int> edge : edges) {
      graph[edge[0]].push_back(edge[1]);
      graph[edge[1]].push_back(edge[0]);
    }

    vector<bool> visited(n, false);
    queue<int> q;

    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
      int current = q.front();

      q.pop();

      if (current == destination) return true;

      for (int neighbor : graph[current]) {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }

    return false;
  }
};
// @lc code=end