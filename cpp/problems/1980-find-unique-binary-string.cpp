#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
  string findDifferentBinaryString(vector<string>& nums) {
      int n = nums.size();
      unordered_set<string> numsSet(nums.begin(), nums.end());
      string result;

      if (generateBinaryString(n, "", numsSet, result)) return result;

      return "";
  }

private:
  bool generateBinaryString(int n, string current, const unordered_set<string>& numsSet, string& result) {
      if (current.length() == n) {
          if (numsSet.find(current) == numsSet.end()) {
              result = current;
              return true;
          }
          return false;
      }
      if (generateBinaryString(n, current + "0", numsSet, result)) return true;
      if (generateBinaryString(n, current + "1", numsSet, result)) return true;

      return false;
  }
};
