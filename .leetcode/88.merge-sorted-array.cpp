/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    // int j = 0;

    // for (int i = m; i < nums1.size(); i++) {
    //   nums1[i] = nums2[j];
    //   j++;
    // }

    // return sort(nums1.begin(), nums1.end());

    /*
      Approach 2:  Three Pointers (Start From the End)
      time complexity: O(m + n)
      space complexity: O(1)
    */

    int p1 = m - 1;     // nums1 last element
    int p2 = n - 1;     // nums2 last element
    int p = m + n - 1;  // nums1 last index

    while (p1 >= 0 && p2 >= 0) {
      if (nums1[p1] > nums2[p2]) {
        nums1[p] = nums1[p1];
        p1--;
      } else {
        nums1[p] = nums2[p2];
        p2--;
      }
      p--;
    }

    // add rest elements from nums2
    while (p2 >= 0) {
      nums1[p] = nums2[p2];
      p--;
      p2--;
    }
  }
};
// @lc code=end
