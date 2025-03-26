/*
 * @lc app=leetcode id=68 lang=cpp
 *
 * [68] Text Justification
 */

// @lc code=start
class Solution {
 public:
  vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> res;
    int l = 0;
    int lineLength = 0;

    for (int r = 0; r < words.size(); ++r) {
      if (lineLength + (r - l) + words[r].size() > maxWidth) {
        int space = maxWidth - lineLength;
        int spaceCount = r - l - 1;
        int spaceEach = spaceCount == 0 ? space : space / spaceCount;
        int spaceExtra = spaceCount == 0 ? 0 : space % spaceCount;

        string line;

        for (int i = l; i < r; ++i) {
          line += words[i];
          if (i < r - 1) {
            line += string(spaceEach, ' ');
            if (spaceExtra > 0) {
              line += " ";
              --spaceExtra;
            }
          }
        }

        if (spaceCount == 0)
          line += string(space, ' ');  // add space to the end

        res.push_back(line);
        l = r;
        lineLength = 0;
      }

      lineLength += words[r].size();
    }

    // adjust last line
    string lastLine;
    for (int i = l; i < words.size(); ++i) {
      lastLine += words[i];
      if (i < words.size() - 1) lastLine += " ";
    }
    lastLine += string(maxWidth - lastLine.size(), ' ');
    res.push_back(lastLine);

    return res;
  }
};
// @lc code=end
