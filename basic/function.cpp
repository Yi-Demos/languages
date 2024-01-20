#include <stdio.h>

int cal (int num) {
  num +=1;

  return num;
}

int main()
{
  int i  = 0;

  cal(i);

  printf("%d \n", i);
  return 0;
}
