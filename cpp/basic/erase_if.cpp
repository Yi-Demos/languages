#include <algorithm>  // erase_if
#include <iostream>
#include <map>

int main() {
  /*
    remove_if to vector
  */

  // 初始化 vector，包含一些整數
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // 使用 remove_if 和 erase 移除所有奇數元素
  vec.erase(
      remove_if(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; }),
      vec.end());

  // 輸出結果
  for (int x : vec) {
    cout << x << " ";
  }

  /*
    remove_if to map
  */

  // 初始化 map，包含一些鍵值對
  map<int, char> data = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};

  // 使用 erase_if 移除鍵為奇數的元素
  erase_if(data, [](const auto& item) { return item.first % 2 != 0; });

  // 輸出結果
  for (const auto& [key, value] : data) {
    cout << key << ": " << value << '\n';
  }

  return 0;
}
