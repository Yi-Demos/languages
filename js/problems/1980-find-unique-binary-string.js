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

// hashmap
function findDifferentBinaryString(nums) {
  const n = nums.length;
  const numSet = new Set(nums);

  console.log(" n ", n);

  console.log(" numSet ", numSet);

  // 生成所有长度为 n 的二进位字符串
  const generateBinaryStrings = (current) => {
    console.log(" current ", current);

    if (current.length === n) return [current];

    return [
      ...generateBinaryStrings(current + "0"),
      ...generateBinaryStrings(current + "1"),
    ];
  };

  const allBinaryStrings = generateBinaryStrings("");

  console.log(" allBinaryStrings ", allBinaryStrings);

  // 查找不在 numSet 中的字符串
  for (const str of allBinaryStrings) {
    if (!numSet.has(str)) return str;
  }

  return "";
}

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
