#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  // trick: unordered_map not support init with values before c++11
  // so: g++ -std=c++11
  unordered_map<int, string> umap = {{1, "one"}, {2, "two"}, {3, "three"}};

  int key = 2;
  auto it = umap.find(key);

  if (it != umap.end()) {
    cout << "Key " << key << " found with value: " << it->second << endl;
  } else {
    cout << "Key " << key << " not found." << endl;
  }

  // map find key by value
  // https://stackoverflow.com/questions/4263640/find-mapped-value-of-map
  for (auto it = umap.begin(); it != umap.end(); ++it) {
    if (it->second == "two") {
      cout << "it->first " << it->first << endl;
      return it->first;
    }
  }

  // c++17
  for (const auto& [key, value] : umap) {
    if (value == "two") {
      cout << "[key, value] " << key << endl;
      // return key;
    }
  }

  return 0;
}
