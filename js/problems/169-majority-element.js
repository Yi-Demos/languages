// const nums = [3,2,3];
const nums = [1];

/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
  let score = {};
  let max = 0;

  for (let num of nums) {
      if (score[num]) {
          score[num] = score[num] + 1;
      } else {
          score[num] = 1;
      }

      if (score[num] > max) max = score[num];
  }

  return Object.keys(score).find(key => score[key] === max);
};

majorityElement(nums);