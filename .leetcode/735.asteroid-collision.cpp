/*
 * @lc app=leetcode id=735 lang=cpp
 *
 * [735] Asteroid Collision
 */

// @lc code=start
class Solution {
 public:
  vector<int> asteroidCollision(vector<int>& asteroids) {
    if (asteroids.size() <= 1) return asteroids;

    stack<int> s;

    for (int i = 0; i < asteroids.size(); i++) {
      int cur = asteroids[i];
      bool destroyed = false;

      if (cur > 0) {
        s.push(cur);
      } else {
        // 處理碰撞
        while (!s.empty() && s.top() > 0) {
          if (s.top() < -cur) {
            s.pop();  // 棧頂爆炸，繼續比
          } else if (s.top() == -cur) {
            s.pop();  // 兩顆一起爆
            destroyed = true;
            break;
          } else {
            // 新來的爆炸
            destroyed = true;
            break;
          }
        }

        if (!destroyed) s.push(cur);  // 新來的沒爆才留下
      }
    }

    vector<int> res;

    while (!s.empty()) {
      res.push_back(s.top());
      s.pop();
    }

    reverse(res.begin(), res.end());

    return res;
  }
};
// @lc code=end