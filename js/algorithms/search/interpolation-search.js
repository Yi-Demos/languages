// https://ithelp.ithome.com.tw/articles/10281248
let data = [10, 20, 30, 40, 50, 60, 70, 80, 90];
let target = 40;

function interpolationSearch(arr, target) {
  let start = 0;
  let end = arr.length - 1;
  let mid;

  while (end >= start) {
    mid = Math.floor(
      ((target - arr[start]) * (end - start)) / (arr[end] - arr[start]) + start
    );

    if (arr[mid] === target) {
      return "有搜尋結果: 在第" + (mid + 1) + "項";
    } else {
      if (target > arr[mid]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }

  return "無搜尋結果";
}

console.log(interpolationSearch(data, target)); //"有搜尋結果: 在第4項"
