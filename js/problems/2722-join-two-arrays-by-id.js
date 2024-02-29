/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function (arr1, arr2) {
  let map = {};

  for (let i = 0; i < arr1.length; ++i) {
    map[arr1[i].id] = arr1[i];
  }

  for (let i = 0; i < arr2.length; ++i) {
    map[arr2[i].id] = arr2[i];
  }

  // for (let i = 0; i < arr1.length; ++i) {
  //     const index = ans.findIndex(a => a.id === arr2[i].id);
  // console.log(index);
  //     if (index > -1) {
  //         ans[index] = arr2[i];
  //     } else {
  //         ans.push(arr2[i]);
  //     }
  // }
  console.log(Object.values(map));
  return Object.values(map);

  // return ans;
};

const arr1 = [
  { id: 1, x: 1 },
  { id: 2, x: 9 },
];

const arr2 = [{ id: 3, x: 5 }];

join(arr1, arr2);
