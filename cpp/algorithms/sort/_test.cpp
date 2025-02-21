#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> boubleSort(vector<int> &nums) {
    for (int i = nums.size() - 1; i > 0; i--) {
      for (int j = 0; j < i; j++) {
        if (nums[i] < nums[j]) swap(nums[i], nums[j]);
      }
    }

    return nums;
  }
};

int main() {
  vector<int> arr = {1, 4, 8, 3, 5, 9};

  Solution solution;

  solution.boubleSort(arr);

  cout << "\n";
  for (int x : arr) cout << x;
  cout << "\n";
  return 0;
}
