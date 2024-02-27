"use strict";

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function reduce(nums, fn, init) {
  // method 1:
  for (var i = 0; i < nums.length; i++) {
    init = fn(init, nums[i]);
  }

  return init; // method 2:
  // return nums.reduce(fn, init);
};