/**
 * @param {string[]} nums
 * @return {string}
 */
var findDifferentBinaryString = function(nums) {
  let result = '';

  for (let i = 0; i < nums.length; i++) {
    result += nums[i][i] === '0' ? '1' : '0';

    console.log(result);
  }

  return result;
};

// test 1
let nums1 = ["01", "10"];
console.log(findDifferentBinaryString(nums1)); // output："11"

// test 2
let nums2 = ["00", "01"];
console.log(findDifferentBinaryString(nums2)); // output："11"

// test 3
let nums3 = ["111", "011", "001"];
console.log(findDifferentBinaryString(nums3)); // output："100"
