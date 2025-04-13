/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
 public:
  vector<int> findErrorNums(vector<int>& nums) {
    int sum = 0;
    int duplicate = 0;
    unordered_set<int> seen;
    int expectedSum = ((1 + nums.size()) * nums.size()) / 2;

    for (int num : nums) {
      sum += num;
      if (seen.count(num)) {
        duplicate = num;
      } else {
        seen.insert(num);
      }
    }

    return {duplicate, abs(sum - expectedSum)};
  }
};
// @lc code=end
