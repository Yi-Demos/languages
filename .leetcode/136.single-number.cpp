/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    /*
      Approach 1: Hash Table
      time complexity: O(n)
      space complexity: O(n^2)
    */

    // unordered_map<int, int> hash_table;
    // for (int num : nums) {
    //   hash_table[num]++;
    // }

    // for (auto& [key, value] : hash_table) {
    //   if (value == 1) return key;
    // }

    /*
      Approach 2: Math
      time complexity: O(n)
      space complexity: O(n)
    */

    // unordered_set<int> ust = {};

    // for (int num : nums) {
    //   if (ust.contains(num)) {
    //     ust.erase(num);
    //   } else {
    //     ust.insert(num);
    //   }
    // }

    // auto it = ust.begin();

    // return *it;

    /*
      Approach 3: Bit Manipulation
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
      single ^= 1 → single = 6​
      single ^= 2 → single = 4​
      single = 4
    */

    int single = 0;

    for (int num : nums) {
      single ^= num;
    }

    return single;
  }
};
// @lc code=end
