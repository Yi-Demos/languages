/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
 public:
  int myAtoi(string s) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(n)
    */

    if (isdigit(s[0]) == false && s[0] != ' ' && s[0] != '-' && s[0] != '+')
      return 0;

    bool isNagative = false;
    int signChecked = false;

    // Skip whitespace
    while (s[0] == ' ') {
      s.erase(0, 1);
    }

    // Check sign
    while (s[0] == '-' || s[0] == '+') {
      if (signChecked) return 0;
      if (s[0] == '-') isNagative = true;

      signChecked = true;

      s.erase(0, 1);
    }

    int digit = 0;

    // Check digits
    // isdigit
    // s[digit] >= '0' && s[digit] <= '9'
    while (isdigit(s[digit]) && s[digit] != '0') {
      digit++;
    }

    cout << "digit " << digit << endl;

    if (digit > 11) return isNagative ? INT_MIN : INT_MAX;

    int i = digit;
    long long num = 0;

    while (i > 0) {
      int digitNum = s[i - 1] - '0';

      num = num + digitNum * pow(10, digit - i);
      i--;

      if (num > INT_MAX) return INT_MAX;
    }

    cout << "num " << num << endl;

    if (isNagative) num *= -1;

    return num;
  }
};
// @lc code=end
