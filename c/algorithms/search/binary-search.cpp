#include <iostream>
#include <vector>

using namespace std;

// https://medium.com/appworks-school/binary-search-%E9%82%A3%E4%BA%9B%E8%97%8F%E5%9C%A8%E7%B4%B0%E7%AF%80%E8%A3%A1%E7%9A%84%E9%AD%94%E9%AC%BC-%E4%B8%80-%E5%9F%BA%E7%A4%8E%E4%BB%8B%E7%B4%B9-dd2cd804aee1
// 定義：在排序好的數列裡，找某 target，找到就回傳其 index，否則回傳 -1
int binary_search(vector<int> &nums, int target) {
  int left = 0;
  int right = nums.size() - 1;  // array 長度 -1

  while (left <= right) {
    int mid = (left + right) / 2;  // 用 int 的性質做無條件捨去

    if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      return mid;  // 剛好找到 target
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {1, 3, 4, 7, 8, 10};
  cout << binary_search(nums, 0) << endl;   // -1
  cout << binary_search(nums, 1) << endl;   // 0
  cout << binary_search(nums, 3) << endl;   // 1
  cout << binary_search(nums, 4) << endl;   // 2
  cout << binary_search(nums, 5) << endl;   // -1
  cout << binary_search(nums, 7) << endl;   // 3
  cout << binary_search(nums, 8) << endl;   // 4
  cout << binary_search(nums, 10) << endl;  // 5
  cout << binary_search(nums, 11) << endl;  // -1
}