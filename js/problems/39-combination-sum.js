/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */

var combinationSum = function (candidates, target) {
  let result = [];
  candidates.sort((a, b) => (a > b ? 1 : -1));

  const dfs = (start, candidates, sum, curArr) => {
    if (sum === target) result.push(curArr.concat());

    for (let i = start; i < candidates.length; i++) {
      if (sum + candidates[i] <= target) {
        curArr.push(candidates[i]);
        dfs(i, candidates, sum + candidates[i], curArr);
        curArr.pop();
      }
    }
  };

  dfs(0, candidates, 0, []);

  return result;
};

combinationSum()

/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */

var combinationSum2 = function (candidates, target) {
  let result = [];
  candidates = candidates.sort();

  const def = (index = 0, currentArray = [], sum = 0) => {
    if (sum === target) result.push(currentArray);

    for (let i = index; i < candidates.length; i++) {
      if (sum + candidates[i] <= target)
        def(i, currentArray.concat(candidates[i]), sum + candidates[i]);
    }
  };

  def();

  return result;
};

combinationSum2()