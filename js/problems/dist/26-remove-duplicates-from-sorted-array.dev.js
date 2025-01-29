"use strict";

// in-place algorithm!

/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function removeDuplicates(nums) {
  var k = 1;

  for (var i = 1; i < nums.length; i++) {
    console.log(i, k, nums[i] !== nums[k - 1]);

    if (nums[i] !== nums[k - 1]) {
      nums[k] = nums[i];
      k++;
    }

    console.log("".concat(nums));
  }

  return k;
}; // 0 0 false
// 0,0,1,1,1,2,2,3,3,4
// 1 0 true
// 0,1,1,1,1,2,2,3,3,4
// 1 1 false
// 0,1,1,1,1,2,2,3,3,4
// 1 1 false
// 0,1,1,1,1,2,2,3,3,4
// 2 1 true
// 0,1,2,1,1,2,2,3,3,4
// 2 2 false
// 0,1,2,1,1,2,2,3,3,4
// 3 2 true
// 0,1,2,3,1,2,2,3,3,4
// 3 3 false
// 0,1,2,3,1,2,2,3,3,4
// 4 3 true
// 0,1,2,3,4,2,2,3,3,4


console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])); //
// 雙指針解法（Two Pointers）
// 由於陣列已經排序，相同的數字會出現在相鄰位置，所以我們可以使用 雙指針 來就地去重。
// ### **🔹 時間 & 空間複雜度分析**
// | 方法 | 時間複雜度 | 空間複雜度 | 說明 |
// |------|-----------|-----------|------|
// | 雙指針 | `O(n)` | `O(1)` | 只遍歷陣列一次，原地修改，不使用額外空間 |
// ---
// ### **🔹 乾淨版陣列示意圖**
// 以 `nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]` 為例：
// | `fast` | `slow` | nums[fast] | nums[slow] | 狀態 |
// |--------|--------|------------|------------|------|
// | 1 | 0 | 0 | 0 | 不變 |
// | 2 | 0 | 1 | 0 → 1 | `slow++，更新 nums[slow] = nums[fast]` |
// | 3 | 1 | 1 | 1 | 不變 |
// | 4 | 1 | 1 | 1 | 不變 |
// | 5 | 1 | 2 | 1 → 2 | `slow++，更新 nums[slow] = nums[fast]` |
// | 6 | 2 | 2 | 2 | 不變 |
// | 7 | 2 | 3 | 2 → 3 | `slow++，更新 nums[slow] = nums[fast]` |
// | 8 | 3 | 3 | 3 | 不變 |
// | 9 | 3 | 4 | 3 → 4 | `slow++，更新 nums[slow] = nums[fast]` |
// 👉 最終結果：`[0, 1, 2, 3, 4, _, _, _, _, _]`，長度 `5`。
// ---
// ### **🔹 變體問題**
// 1. **如果要求每個元素最多出現兩次？**
//    - 只需檢查 `nums[fast]` 是否等於 `nums[slow-1]`
//    - 題目：[Remove Duplicates from Sorted Array II (80)](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)
// 2. **如果是未排序陣列？**
//    - 需要使用 **`set` 或 `unordered_map`** 來記錄出現過的數字。
// ---
// ### **🔹 總結**
// - **使用雙指針（Two Pointers）解法**，`slow` 負責維護去重後的陣列，`fast` 負責掃描。
// - **時間複雜度 O(n)**，**空間複雜度 O(1)**（就地修改）。
// - **核心操作：當 `nums[fast] ≠ nums[slow]`，將 `nums[fast]` 移動到 `slow + 1` 位置**。

/**
 * @param {number[]} nums
 * @return {number}
 */

var removeDuplicates = function removeDuplicates(nums) {
  if (nums.length === 0) return 0;
  var s = 0;
  var f = 1;

  for (var _f = 1; _f < nums.length; _f++) {
    if (nums[s] !== nums[_f]) {
      s++;
      nums[s] = nums[_f];
    }
  }

  return s + 1;
};