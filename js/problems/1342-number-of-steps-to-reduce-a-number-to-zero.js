/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function (num) {
  if (num === 0) return 0;

  let steps = 0;

  while (num >= 1) {
      num = num % 2 == 0 ? (num / 2) : (num - 1);

      ++steps;
  }

  return steps;
};