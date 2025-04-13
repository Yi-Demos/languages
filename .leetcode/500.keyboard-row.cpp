/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
 public:
  vector<string> findWords(vector<string>& words) {
    /*
      Approach 1: Iterative
      time complexity: O(n*m)
      space complexity: O(1)
    */

    vector<string> result;
    unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't',
                                'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    for (string& word : words) {
      string lowerWord = word;
      unordered_set<char> row;

      if (row1.count(tolower(lowerWord[0]))) row = row1;
      if (row2.count(tolower(lowerWord[0]))) row = row2;
      if (row3.count(tolower(lowerWord[0]))) row = row3;

      bool isValid = true;

      for (char w : lowerWord) {
        if (!row.count(tolower(w))) {
          isValid = false;
          break;
        }
      }

      if (isValid) result.push_back(lowerWord);
    }

    return result;
  }
};
// @lc code=end