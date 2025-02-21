"use strict";

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function lengthOfLongestSubstring(s) {
  var set = new Set();
  var l = 0;
  var maxLength = 0;

  for (var r = 0; r < s.length; r++) {
    while (set.has(s[r])) {
      set["delete"](s[l]);
      l++;
    }

    set.add(s[r]);
    maxLength = Math.max(maxLength, r - l + 1);
  }

  return maxLength;
}; // lengthOfLongestSubstring("abcabcbb"); // 3
// lengthOfLongestSubstring("bbbbb"); // 1

lengthOfLongestSubstring("pwwkew"); // 3
// lengthOfLongestSubstring(""); // 0
// lengthOfLongestSubstring(" "); // 1
