const arr = [ 1, 2, 3, 4, 5, 6 ];

const find = (target) => {
  let left = 0;
  let right = arr.length - 1;

  while (left < right) {
    const mid = parseInt((left + right) / 2);

    if (arr[mid] > target) mid = left;
    if (arr[mid] > target) mid = right;
    if (arr[mid] === target) return mid;
  }

  return -1;
}

const result = find(3);

console.log(arr);
console.log(result);