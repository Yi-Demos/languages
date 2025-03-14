#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int myAtoi(string s) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(n)
    */

    if (isdigit(s[0]) == false && s[0] != ' ' && s[0] != '-' && s[0] != '+') return 0;

    bool isNagative = false;
    int signChecked = false;

    // Skip whitespace
    while (s[0] == ' ') {
      s.erase(0, 1);
    }

    // Check sign
    while (s[0] == '-' || s[0] == '+') {
      if (signChecked) {
        cout << "signChecked " << signChecked << endl;
        return 0;
      }
      if (s[0] == '-') isNagative = true;

      signChecked = true;

      s.erase(0, 1);
    }

    int digit = 0;

    // Check digits
    // isdigit
    // s[digit] >= '0' && s[digit] <= '9'
    while (isdigit(s[digit])) {
      digit++;
    }

    cout << "digit " << digit << endl;

    int i = digit;
    long long num = 0;

    while (i > 0) {
      int digitNum = s[i - 1] - '0';

      num = num + digitNum * pow(10, digit - i);
      i--;
    }

    cout << "num " << num << endl;

    if (isNagative) num *= -1;

    if (num > INT_MAX) return INT_MAX;
    if (num < INT_MIN) return INT_MIN;

    return num;
  }
};

int main() {
  Solution sol;

  // cout << sol.myAtoi("   -42") << endl;
  // cout << sol.myAtoi("4193 with words") << endl;
  // cout << sol.myAtoi("words and 987") << endl;
  // cout << sol.myAtoi("-91283472332") << endl;
  cout << sol.myAtoi("+1") << endl;

  return 0;
}
