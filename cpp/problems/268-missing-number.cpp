class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int ans = 0;

    for (int j = 0; j < nums.size() + 1; j++) {
      bool isMissing = true;

      for (const int num : nums) {
        if (num == j) {
          isMissing = false;
          break;
        }
      }

      if (isMissing) {
        ans = j;
        break;
      }
    }

    return ans;
  }
};