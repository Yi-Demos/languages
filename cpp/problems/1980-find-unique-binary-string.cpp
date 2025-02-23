class Solution {
 public:
  string findDifferentBinaryString(vector<string>& nums) {
    prefixLength = nums.size();
    string result = "";
    set<string> numsSet = {nums.begin(), nums.end()};

    // for (const string num : numsSet) {
    //   cout << num;
    // }

    fillSets(numsSet, result, "");

    return result;
  }

 private:
  int prefixLength = 0;

  string fillSets(const set<string>& numsSet, string& result, string current) {
    if (current.size() < prefixLength) {
      fillSets(numsSet, result, current + "0");
      fillSets(numsSet, result, current + "1");
    }

    if (current.size() == prefixLength && !numsSet.contains(current))
      result = current;

    return result;
  }
};