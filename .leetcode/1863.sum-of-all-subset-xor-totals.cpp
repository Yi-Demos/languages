/*
 * @lc app=leetcode id=1863 lang=cpp
 *
 * [1863] Sum of All Subset XOR Totals
 */

// @lc code=start
class Solution {
 public:
  int sum = 0;
  void dfs(vector<int>& nums, int index, int currXor) {
    if (index == nums.size()) {
      sum += currXor;

      return;
    }

    dfs(nums, index + 1, currXor ^ nums[index]);  // 選這個數字
    dfs(nums, index + 1, currXor);                // 不選這個數字
  }
  int subsetXORSum(vector<int>& nums) {
    //   if (nums.empty()) return 0;

    //   dfs(nums, 0);

    //   return sum;
    // }

    /*
      Approach 2: Math (WTF)
      Time complexity: O(n)
      Space complexity: O(1)

      https://www.youtube.com/watch?v=TnpowktUe1E&ab_channel=Techdose
    */

    int n = nums.size();
    int orr = 0;

    for (int ele : nums) {
      orr |= ele;
    }

    return orr * (1 << (n - 1));
  }
};
// @lc code=end
