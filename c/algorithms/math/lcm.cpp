#include <iostream>

using namespace std;

int GCD(int num1, int num2) {
  if (num2 == 0) {
    return num1;
  }

  return GCD(num2, num1 % num2);
}

// 最小公倍數是兩個數或多個數最小共同有的倍數
// https://ithelp.ithome.com.tw/articles/10284598
int LCM(int num1, int num2) { return ((num1 * num2) / GCD(num1, num2)); }

int LCM2(int num1, int num2, int num3) {
  return ((num1 * num2) / GCD((num1, num2), num3));
}

int main() {
  cout << LCM(6, 3);
  cout << LCM2(6, 3, 3);

  return 0;
}