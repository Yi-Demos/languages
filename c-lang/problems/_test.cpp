#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/3sum/solutions/1462423/c-both-two-pointers-and-hashmap-approach-explained/
class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    if (nums.size() < 3) return {};

    sort(nums.begin(), nums.end());

    if (nums[0] > 0) return {};

    vector<vector<int>> v;

    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] > 0) break;
      if (i > 0 && nums[i] == nums[i - 1]) continue;

      int l = i + 1;
      int r = nums.size() - 1;
      int sum = 0;

      while (l < r) {
        sum = nums[i] + nums[l] + nums[r];

        if (sum > 0) {
          r--;
        } else if (sum < 0) {
          l++;
        } else {
          v.push_back({nums[i], nums[l], nums[r]});
          cout << nums[i] << nums[l] << nums[r] << endl;

          l++;
        }
      }
    }

    return v;
  }
};

int main() {
  vector<int> v = {-1, 0, 1, 2, -1, -4};

  Solution solution;
  solution.threeSum(v);

  return 0;
}
