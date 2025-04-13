/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
 public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    int count = 0;

    for (int i = 0; i < flowerbed.size(); i++) {
      bool isEmptyPos = flowerbed[i] == 0;
      bool isLeftEmpty = (i == 0) || flowerbed[i - 1] == 0;
      bool isRightEmpty = (i == flowerbed.size() - 1) || flowerbed[i + 1] == 0;

      if (isEmptyPos && isLeftEmpty && isRightEmpty) {
        count++;

        flowerbed[i] = 1;  // 種植，因此下一個就不能連續
      }
    }

    return count >= n;
  }
};
// @lc code=end
