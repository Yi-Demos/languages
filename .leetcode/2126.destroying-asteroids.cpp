/*
 * @lc app=leetcode id=2126 lang=cpp
 *
 * [2126] Destroying Asteroids
 */

// @lc code=start
class Solution {
 public:
  bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    /*
      Approach 1: Iterative
      time complexity: O(n log n)
      space complexity: O(1)
    */

    sort(asteroids.begin(), asteroids.end());

    long long currentMass = mass;

    for (int a : asteroids) {
      if (currentMass < a) return false;

      currentMass += a;
    }

    return true;
  }
};
// @lc code=end