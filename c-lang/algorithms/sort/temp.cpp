#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> sort(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] > nums[i + 1]) swap(nums[i + 1], nums[i]);
      }
    }

    return nums;
  }
};

int main() {
  vector<int> arr = {1, 4, 8, 3, 5, 9};

  Solution solution;

  solution.sort(arr);

  for (int x : arr) cout << x;

  return 0;
}
