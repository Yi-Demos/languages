"use strict";

/**
 * @param {string[]} nums
 * @return {string}
 */
var findDifferentBinaryString = function findDifferentBinaryString(nums) {
  var result = '';

  for (var i = 0; i < nums.length; i++) {
    result += nums[i][i] === '0' ? '1' : '0';
    console.log(result);
  }

  return result;
}; // test 1


var nums1 = ["01", "10"];
console.log(findDifferentBinaryString(nums1)); // output："11"
// test 2

var nums2 = ["00", "01"];
console.log(findDifferentBinaryString(nums2)); // output："11"
// test 3

var nums3 = ["111", "011", "001"];
console.log(findDifferentBinaryString(nums3)); // output："100"