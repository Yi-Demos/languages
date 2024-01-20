#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int size = nums.size();

    for (int i = 0; i < size; i++) {
      for (int y = i + 1; y < size; y++) {
        if (nums[i] + nums[y] == target) {
          cout << i << y << endl;

          return {i, y};
        }
      }
    }

    // for no solution
    return {};
  }
};

int main() {
  vector<int> v = {2, 7, 11, 15};
  int target = 9;

  Solution solution;
  solution.twoSum(v, target);

  return 0;
}
