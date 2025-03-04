/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    // Approach 1: simple loop
    // time complexity: O(n^2)
    // space complexity: O(1)
    // int max = 0;

    // for (int i = 0; i < prices.size(); i++) {
    //   for (int j = i + 1; j < prices.size(); j++) {
    //     int sum = prices[j] - prices[i];

    //     if (sum > max) {
    //       cout << prices[i] << prices[j] << "\n";
    //       max = sum;
    //     }
    //   }
    // }

    // return max;

    // Approach 2: greedy
    // time complexity: O(n)
    // space complexity: O(1)
    // int maxProfit = 0;

    // for (int i = 1; i < prices.size(); i++) {
    //   if (prices[i] > prices[i - 1]) maxProfit += prices[i] - prices[i - 1];
    // }

    // return maxProfit;

    // Approach 3:
    // time complexity:
    // space complexity:

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
      if (price < minPrice) {
        minPrice = price;
      } else if (price - minPrice > maxProfit) {
        maxProfit = price - minPrice;
      }
    }

    return maxProfit;
  }
};
// @lc code=end
