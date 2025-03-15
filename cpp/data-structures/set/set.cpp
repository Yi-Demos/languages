#include <iostream>
#include <set>

using namespace std;

// 自訂比較函數，依降序排列
struct DescendingOrder {
  bool operator()(const int& lhs, const int& rhs) const {
      return lhs > rhs;
  }
};

int main() {
  // 创建一个空的 set
  set<int> mySet;
  set<int> ascendingSet = {5, 3, 8, 1, 4}; // cout: 1 3 4 5 8
  set<int, DescendingOrder> descendingSet = {5, 3, 8, 1, 4}; // cout: 8 5 4 3 1

  // 插入元素
  mySet.insert(3);
  mySet.insert(1);
  mySet.insert(4);
  mySet.insert(1);  // 重复元素，不会被插入

  // 遍历并输出 set 中的元素
  cout << "set 中的元素：";
  for (const auto& elem : mySet) {
    cout << elem << " ";
  }
  cout << endl;

  // 查找元素
  auto search = mySet.find(2);
  if (search != mySet.end()) {
    cout << "找到元素：2" << endl;
  } else {
    cout << "未找到元素：2" << endl;
  }

  // 删除元素
  mySet.erase(3);
  cout << "删除元素 3 后，set 中的元素：";
  for (const auto& elem : mySet) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}

void find() {
  unordered_set<int> example = {1, 2, 3, 4};

  // contains() (C++20 support)
  if (example.contains(2)) {
    cout << "Found\n";
  } else {
    cout << "Not found\n";
  }

  // find() (C++11 support)
  if (example.find(2) != example.end()) {
    cout << "Found\n";
  } else {
    cout << "Not found\n";
  }

  // count() (C++11 support)
  if (example.count(2) > 0) {
    cout << "Found\n";
  } else {
    cout << "Not found\n";
  }
}