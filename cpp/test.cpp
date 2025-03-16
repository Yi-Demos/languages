#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> umap;

    for (int num : nums) {
      umap[num]++;
    }

    for (auto it = umap.begin(); it != umap.end(); it++) {
      cout << "it->first " << it->first << " it->second " << it->second << endl;
    }

    return nums;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {1, 1, 1, 2, 2, 3};

  sol.topKFrequent(nums, 2);

  return 0;
}
