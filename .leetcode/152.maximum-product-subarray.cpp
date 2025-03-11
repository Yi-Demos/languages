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
    */

    // int currentProduct = nums[0];
    // int maxSum = nums[0];
    // int minSum = nums[0];

    // for (int i = 1; i < nums.size(); ++i) {
    //   if (nums[i] < 0) swap(maxSum, minSum);

    //   currentProduct = max(nums[i], currentProduct * nums[i]);
    //   maxSum = max(maxSum, currentProduct);
    //   minSum = min(minSum, currentProduct);
    // }

    // return maxSum;

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
