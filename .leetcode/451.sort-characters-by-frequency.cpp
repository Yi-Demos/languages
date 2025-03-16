/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
 public:
  string frequencySort(string s) {
    /*
      Approach 1: Hash Table
      time complexity: O(nlogn)
      space complexity: O(n)
    */

    unordered_map<char, int> freqMap;
    for (char c : s) {
      freqMap[c]++;
    }

    multimap<int, char> sortedFreqMap;

    for (const auto &p : freqMap) {
      sortedFreqMap.insert({p.second, p.first});
    }

    string res;

    for (auto [f, c] : sortedFreqMap) {
      res.append(f, c);
    }

    reverse(res.begin(), res.end());

    return res;
  }
};
// @lc code=end
