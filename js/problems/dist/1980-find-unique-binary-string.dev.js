"use strict";

function _toConsumableArray(arr) { return _arrayWithoutHoles(arr) || _iterableToArray(arr) || _nonIterableSpread(); }

function _nonIterableSpread() { throw new TypeError("Invalid attempt to spread non-iterable instance"); }

function _iterableToArray(iter) { if (Symbol.iterator in Object(iter) || Object.prototype.toString.call(iter) === "[object Arguments]") return Array.from(iter); }

function _arrayWithoutHoles(arr) { if (Array.isArray(arr)) { for (var i = 0, arr2 = new Array(arr.length); i < arr.length; i++) { arr2[i] = arr[i]; } return arr2; } }

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
  var n = nums.length;
  var numSet = new Set(nums);
  console.log(" n ", n);
  console.log(" numSet ", numSet); // 生成所有长度为 n 的二进位字符串

  var generateBinaryStrings = function generateBinaryStrings(current) {
    console.log(" current ", current);
    if (current.length === n) return [current];
    return [].concat(_toConsumableArray(generateBinaryStrings(current + "0")), _toConsumableArray(generateBinaryStrings(current + "1")));
  };

  var allBinaryStrings = generateBinaryStrings("");
  console.log(" allBinaryStrings ", allBinaryStrings); // 查找不在 numSet 中的字符串

  var _iteratorNormalCompletion = true;
  var _didIteratorError = false;
  var _iteratorError = undefined;

  try {
    for (var _iterator = allBinaryStrings[Symbol.iterator](), _step; !(_iteratorNormalCompletion = (_step = _iterator.next()).done); _iteratorNormalCompletion = true) {
      var str = _step.value;
      if (!numSet.has(str)) return str;
    }
  } catch (err) {
    _didIteratorError = true;
    _iteratorError = err;
  } finally {
    try {
      if (!_iteratorNormalCompletion && _iterator["return"] != null) {
        _iterator["return"]();
      }
    } finally {
      if (_didIteratorError) {
        throw _iteratorError;
      }
    }
  }

  return "";
} // test 1


var nums1 = ["01", "10"];
console.log(findDifferentBinaryString(nums1)); // output："11"
// // test 2
// let nums2 = ["00", "01"];
// console.log(findDifferentBinaryString(nums2)); // output："11"

console.log("\n\n====================================\n\n"); // // test 3

var nums3 = ["111", "011", "001"];
console.log(findDifferentBinaryString(nums3)); // output："100"