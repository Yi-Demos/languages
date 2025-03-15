#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std;

// https://www.programiz.com/cpp-programming/unordered-set
// unordered_set Methods Description
// insert()	inserts an element to the unordered set
// count()	returns 1 if the specified value exists and 0 if it doesn't
// find()	returns the iterator to the element with the specified value
// size()	returns the number of unique elements
// empty()	returns true if the unordered set is empty
// erase()	removes elements with the specified value
// clear()	removes all elements

void display(const unordered_set<int> &);

int main() {
  // vector<int> nums;
  // unordered_set<int> ust(nums.begin(), nums.end());
  unordered_set<int> ust = {1, 2, 3};

  // insert ont
  ust.insert(4);
  // insert many
  ust.insert({5, 6});

  // check if num has alreay existed in set
  // ust.count(1) same as ust.find(1) !== ust.end()

  if (ust.count(1)) {
    cout << "found" << endl;
  } else {
    cout << "not found" << endl;
  }

  display(ust);

  ust.erase(5);

  display(ust);

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

void display(const unordered_set<int> &uset) {
  cout << "numbers = ";

  for (const int &value : uset) {
    cout << value << ", ";
  }
}