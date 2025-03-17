/*
 * @lc app=leetcode id=2460 lang=cpp
 *
 * [2460] Apply Operations to an Array
 */

// @lc code=start
class Solution {
 public:
  vector<int> applyOperations(vector<int>& nums) {
    int pointerIndex = 0;

    for (int i = 0; i < nums.size(); i++) {
      cout << "i: " << i << " nums[i]: " << nums[i] << " nums[i + 1]: " << nums[i + 1] << endl;
      if (nums[i] == nums[i + 1]) {
        nums[pointerIndex] = nums[i] * 2;
        i = i + 2;
      } else {
        nums[pointerIndex] = nums[i];
        i++;
      }

      pointerIndex++;
    }

    return nums;
  }
};
// @lc code=end
