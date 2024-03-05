#include <stdio.h>
#include <stdlib.h>

#include "./vars.cpp"

int main(void) {
  extern int b;
  extern void func(void);
  for (int i = 0; i < 10; i++) func();
}

void func(void) {
  static int a = 0;

  printf("%d %d\n", a++, b++);
}