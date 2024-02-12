#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    unordered_map<int, int> hash;
    int maxKey = 0;
    int maxValue = 0;

    for (int num : nums) {
      hash[num] = 1 + hash[num];

      if (hash[num] > maxValue) {
        maxKey = num;
        maxValue = hash[num];
      }
    }

    return maxKey;
  }
};

int main() {
  vector<int> v = {3, 2, 3};

  Solution solution;
  solution.majorityElement(v);

  return 0;
}
