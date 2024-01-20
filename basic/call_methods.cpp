// https://wayne265265.pixnet.net/blog/post/112556555-%E3%80%90%E6%95%99%E5%AD%B8%E3%80%91call-by-value%2C-call-by-address%2C-call-by-referenc

#include <stdio.h>

#include <iostream>

using namespace std;

// Call by value
//
// 當你利用call by
// value的方法去傳值時因為a與b的記憶體是分開的，所以不會互相干擾，
// 但也需要兩個記憶體去儲存他們，這時候請仔細思考是否有使用call by
// value的必要，如果之後在較大型的程式運行時， 若使用太多call by
// value而使用結束後沒有刪除掉未使用的記憶體空間，可能會導致記憶體不足而程式崩潰，切記切記!

// int main()
// {
//   int a = 1;
//   int b = a; //將a的值複製到b的新記憶體區域

//   return 0;
// }

// Call by address (Call by pointer)

// void swap(int *address_a, int *address_b)
// {
//   int temp = *address_a;
//   *address_a = *address_b;
//   *address_b = temp;
// }

// int main()
// {

//   int a = 1;
//   int b = 0;

//   printf("a: %d | b: %d \n", a, b); // 1 0

//   swap(&a, &b); // 傳入a, b的address進行交換

//   printf("a: %d | b: %d \n", a, b); // 0 1

//   return 0;
// }

// Call by reference (C++ only)

void swap(int &address_a, int &address_b) {
  int temp = address_a;
  address_a = address_b;
  address_b = temp;
}

int main() {
  int a = 1;
  int b = 0;

  cout << a << " " << b << endl;  // 1 0

  swap(a, b);  // 傳入a, b的address進行交換

  cout << a << " " << b << endl;  // 0 1

  return 0;
}