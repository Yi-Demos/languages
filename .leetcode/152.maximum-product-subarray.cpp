/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
 public:
  int maxProduct(vector<int>& nums) {
    /*
      Approach 1: Dynamic Programming (Kadane's Algorithm)
      time complexity: O(n)
      space complexity: O(1)

      因為乘法可能會有負負得正的情況，所以需要紀錄最小值
      [53] Maximum Subarray 的解法是只紀錄最大值，因為加法不會有負負得正的情況
    */

    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] < 0) swap(maxProduct, minProduct);

      maxProduct = max(nums[i], maxProduct * nums[i]);
      minProduct = min(nums[i], minProduct * nums[i]);

      result = max(result, maxProduct);
    }

    return result;
  }
};
// @lc code=end
