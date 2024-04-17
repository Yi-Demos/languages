"use strict";

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function maxSubArray(nums) {
  var max = 0;
  var sum = 0;

  for (var i = 0; i < nums.length; i++) {
    sum = 0;

    for (var j = i; j < nums.length; j++) {
      sum += nums[j];
      if (sum > max) max = sum;
    }
  }

  return max;
};

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])); // 6

console.log(maxSubArray([5, 4, -1, 7, 8])); // 23