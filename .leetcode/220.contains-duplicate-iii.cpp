/*
 * @lc app=leetcode id=220 lang=cpp
 *
 * [220] Contains Duplicate III
 */

// @lc code=start
class Solution {
 public:
  bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff,
                                     int valueDiff) {
    /*
      Approach 1: Ordered Set
      Time complexity: O(nlog(min(n, k)))
      Space complexity: O(min(n, k))
    */

    // set<long> window;

    // for (int i = 0; i < nums.size(); ++i) {
    //   if (i > indexDiff) window.erase(nums[i - indexDiff - 1]);

    //   // auto it = window.lower_bound((long)nums[i] - valueDiff);

    //   if (it != window.end() && *it <= (long)nums[i] + valueDiff) return
    //   true;

    //   window.insert(nums[i]);
    // }

    unordered_set<int> window;

    for (int i = 0; i < nums.size(); i++) {
      if (window.find(nums[i]) != window.end()) {
        for (int s : window) {
          cout << s << " " << nums[i] << " " << abs((long)s - (long)nums[i])
               << endl;
          if (abs((long)s - (long)nums[i]) <= valueDiff) return true;
        }
      }

      window.insert(nums[i]);

      if (window.size() > indexDiff) window.erase(nums[i - indexDiff]);
    }

    return false;
  }
};
// @lc code=end
