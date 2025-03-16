#include <iostream>
#include <vector>

using namespace std;

int main() {
  // [136] Single Number
  // [4, 1, 2, 1, 2] => 4
  // 利用成對元素的抵消，直接得到只出現一次的元素
  for (int num : nums) {
    single ^= num;
  }

  // [268] Missing Number
  // [3, 0, 1] => 2
  // 利用成對元素的抵消，直接得到缺失的元素
  for (int i = 0; i < nums.size(); i++) {
    missing ^= i ^ nums[i];
  }

  return 0;
}