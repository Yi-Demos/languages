/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    // Approach 1: iterative
    // time complexity: O(n)
    // space complexity: O(1)
    digits[digits.size() - 1] += 1;

    int carry = 0;

    // adjust the carry
    for (int i = digits.size() - 1; i >= 0; i--) {
      int current = digits[i] + carry;

      if (current >= 10) {
        carry = 1;
        digits[i] = current % 10;
      } else {
        carry = 0;
        digits[i] = current;
      }

      if (carry > 0 && i == 0) {
        digits.insert(digits.begin(), carry);
      }
    }

    return digits;
  }
};
// @lc code=end
