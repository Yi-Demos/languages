/*
 * @lc app=leetcode id=2032 lang=cpp
 *
 * [2032] Two Out of Three
 */

// @lc code=start
class Solution {
 public:
  vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                            vector<int>& nums3) {
    /*
      Approach 1: Hash
      time complexity: O(1)
      space complexity: O(1)
    */

    map<int, int> m;

    for (int n : unordered_set<int>(nums1.begin(), nums1.end())) {
      m[n]++;
    }
    for (int n : unordered_set<int>(nums2.begin(), nums2.end())) {
      m[n]++;
    }
    for (int n : unordered_set<int>(nums3.begin(), nums3.end())) {
      m[n]++;
    }

    vector<int> res;

    for (const auto& [key, value] : m) {
      if (value > 1) res.push_back(key);
    }

    return res;
  }
};
// @lc code=end