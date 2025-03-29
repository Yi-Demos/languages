// C++ program to illustrate the use of
// std::min_element()
#include <bits/stdc++.h>
using namespace std;

struct St {
  string name;
  int sno;
};

int main() {
  vector<int> v = {2, 1, 17, 10};
  int arr[4] = {33, 87, 1, 71};
  int n = sizeof(arr) / sizeof(arr[0]);

  /*
    Vector
  */

  // Min element in vector
  cout << *min_element(v.begin(), v.end()) << endl;

  /*
   Array
  */

  int arr[] = {33, 87, 1, 71};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Finding the minimum element in array
  cout << *min_element(arr, arr + n);

  /*
   Vector with structure
  */

  // Create a vector of structure
  vector<St> v = {{"Ashok", 11}, {"Deepak", 15}, {"Anmol", 23}, {"Vikas", 19}};

  // Find the minimum element in the vector of structure
  // based on the sno field
  St min = *min_element(v.begin(), v.end(),
                        [](const St &i, const St &j) { return i.sno < j.sno; });

  cout << min.name << " " << min.sno;

  return 0;
}
