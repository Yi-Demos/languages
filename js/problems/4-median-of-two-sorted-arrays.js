// trick: get even or odd values

var findMedianSortedArrays = function (nums1, nums2) {
  let arr = nums1.concat(nums2);

  arr.sort((a, b) => a - b);

  let half = Math.floor(arr.length / 2);

  if (arr.length % 2) return arr[half];

  return (arr[half - 1] + arr[half]) / 2;
};