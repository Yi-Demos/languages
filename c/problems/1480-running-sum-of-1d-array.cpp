#include <iostream>

using namespace std;

class Solution {
 public:
  vector<int> runningSum(vector<int>& nums) {
    // Method 1:
    for (int i = 1; i < nums.size(); i++) {
      nums[i] = nums[i] + nums[i - 1];
    }

    return nums;

    // Method 2:
    // int sum = 0;

    // for (int i = 0; i < nums.size(); i++) {
    //     nums[i] = nums[i] + sum;

    //     sum = nums[i];
    // }

    // return nums;
  }
};

int main() {
  Solution solution;
  vector<int> nums = {1, 2, 3, 4};

  solution.runningSum(nums);

  cout << "\n\n";
  return 0;
}