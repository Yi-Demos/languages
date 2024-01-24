#include <iostream>

using namespace std;

template <typename T>
void MaxTest(T x, T y) {
  // if(x > y) return x;
  bool aa = '1' > '2';
  cout << aa << endl;
  // return y;
}

int main() {
  // cout<<"MaxTest(3, 4)="<<MaxTest(3, 4)<<endl;
  // cout<<"MaxTest(6.3, 8.7)="<<MaxTest(6.3, 8.7)<<endl;
  // cout<<"MaxTest('O', 'A')="<<MaxTest('O', 'A')<<endl;

  MaxTest(3, 4);

  return 0;
}