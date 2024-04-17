"use strict";

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function maxSubArray(nums) {
  // Recursive Approach
  // let max = 0;
  // let sum = 0;
  // for (let i = 0; i < nums.length; i++) {
  //   sum = 0
  //   for (let j = i; j < nums.length; j++) {
  //     sum += nums[j];
  //     if (sum > max) max = sum;
  //   }
  // }
  // return max;
  // Dynamic Programming Approach
  var max = nums[0];
  if (nums.length === 1) return nums[0];

  for (var i = 1; i < nums.length; i++) {
    nums[i] = Math.max(nums[i], nums[i] + nums[i - 1]);
    if (nums[i] > max) max = nums[i];
  }

  return max;
};

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])); // 6

console.log(maxSubArray([5, 4, -1, 7, 8])); // 23