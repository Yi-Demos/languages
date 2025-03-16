/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    /*
      Approach 1: Hash Table
      time complexity: O(n)
      space complexity: O(n^2)
    */

    // unordered_map<int, int> hash_table;
    // for (int num : nums) {
    //   hash_table[num]++;
    // }

    // for (int i = 0; i <= nums.size(); i++) {
    //   if (hash_table.find(i) == hash_table.end()) return i;
    // }

    /*
      Approach 2: Math
      time complexity: O(n)
      space complexity: O(n)
    */

    // int sum = 0;
    // for (int num : nums) {
    //   sum += num;
    // }

    // int n = nums.size();
    // return n * (n + 1) / 2 - sum;

    /*
      Approach 3: Bit Manipulation
      time complexity: O(n)
      space complexity: O(1)

      XOR operation:
        1. a ^ 0 = a
        2. a ^ a = 0
      so every element will be cancelled out except the missing number
      if [3, 0, 1],
      missing = 0
      missing ^= 3 → missing = 3
      missing ^= 0 → missing = 3
      missing ^= 1 → missing = 2
    */

    int missing = nums.size();

    for (int i = 0; i < nums.size(); i++) {
      missing ^= i ^ nums[i];
    }

    return missing;
  }
};
// @lc code=end
