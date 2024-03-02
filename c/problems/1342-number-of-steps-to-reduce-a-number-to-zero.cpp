#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int numberOfSteps(int num) {
    if (num == 0) return 0;

    int steps = 0;

    while (num > 0) {
      num = (num % 2 == 0) ? num / 2 : num - 1;

      steps++;
    }

    return steps;
  }
};