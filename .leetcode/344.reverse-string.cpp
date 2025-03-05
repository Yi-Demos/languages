/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
 public:
  void reverseString(vector<char>& s) {
    // Approach 1: iterative
    // time complexity: O(n^2)
    // space complexity: O(n)

    // tmp.insert(tmp.begin()) 是往前新增都會把原先的重排，因此 time complexity
    // 為 n^2 而非 n vector<char> tmp;

    // for (int i = 0; i < s.size(); i++) {
    //   tmp.insert(tmp.begin(), s[i]);
    // }

    // s = tmp;

    // --------------------------------------------------------------------

    // Approach 2: swap
    // time complexity: O(n)
    // space complexity: O(1)
    int l = 0;
    int r = s.size() - 1;

    while (l < r) {
      swap(s[l], s[r]);

      l++;
      r--;
    }
  }
};
// @lc code=end
