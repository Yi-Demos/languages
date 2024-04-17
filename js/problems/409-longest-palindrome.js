/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function (s) {
  const obj = {};
  let sum = 0;

  for (let i = 0; i < s.length; i++) {
    const key = s[i];

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
