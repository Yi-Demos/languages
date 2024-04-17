/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let max = 0;
  let sum = 0;

  for (let i = 0; i < nums.length; i++) {
    sum = 0

    for (let j = i; j < nums.length; j++) {
      sum += nums[j];

      if (sum > max) max = sum;
    }
  }

  return max;
};

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])); // 6
console.log(maxSubArray([5, 4, -1, 7, 8])); // 23