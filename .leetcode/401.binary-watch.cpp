/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */

// @lc code=start
class Solution {
 public:
  vector<int> hourBits = {1, 2, 4, 8};            // 4 個小時燈
  vector<int> minuteBits = {1, 2, 4, 8, 16, 32};  // 6 個分鐘燈
  vector<string> res;

  void dfs(int turnedOn, int index, int hour, int minute) {
    if (hour > 11 || minute > 59) return;  // 超過合法時間就剪枝
    if (turnedOn == 0) {
      // 組合合法時間
      res.push_back(to_string(hour) + ":" + (minute < 10 ? "0" : "") +
                    to_string(minute));
      return;
    }

    for (int i = index; i < 10; i++) {
      if (i < 4) {  // 小時燈
        dfs(turnedOn - 1, i + 1, hour + hourBits[i], minute);
      } else {  // 分鐘燈
        dfs(turnedOn - 1, i + 1, hour, minute + minuteBits[i - 4]);
      }
    }
  }

  vector<string> readBinaryWatch(int turnedOn) {
    /*
      Approach: Brouteforce
      Time Complexity: O(1)
      Space Complexity: O(1)
    */

    // vector<string> res;

    // for (int h = 0; h < 12; h++) {
    //   for (int m = 0; m < 60; m++) {
    //     // NOTE: __builtin_popcount(x)	計算 x 的二進位裡有幾個 1
    //     if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
    //       // 小時無前導零，分鐘補零
    //       res.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") +
    //                     to_string(m));
    //     }
    //   }
    // }

    // return res;

    /*
      Approach: DFS
      Time Complexity: O(1)
      Space Complexity: O(turnedOn)
    */

    dfs(turnedOn, 0, 0, 0);

    return res;
  }
};
// @lc code=end