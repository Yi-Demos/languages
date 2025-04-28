/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
 public:
  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    /*
      Approach 1: Brute Force (Time Limit Exceeded)
      time complexity: O(n*k)
      space complexity: O(1)
    */

    // vector<int> res;

    // for (int i = 0; i <= nums.size() - k; i++) {
    //   int maxValue = INT_MIN;

    //   for (int j = i; j < i + k; j++) {
    //     maxValue = max(maxValue, nums[j]);
    //   }

    //   res.push_back(maxValue);
    // }

    // return res;

    /*
      Approach 2: Monotonic Queue
      time complexity: O(n)
      space complexity: O(k)
    */

    deque<int> dq;
    vector<int> res;

    for (int i = 0; i < nums.size(); ++i) {
      // 移除佇列中小於當前元素的索引
      while (!dq.empty() && nums[dq.back()] < nums[i]) {
        dq.pop_back();
      }

      dq.push_back(i);

      // 移除不在視窗範圍內的索引
      if (dq.front() <= i - k) dq.pop_front();

      // 當視窗大小達到 k 時，記錄最大值
      if (i >= k - 1) res.push_back(nums[dq.front()]);
    }

    return res;
  }
};
// @lc code=end