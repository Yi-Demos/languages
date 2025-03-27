/*
 * @lc app=leetcode id=2570 lang=cpp
 *
 * [2570] Merge Two 2D Arrays by Summing Values
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                  vector<vector<int>>& nums2) {
    /*
      Approach 1: Two Pointers (Optimized)
      time complexity: O(n + m)
      space complexity: O(n + m)
    */

    vector<vector<int>> result;
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
      if (nums1[i][0] == nums2[j][0]) {
        result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
        i++;
        j++;
      } else if (nums1[i][0] < nums2[j][0]) {
        result.push_back(nums1[i]);
        i++;
      } else {
        result.push_back(nums2[j]);
        j++;
      }
    }
    while (i < nums1.size()) {
      result.push_back(nums1[i]);
      i++;
    }
    while (j < nums2.size()) {
      result.push_back(nums2[j]);
      j++;
    }
    return result;

    /*
      Approach 2: HashMap
      time complexity: O(n + m)
      space complexity: O(n + m)
    */

    // map<int, int> keyToSum;

    // // Copying the array nums1 to the map.
    // for (auto nums : nums1) {
    //   keyToSum[nums[0]] = nums[1];
    // }

    // // Adding the values to existing keys or create new entries.
    // for (auto nums : nums2) {
    //   keyToSum[nums[0]] += nums[1];
    // }

    // vector<vector<int>> mergedArray;
    // for (auto it : keyToSum) {
    //   mergedArray.push_back({it.first, it.second});
    // }

    // return mergedArray;
  }
};
// @lc code=end
