#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> nums = {1, 2, 3};
  std::sort(nums.begin(), nums.end());  // 確保初始為升序

  do {
    for (int num : nums) std::cout << num << ' ';
    std::cout << '\n';
  } while (std::next_permutation(nums.begin(), nums.end()));

  return 0;
}

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1