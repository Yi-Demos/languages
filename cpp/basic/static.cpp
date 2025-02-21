// https://ithelp.ithome.com.tw/articles/10308388
#include <stdio.h>

// function 內的 static 變數
// 如果是宣告在 function 內的 static 變數，則該變數的生命週期不會因為離開
// function 而清除該變數

void func(void) {
  int a = 0;
  static int b = 0;

  printf("a = %d, b = %d\n", ++a, ++b);
}

int main(void) {
  for (int i = 0; i < 10; i++) func();

  return 0;
}