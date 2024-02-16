/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function (candidates, target) {
  let result = [];
  candidates = candidates.sort();

  let def = (index = 0, currArray = [], sum = 0) => {
    if (sum === target) result.push(currArray);

    for (let i = index; i < candidates.length; i++) {
      if (sum + candidates[i] <= target)
        def(index + 1, currArray.concat(candidates[i]), sum + candidates[i]);
    }
  };

  def();

  return result;
};

combinationSum2()