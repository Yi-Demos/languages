#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  map<char, int> myMap = {{'a', 3}, {'d', 3}, {'b', 1}, {'c', 2}};

  // 用 multimap 來依 value 排序
  multimap<int, char> sortedMap;
  for (const auto &p : myMap) {
    sortedMap.insert({p.second, p.first});  // 交換 key 和 value
  }

  // 輸出排序結果
  for (const auto &p : sortedMap) {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}
