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
  unordered_set<int> ust = {1, 2, 3, 4, 5};

  // insert ont
  ust.insert(6);
  // insert many
  ust.insert({7, 8, 9});

  // check if num has alreay existed in set
  // ust.count(1) same as ust.find(1) !== ust.end()

  if (ust.count(1)) {
    cout << "found";
  } else {
    cout << "not found";
  }

  display(ust);

  ust.erase(5);

  display(ust);

  return 0;
}

void display(const unordered_set<int> &uset) {
  cout << "numbers = ";

  for (const auto &value : uset) {
    cout << value << ", ";
  }
}