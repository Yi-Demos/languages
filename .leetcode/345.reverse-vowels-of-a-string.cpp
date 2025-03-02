/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

//  NOTE: The problem is swapping vowels with front and back instead of two front elements!

// @lc code=start
class Solution {
 public:
  string reverseVowels(string s) {
    // Approach 1: hashmap char counter
    // time complexity: O(n)
    // space complexity: O(1)
    int l = 0;
    int r = s.size() - 1;
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                  'A', 'E', 'I', 'O', 'U'};

    while (l < r) {
      while (l < r && vowels.find(s[l]) == vowels.end()) {
        ++l;
      }

      while (l < r && vowels.find(s[r]) == vowels.end()) {
        --r;
      }

      if (l < r) {
        swap(s[l], s[r]);
        ++l;
        --r;
      }
    }

    return s;
  }
};
// @lc code=end
