/*
 * @lc app=leetcode id=703 lang=cpp
 *
 * [703] Kth Largest Element in a Stream
 */

// @lc code=start
class KthLargest {
 private:
  int range;
  priority_queue<int, vector<int>, greater<int>> minHeap;

 public:
  KthLargest(int k, vector<int>& nums) {
    range = k;

    for (int num : nums) {
      add(num);
    }
  }

  int add(int val) {
    minHeap.push(val);

    if (minHeap.size() > range) minHeap.pop();

    return minHeap.top();
  }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end