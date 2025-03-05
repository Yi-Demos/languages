/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
 public:
  bool isPalindrome(int x) {
    // Approach 1: iterative
    // time complexity: O(n)
    // space complexity: O(n)
    // string s = to_string(x);
    // string reversedString = s;

    // reverse(reversedString.begin(), reversedString.end());

    // return s == reversedString;

    // TODO: WTF?
    // Approach 2: 不將整數轉換為字串，而是反轉整數的一半，然後與另一半比較。​

    // 實現步驟：
    // 若整數為負數或（不為 0 且以 0 結尾），則不是回文數。​
    // 初始化變數 revertedNumber 為 0。​ 當原始數字大於 revertedNumber
    // 時：​ 將 revertedNumber 更新為 revertedNumber * 10 + x % 10。​
    // 將原始數字 x 更新為 x / 10。​
    // 當迴圈結束時，若原始數字等於 revertedNumber 或原始數字等於 revertedNumber
    // / 10，則是回文數。​

    // 特殊情況：
    // 如上所述，當 x < 0 時，x 不是回文數。
    // 同樣地，如果數字的最後一位是 0，為了使該數字為回文，
    // 則其第一位數字也應該是 0
    // 只有 0 滿足這一屬性
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int revertedNumber = 0;
    while (x > revertedNumber) {
      revertedNumber = revertedNumber * 10 + x % 10;
      x /= 10;
    }

    // 當數字長度為奇數時，我們可以通過 revertedNumber/10 去除處於中位的數字。
    // 例如，當輸入為 12321 時，在 while 迴圈的末尾我們可以得到 x =
    // 12，revertedNumber = 123，
    // 由於處於中位的數字不影響回文（它總是與自己相等），所以我們可以簡單地將其去除。
    return x == revertedNumber || x == revertedNumber / 10;
  }
};
// @lc code=end
