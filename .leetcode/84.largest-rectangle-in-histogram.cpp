/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
 public:
  int getWidth(vector<int>& heights, int index, int value) {
    int l = index;
    int r = index;
    int width = 0;

    while (l > 0 && r < heights.size()) {
      if (heights[l] >= value) l--;
      if (heights[r] >= value) r++;

      width = r - l;
    }

    return width;
  }

  int largestRectangleArea(vector<int>& heights) {
    // Approach 1: iterative (Time Limit Exceeded)
    // time complexity: O(n^2)
    // space complexity: O(n)
    // int largest = 0;

    // for (int i = 0; i < heights.size(); i++) {
    //   int height = heights[i];
    //   int width = getWidth(heights, i, height);
    //   int current = height * width;

    //   cout << "height" << height << "width" << width << "\n";

    //   largest = max(current, largest);
    // }

    // return largest;

    // Approach 2: Monotonic Stack
    // time complexity: O(n)
    // space complexity: O(n)
    // https://www.youtube.com/watch?v=XwUb7x6YDeA&ab_channel=LeetCode%E5%8A%9B%E6%89%A3
    stack<int> indices;
    int max_area = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
      int h = (i == n ? 0 : heights[i]);

      while (!indices.empty() && h < heights[indices.top()]) {
        int height = heights[indices.top()];
        indices.pop();
        int width = indices.empty() ? i : i - indices.top() - 1;
        max_area = max(max_area, height * width);
      }

      indices.push(i);
    }

    return max_area;
  }
};
// @lc code=end