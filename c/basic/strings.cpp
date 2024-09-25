#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%c", greetings[0]);

  greetings[0] = 'J';
  printf("%s", greetings);  // Outputs Jello World! instead of Hello World!

  int length = sizeof(greetings) / sizeof(greetings[0]);  // 12 + '\0'
  printf("%d\n", length);

  // greetings and greetings2 are same!!
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W',
                      'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";

  return 0;
}