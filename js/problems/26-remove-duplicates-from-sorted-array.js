// in-place algorithm!

/**
 * @param {number[]} nums
 * @return {number}
 */

var removeDuplicates = function (nums) {
  let k = 1;

  for (let i = 1; i < nums.length; i++) {
    console.log(i, k, nums[i] !== nums[k - 1]);

    if (nums[i] !== nums[k - 1]) {
      nums[k] = nums[i];

      k++;
    }

    console.log(`${nums}`);
  }

  return k;
};

// 0 0 false
// 0,0,1,1,1,2,2,3,3,4
// 1 0 true
// 0,1,1,1,1,2,2,3,3,4
// 1 1 false
// 0,1,1,1,1,2,2,3,3,4
// 1 1 false
// 0,1,1,1,1,2,2,3,3,4
// 2 1 true
// 0,1,2,1,1,2,2,3,3,4
// 2 2 false
// 0,1,2,1,1,2,2,3,3,4
// 3 2 true
// 0,1,2,3,1,2,2,3,3,4
// 3 3 false
// 0,1,2,3,1,2,2,3,3,4
// 4 3 true
// 0,1,2,3,4,2,2,3,3,4

console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));
