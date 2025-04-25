#include <iostream>
#include <stdio.h>
#include <string>
#include <regex>

using namespace std;

int main() {
  string test = "abc def abc def";
  cout << test << endl;

  test = regex_replace(test, regex("def"), "klm");
  cout << test << endl;

  int index = test.find("abc", 0); // 0 代表第一次出現的 "abc"
  test.replace(index, 3, "aaa");
  cout << test << endl;

  return 0;
}