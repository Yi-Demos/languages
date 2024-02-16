#include <iostream>
#include <vector>

using namespace std;
class Solution {
 public:
  int climbStairs(int n) {
    if (n == 1) return 1;

    int cur = 1;
    int prev = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
      sum = cur + prev;
      prev = cur;
      cur = sum;
    }

    return cur;
  }
};

int main() {
  Solution solution;

  solution.climbStairs(3);

  return 0;
}