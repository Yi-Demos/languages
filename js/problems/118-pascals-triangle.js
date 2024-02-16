/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
  const dp = [[1]];

  for (let i = 0; i < numRows - 1; i++) {
      let prevRow = dp[i];
      let cur = [1];

      for (let j = 0; j < prevRow.length - 1; j++) {
          cur[j + 1] = prevRow[j] + prevRow[j + 1];
      }

      cur.push(1);

      dp.push(cur);
  }

  return dp;
};

console.log(generate(3));