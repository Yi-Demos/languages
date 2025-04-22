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

  // reverse string
  string str = "Hello, World!";
  reverse(str.begin(), str.end());

  string reversed_str(str.rbegin(), str.rend());  // 使用 rbegin 跟 rend

  // substr
  string s = "abcdef";

  cout << s.substr(0, 3) << endl;  // "abc"
  cout << s.substr(2, 2) << endl;  // "cd"
  cout << s.substr(4) << endl;     // "ef"（從 index 4 開始取到結尾）
  cout << s.substr(0) << endl;     // "abcdef"（從頭取到尾）

  // find
  int x = p.find("*");

  return 0;
}