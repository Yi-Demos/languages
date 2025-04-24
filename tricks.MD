判別奇數偶數

if (n & 1) {
    std::cout << "n 是奇數" << std::endl;
} else {
    std::cout << "n 是偶數" << std::endl;
}

------------------------------------
判斷一個數是否為 2 的冪次方

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

---
移除 vector 相同的數字

for (int n : unordered_set<int>(nums1.begin(), nums1.end())) {
  m[n]++;
}