/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
 public:
  int findKthLargest(vector<int>& nums, int k) {
    // Solution 1: Using priority queue
    // Time complexity: O(nlogk)
    // Space complexity: O(k)

    // priority_queue<int, vector<int>, greater<int>> minHeap;

    // for (int num : nums) {
    //   minHeap.push(num);

    //   if (minHeap.size() > k) minHeap.pop();

    //   for (int num : minHeap) {
    //     cout << num << " ";
    //   }

    //   cout << minHeap.top() << endl;
    // }

    // return minHeap.top();

    priority_queue<int, vector<int>> maxHeap(nums.begin(), nums.end());

    for (int i = 0; i < k - 1; i++) {
      maxHeap.pop();
    }

    return maxHeap.top();
  }
};
// @lc code=end
