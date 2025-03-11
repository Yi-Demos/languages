// g++ std-deque.cpp -o a.out -std=c++11
#include <deque>
#include <iostream>

using namespace std;

int main() {
  deque<int> dq = {1, 2, 3, 4};  // [1, 2, 3, 4]

  dq.push_back(5);   // [1, 2, 3, 4, 5]
  dq.pop_front();    // [2, 3, 4, 5]
  dq.push_front(0);  // [0, 2, 3, 4, 5]
  dq.pop_back();     // [0, 2, 3, 4]

  for (int &i : dq) {
    cout << i << " ";
  }

  cout << endl;

  // Removing the element
  auto it = find(dq.begin(), dq.end(), 2);
  if (it != dq.end()) {
    dq.erase(it);
  } else {
    cout << "Element not found in the deque." << endl;
  }

  for (int &i : dq) {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}