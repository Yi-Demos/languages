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

// dynamic programming
class Solution {
 public:
  int climbStairs(int n) {
    vector<int> dp(n + 1);

    dp[0] = 1;
    dp[1] = 1;

    if (n <= 1) return dp[n];

    for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 2] + dp[i - 1];
    }

    return dp[n];
  }
};

int main() {
  Solution solution;

  solution.climbStairs(3);

  return 0;
}