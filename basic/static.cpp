#include <iostream>

using namespace std;

void hello(); // declaration

int main()
{
  for (int i = 0; i < 5; i++)
    hello();

  return 0;
}

// definition
void hello()
{
  static int x = 0;
  printf("%d \n", x);
  x++;
}