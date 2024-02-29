"use strict";

/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function join(arr1, arr2) {
  var map = {};

  for (var i = 0; i < arr1.length; ++i) {
    map[arr1[i].id] = arr1[i];
  }

  for (var _i = 0; _i < arr2.length; ++_i) {
    map[arr2[_i].id] = arr2[_i];
  } // for (let i = 0; i < arr1.length; ++i) {
  //     const index = ans.findIndex(a => a.id === arr2[i].id);
  // console.log(index);
  //     if (index > -1) {
  //         ans[index] = arr2[i];
  //     } else {
  //         ans.push(arr2[i]);
  //     }
  // }

  console.log(Object.values(map));
  return Object.values(map); // return ans;
};

var arr1 = [
  {
    id: 1,
    x: 1,
  },
  {
    id: 2,
    x: 9,
  },
];
var arr2 = [
  {
    id: 3,
    x: 5,
  },
];
join(arr1, arr2);
