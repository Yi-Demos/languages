// const nums = [3,2,3];
const nums = [1];

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function (nums) {
  const border = nums.length / 3;
  let hash = {};
  let ans = [];

  for (let num of nums) {
      hash[num] = hash[num] ? hash[num] + 1: 1;

      if (hash[num] > border) ans.push(num);
  }

  return [...new Set(ans)];
};

majorityElement(nums);