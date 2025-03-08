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
    // time complexity: O(n)
    // space complexity: O(1)
    int largest = 0;

    for (int i = 0; i < heights.size(); i++) {
      int height = heights[i];
      int width = getWidth(heights, i, height);
      int current = height * width;

      cout << "height" << height << "width" << width << "\n";

      largest = max(current, largest);
    }

    return largest;
  }
};
// @lc code=end