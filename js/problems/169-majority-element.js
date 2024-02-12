// const nums = [3,2,3];
const nums = [1];

/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
  let hashMap = {};
  let maxKey;
  let maxValue = 0;

  for (let num of nums) {
      if (hashMap[num]) {
          hashMap[num] = hashMap[num] + 1;
      } else {
          hashMap[num] = 1;
      }

      if (hashMap[num] > maxValue) {
        maxKey = num;
        maxValue = hashMap[num];
      }
  }

  // NOTE: store key in loop then no need to use Object.keys() find it
  // return Object.keys(hashMap).find(key => hashMap[key] === max);

  return maxKey;
};

majorityElement(nums);