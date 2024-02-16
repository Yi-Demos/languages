#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  // vector<int> nums;
  // unordered_set<int> ust(nums.begin(), nums.end());
  unordered_set<int> ust = {1, 2, 3, 4, 5};

  // check if num has alreay existed in set
  if (ust.count(1)) {
    cout << "found";
  } else {
    cout << "not found";
  }

  cout << "\n\n";

  cout << "numbers = ";
  for (const auto &num : ust) {
    cout << num << ", ";
  }

  return 0;
}