#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    int minIndex = i;

    for (int j = i; j < vec.size(); j++)
    {
      if (vec[minIndex] > vec[j])
        minIndex = j;
    }

    if (minIndex != i)
      swap(vec[i], vec[minIndex]);
  }

  for (auto v : vec)
    cout << v;
  cout << endl;
}

int main()
{
  vector<int> vec = {6, 2, 4, 1, 3, 5};

  selectionSort(vec);

  return 0;
}
