/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  // Method 1:
  // let cur = 0;

  // for (let i = 0; i < nums.length; i++) {
  //   if (nums[i] !== 0) {
  //     nums[cur] = nums[i];
  //     cur++;
  //   }
  // }

  // for (let i = cur; i < nums.length; i++) {
  //   nums[i] = 0;
  // }

  // Method 2:
  let low = 0;
  let high = 1;

  for (let i = 0; i < nums.length - 1; i++) {
    if (nums[low] !== 0) {
      nums[low] = nums[i];
      low++;
    } else {
      if (nums[high] !== 0) {
        [nums[low], nums[high]] = [nums[high], nums[low]];

        low++;
      }

      high++;
    }
  }

  console.log(nums);
};

console.log(moveZeroes([0, 1, 0, 3, 12])); // [1,3,12,0,0]