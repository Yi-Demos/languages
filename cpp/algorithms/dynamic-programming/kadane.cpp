#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSubArray(vector<int>& nums) {
  if (nums.empty()) return {};

  int maxSum = nums[0], currentSum = nums[0];
  int start = 0, end = 0, tempStart = 0;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > currentSum + nums[i]) {
      currentSum = nums[i];
      tempStart = i;
    } else {
      currentSum += nums[i];
    }

    if (currentSum > maxSum) {
      maxSum = currentSum;
      start = tempStart;
      end = i;
    }
  }

  return vector<int>(nums.begin() + start, nums.begin() + end + 1);
}

int main() {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  vector<int> result = maxSubArray(nums);

  cout << "Maz Array: ";
  for (int num : result) {
    cout << num << " ";
  }
  return 0;
}
