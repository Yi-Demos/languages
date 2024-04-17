"use strict";

/**
 * @param {string} s
 * @return {number}
 */
// TRICK: 4 is IV
//        so we need to check if s[i] < s[i+1] then it's should be minus
// IV = 4
// CM = 900
var romanToInt = function romanToInt(s) {
  var romanNum = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };
  var sum = 0;

  for (var i = 0; i < strAry.length; i++) {
    if (romanNum[strAry[i]] < romanNum[strAry[i + 1]]) {
      sum -= Number(romanNum[strAry[i]]);
    } else {
      sum += Number(romanNum[strAry[i]]);
    }
  }

  return sum;
};

console.log(romanToInt("LVIII")); // 58

console.log(romanToInt("MCMXCIV")); // 1994
