#include <iostream>

using namespace std;

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int index = 0;

    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] >= target) continue;

      ++index;
    }

    return index;
  }
};

int main() {
  Solution solution;

  // cout << solution.result();

  cout << "\n\n";
  return 0;
}