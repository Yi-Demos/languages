"use strict";

/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function longestPalindrome(s) {
  var obj = {};
  var sum = 0;

  for (var i = 0; i < s.length; i++) {
    var key = s[i];

    if (obj[key] == 1) {
      sum += 2;
      obj[key] = 0;
    } else {
      obj[key] = 1;
    }
  }

  if (sum < s.length) sum++;
  return sum;
};

console.log(longestPalindrome("aaab"));
