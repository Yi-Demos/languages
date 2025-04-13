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