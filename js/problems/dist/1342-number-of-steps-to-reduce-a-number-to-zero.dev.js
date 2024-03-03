"use strict";

/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function numberOfSteps(num) {
  if (num === 0) return 0;
  var steps = 0;

  while (num >= 1) {
    num = num % 2 == 0 ? num / 2 : num - 1;
    ++steps;
  }

  return steps;
};
