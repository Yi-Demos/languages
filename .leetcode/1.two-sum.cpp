/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    // method 1: hashmap char counter
    // time complexity: O(n)
    // space complexity: O(n)
    unordered_map<int, int> numsMap;

    for (int i = 0; i < nums.size(); i++) {
      int pairNum = target - nums[i];

      if (numsMap.find(pairNum) == numsMap.end()) {
        numsMap[nums[i]] = i;
      } else {
        return vector<int>{numsMap[pairNum], i};
      }
    }

    return {};
  }
};
// @lc code=end
