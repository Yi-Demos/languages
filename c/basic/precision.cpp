#include <iostream>

using namespace std;

// https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/

int main() {
  double x = 1.411, y = 1.500, z = 1.611;
  double a = -1.411, b = -1.500, c = -1.611;

  cout << "====== trunc =====\n";
  cout << "==================\n";

  cout << trunc(x) << endl;
  cout << trunc(y) << endl;
  cout << trunc(z) << endl;
  cout << trunc(a) << endl;
  cout << trunc(b) << endl;
  cout << trunc(c) << endl;

  cout << "====== round =====\n";
  cout << "==================\n";

  cout << round(x) << endl;
  cout << round(y) << endl;
  cout << round(z) << endl;
  cout << round(a) << endl;
  cout << round(b) << endl;
  cout << round(c) << endl;

  cout << "====== ceil =====\n";
  cout << "==================\n";

  cout << ceil(x) << endl;
  cout << ceil(y) << endl;
  cout << ceil(z) << endl;
  cout << ceil(a) << endl;
  cout << ceil(b) << endl;
  cout << ceil(c) << endl;

  return 0;
}
