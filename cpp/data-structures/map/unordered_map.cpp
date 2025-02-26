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

  return 0;
}
