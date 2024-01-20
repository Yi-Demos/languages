#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, int> mapTest;
  for (int i = 0; i < 10; i++)
    mapTest[i] = i * 100;

  mapTest[5] = 1000;

  map<int, int>::iterator it;

  for (it = mapTest.begin(); it != mapTest.end(); it++)
    cout << it->first << " " << it->second << endl;

  return 0;
}
