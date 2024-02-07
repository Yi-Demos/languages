#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// Brute Force- Merge and Sort
// class Solution {
//  public:
//   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> v;
//     double ans = 0;

//     for (int x : nums1) v.push_back(x);
//     for (int x : nums2) v.push_back(x);

//     // sort(v.begin(), v.end(), greater<int>());
//     sort(v.begin(), v.end());

//     int vSize = nums1.size() + nums2.size();

//     if (vSize % 2 == 0) {
//       // even size
//       ans = (static_cast<double>(v[(vSize / 2) - 1]) +
//              static_cast<double>(v[vSize / 2])) /
//             2.0;
//     } else {
//       // odd size
//       ans = v[(nums1.size() / 2)];
//     }

//     return ans;
//   }
// };

class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    double ans = 0;
    double cur = 0;
    int totalSize = nums1.size() + nums2.size();

    if (totalSize % 2 == 0) {
      for (int x : nums1) } else {
      ans =
    }

    return ans;
  }
};

int main() {
  vector<int> v1 = {1, 2};
  vector<int> v2 = {3, 4};

  Solution solution;
  double a = solution.findMedianSortedArrays(v1, v2);

  cout << a;

  return 0;
}
