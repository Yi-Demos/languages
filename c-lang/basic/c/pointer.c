# include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 1, b = 2;
  int *arr[2] = {&a, &b};
  int *arr2 = *arr;

  int v[2] = {1, 2};
  int (*q)[2] = &v;

  arr2[0] = 123;
  printf("arr 11 is: %d\n", *arr[0]);
  printf("arr 22 is: %d\n", arr2[0]);
  printf("arr q is: %d\n", *q[0]);

  return 0;
}
