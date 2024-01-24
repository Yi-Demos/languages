#include <iostream>
#include <vector>

using namespace std;

// vec.push_back() - 新增元素至 vector 的尾端，必要時會進行記憶體配置。
// vec.pop_back() - 刪除 vector 最尾端的元素。
// vec.insert() - 插入一個或多個元素至 vector 內的任意位置。 v.insert(v.begin(),
// 6); vec.erase() - 刪除 vector 中一個或多個元素。 vec.clear() - 清空所有元素。

int main() {
  vector<int> v = {0, 1, 2, 3};

  v.push_back(1);

  for (int i = 0; i < v.size(); i++) {
    printf("%d", v[i]);
  }

  return 0;
}