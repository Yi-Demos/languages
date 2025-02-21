/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let set = new Set();
  let l = 0;
  let maxLength = 0;

  for (let r = 0; r < s.length; r++) {
    while (set.has(s[r])) {
      set.delete(s[l]);
      l++;
    }

    set.add(s[r]);
    maxLength = Math.max(maxLength, r - l + 1);
  }

  return maxLength;
};

// lengthOfLongestSubstring("abcabcbb"); // 3
// lengthOfLongestSubstring("bbbbb"); // 1
lengthOfLongestSubstring("pwwkew"); // 3
// lengthOfLongestSubstring(""); // 0
// lengthOfLongestSubstring(" "); // 1
