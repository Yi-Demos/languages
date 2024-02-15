/**
 * @param {number} n
 * @return {number}
 */
const climbStairs = function (n) {
  // Method 1

  // let arr = [1, 2];

  // for (let i = 2; i < n; i++) {
  //   arr[i] = arr[i-1] + arr[i-2];
  // }

  // return arr[n-1];

  // if (n < 2) return 1;

  // Method 2
  let prev = 0;
  let cur = 1;
  let sum = 0;

  for (let i = 0; i < n; i++) {
    sum = prev + cur;
    prev = cur;
    cur = sum;
  }

  return cur;
};

const ans = climbStairs(3);

console.log(ans); // 3
