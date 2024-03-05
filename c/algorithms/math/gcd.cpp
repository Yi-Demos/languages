#include <iostream>
#include <vector>

using namespace std;

// https://hackmd.io/@jQSlhiN3QaGkugpbD4NDAA/rkvNkyQfi
int gcd(int x, int y) { return y == 0 ? x : gcd(y, x % y); }

int main() {
  cout << gcd(20, 5) << "\n";
  cout << gcd(5, 20) << "\n";

  return 0;
}