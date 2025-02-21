#include <iostream>

using namespace std;

class Solution {
 public:
  int fib(int n) {
    if (n == 0) return 0;
    if (n < 3) return 1;

    int cur = 1;
    int prev = 0;
    int sum = 0;

    for (int i = 1; i < n; i++) {
      sum = cur + prev;
      prev = cur;
      cur = sum;
    }

    return cur;
  }
};

int main() {
  Solution solution;

  cout << solution.fib(3);  // 2
  cout << "\n";
  cout << solution.fib(4);  // 3

  cout << "\n\n";
  return 0;
}