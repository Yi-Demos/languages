function getMoneySpent(keyboards, drives, b) {
  let result = -1;

  keyboards.sort();
  drives.sort();

  for (let i = 0; i < keyboards.length; i++) {
    for (let j = 0; j < drives.length; j++) {
      let sum = keyboards[i] + drives[j];

      if (b > sum && sum > result) {
        result = sum;
      }
    }
  }

  console.log(result);

  return result;
}

getMoneySpent([3, 1], [5, 2, 8], 10); // 9
getMoneySpent([5], [4], 5); // -1
