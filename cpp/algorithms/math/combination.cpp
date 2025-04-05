// Combination（組合） 是指：從 n 個物品中「選出 r
// 個」，不考慮順序，有幾種選法？
//
// 舉例：
// 從 3 個字母 A, B, C 中選 2 個，組合可能是：AB, AC, BC → 共 3 種 → C(3,2) = 3

long long combination(int n, int r) {
  if (r > n) return 0;
  if (r == 0 || r == n) return 1;

  long long res = 1;

  for (int i = 1; i <= r; ++i) {
    res *= n - r + i;  // 分子的一部分
    res /= i;          // 同時處理分母
  }

  return res;
}

// Permutation（排列） 是指：從 n 個物品中取出 r 個，考慮順序，有幾種方法。
//
// 舉例：
// 從 3 個字母 A, B, C 中選 2 個，排列可能是：AB, AC, BA, BC, CA, CB → 共 6 種 →
// P(3,2) = 6

long long permutation(int n, int r) {
  if (r > n) return 0;

  long long res = 1;

  for (int i = 0; i < r; ++i) {
    res *= (n - i);
  }

  return res;
}