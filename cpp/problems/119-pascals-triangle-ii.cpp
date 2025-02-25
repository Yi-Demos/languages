class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    // 118 method
    // time complexity: O(n^2)
    // space complexity: O(n^2)

    rowIndex++;
    vector<vector<int>> matrix(rowIndex);

    for (int i = 0; i < rowIndex; ++i) {
      matrix[i].resize(i + 1);
      matrix[i][0] = matrix[i][i] = 1;

      for (int j = 1; j < i; ++j) {
        matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
      }
    }

    return matrix[rowIndex - 1];

    // oneline method
    // time complexity: O(n^2)
    // space complexity: O(n)

    // vector<int> row(rowIndex + 1, 1); // 初始化为 1

    // for (int i = 1; i < rowIndex; ++i) {
    //     for (int j = i; j > 0; --j) {
    //         row[j] += row[j - 1];

    //         cout << row[j];
    //     }
    // }

    // return row;
  }
};