/*
 * @lc app=leetcode id=477 lang=cpp
 *
 * [477] Total Hamming Distance
 */

// @lc code=start
class Solution {
 public:
  int hammingDistance(int x, int y) {
    int count = 0;
    int xorVal = x ^ y;

    while (xorVal) {
      count += xorVal & 1;

      xorVal >>= 1;
    }

    return count;
  }
  int totalHammingDistance(vector<int>& nums) {
    /*
      Approach 1: Iterative with XOR (Time Limit Exceeded)
      time complexity: O(n^2)
      space complexity: O(1)
    */

    // long long d = 0;

    // for (int i = 0; i < nums.size(); i++) {
    //   for (int j = i + 1; j < nums.size(); j++) {
    //     d += hammingDistance(nums[i], nums[j]);
    //   }
    // }

    // return d;

    /*
      Approach 2: Iterative with XOR
      time complexity: O(n)
      space complexity: O(1)
    */

    int total = 0;

    for (int i = 0; i < 32; i++) {
      int count = 0;

      for (int n : nums) {
        if ((n >> i) & 1) count++;
      }

      total += count * (nums.size() - count);
    }

    return total;
  }
};
// @lc code=end