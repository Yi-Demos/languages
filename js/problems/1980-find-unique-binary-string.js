/**
 * @param {string[]} nums
 * @return {string}
 */

// cantor diagonal algorithm
// var findDifferentBinaryString = function(nums) {
//   let result = '';

//   for (let i = 0; i < nums.length; i++) {
//     result += nums[i][i] === '0' ? '1' : '0';

//     console.log(result);
//   }

//   return result;
// };

// hashmap algorithm
var findDifferentBinaryString = function (nums) {
  const numsSet = new Set(nums);

  const genAllNums = (current) => {
    if (current.length === nums[0].length) return [current];

    return [...genAllNums(current + "0"), ...genAllNums(current + "1")];
  };

  const allNums = genAllNums("");

  for (const num of allNums) {
    if (!numsSet.has(num)) return num;
  }

  return "";
};

// test 1
let nums1 = ["01", "10"];
console.log(findDifferentBinaryString(nums1)); // output："11"

// // test 2
// let nums2 = ["00", "01"];
// console.log(findDifferentBinaryString(nums2)); // output："11"

console.log("\n\n====================================\n\n");
// // test 3
let nums3 = ["111", "011", "001"];
console.log(findDifferentBinaryString(nums3)); // output："100"
