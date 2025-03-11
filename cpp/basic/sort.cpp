// g++ std-sort2.cpp -o a.out
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
  int arr[] = {4, 5, 8, 3, 7, 1, 2, 6, 10, 9};

  // 升序：sort(begin, end, less<Type>());
  // 降序：sort(begin, end, greater<Type>());
  sort(arr, arr + 10, greater<int>());

  cout << "sort array (decreasing):" << endl;

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}