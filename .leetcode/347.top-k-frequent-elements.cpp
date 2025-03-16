/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;

    for (int num : nums) {
      frequencyMap[num]++;
    }

    // trick: Use a min heap to store the top k frequent elements
    auto compare = [&frequencyMap](int left, int right) {
      return frequencyMap[left] > frequencyMap[right];
    };
    priority_queue<int, vector<int>, decltype(compare)> minHeap(compare);

    // iterate through all numbers of the frequency map
    for (const auto& entry : frequencyMap) {
      minHeap.push(entry.first);

      if (minHeap.size() > k) minHeap.pop();
    }

    // get the top k frequent numbers
    vector<int> result;

    while (!minHeap.empty()) {
      result.push_back(minHeap.top());
      minHeap.pop();
    }
    return result;
  }
};
// @lc code=end
