#include <iostream>
#include <vector>

using namespace std;

int main() {
  int array[5] = {3, 6, 9, -8, 1};
  int size = (sizeof(array) / sizeof(*array));

  sort(array, array + 5);

  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }

  cout << "=======" << endl;

  reverse(begin(array), end(array));

  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }

  return 0;
}