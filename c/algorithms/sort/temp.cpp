#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> sort(vector<int> &nums) {
    for (int i = nums.size() - 1; i >= 0; --i) {
      for (int j = 0; j < i; ++j) {
        if (nums[j] > nums[j + 1]) swap(nums[j], nums[j + 1]);
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
