#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> &nums, int target) {
  int l = 0, r = nums.size() -1;

  if (nums[l] > target) return -1;
  if (nums[r] < target) return -1;

  while (l <= r)
  {
    int mid = nums.size() / 2;

    if (nums[mid] == target) return mid;

    if (target >= nums[mid]) {
      l = mid;
    } else {
      r = mid;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {1, 3, 4, 7, 8, 10};

  cout << binary_search(nums, 7) << endl;

  return 0;
}