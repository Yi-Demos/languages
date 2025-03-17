/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    /*
      Approach: Iterate and append
      Time complexity: O(n)
      Space complexity: O(1)
    */

    vector<string> res;

    for (int i = 0; i < n; i++) {
      if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
        res.push_back("FizzBuzz");
      } else if ((i + 1) % 3 == 0) {
        res.push_back("Fizz");
      } else if ((i + 1) % 5 == 0) {
        res.push_back("Buzz");
      } else {
        res.push_back(to_string(i + 1));
      }
    }

    return res;
  }
};
// @lc code=end
