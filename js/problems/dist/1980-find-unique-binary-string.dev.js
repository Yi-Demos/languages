"use strict";

function _toConsumableArray(arr) {
  return (
    _arrayWithoutHoles(arr) || _iterableToArray(arr) || _nonIterableSpread()
  );
}

function _nonIterableSpread() {
  throw new TypeError("Invalid attempt to spread non-iterable instance");
}

function _iterableToArray(iter) {
  if (
    Symbol.iterator in Object(iter) ||
    Object.prototype.toString.call(iter) === "[object Arguments]"
  )
    return Array.from(iter);
}

function _arrayWithoutHoles(arr) {
  if (Array.isArray(arr)) {
    for (var i = 0, arr2 = new Array(arr.length); i < arr.length; i++) {
      arr2[i] = arr[i];
    }
    return arr2;
  }
}

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
var findDifferentBinaryString = function findDifferentBinaryString(nums) {
  var numsSet = new Set(nums);

  var genAllNums = function genAllNums(current) {
    if (current.length === nums[0].length) return [current];
    return [].concat(
      _toConsumableArray(genAllNums(current + "0")),
      _toConsumableArray(genAllNums(current + "1")),
    );
  };

  var allNums = genAllNums("");
  var _iteratorNormalCompletion = true;
  var _didIteratorError = false;
  var _iteratorError = undefined;

  try {
    for (
      var _iterator = allNums[Symbol.iterator](), _step;
      !(_iteratorNormalCompletion = (_step = _iterator.next()).done);
      _iteratorNormalCompletion = true
    ) {
      var num = _step.value;
      if (!numsSet.has(num)) return num;
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
}; // test 1

var nums1 = ["01", "10"];
console.log(findDifferentBinaryString(nums1)); // output："11"
// // test 2
// let nums2 = ["00", "01"];
// console.log(findDifferentBinaryString(nums2)); // output："11"

console.log("\n\n====================================\n\n"); // // test 3

var nums3 = ["111", "011", "001"];
console.log(findDifferentBinaryString(nums3)); // output："100"
