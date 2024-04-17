"use strict";

/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function mySqrt(x) {
  // Method 1: start from min
  // let i = 1;
  // while (i * i <= x) {
  //     i++;
  // }
  // return i - 1;
  // Method 2: native fn
  // return Math.floor(Math.sqrt(x));
  // Method 3: binary search
  var l = 1;
  var r = x;
  var mid = (1 + x) / 2;

  while (l < r) {
    mid = Math.floor(mid);
    squared = mid * mid;

    if ((squared === x) | (mid === l)) {
      return mid;
    } else if (squared > x) {
      r = mid;
    } else {
      l = mid;
    }
  }
};
