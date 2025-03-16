/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    /*
      Approach 1: Hash Table
      time complexity: O(n)
      space complexity: O(n)
    */

    unordered_map<int, int> hash_table;
    for (int num : nums) {
      hash_table[num]++;
    }

    for (auto& [key, value] : hash_table) {
      if (value == 1) return key;
    }

    /*
      Approach 2: Bit Manipulation
      time complexity: O(n)
      space complexity: O(1)

      XOR operation:
        1. a ^ 0 = a
        2. a ^ a = 0
      so every element will be cancelled out except the single number
      if [4, 1, 2, 1, 2],

      single = 0​
      single ^= 4 → single = 4​
      single ^= 1 → single = 5​
      single ^= 2 → single = 7​
    */

    // int ones = 0, twos = 0;

    // for (int num : nums) {
    //   ones = (ones ^ num) & ~twos;
    //   twos = (twos ^ num) & ~ones;
    // }

    // return ones;
  }
};
// @lc code=end
