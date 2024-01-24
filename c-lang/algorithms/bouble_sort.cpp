#include <iostream>
#include <vector>

using namespace std;

// Bouble Sort
// https://ithelp.ithome.com.tw/articles/10276184
// 最佳：O(n)
// 當資料順序恰好為由小到大時，第一輪排序未進行任何置換則提前結束。
// 平均：O(n2)
// 第 n 筆資料，平均需要比較 (n-1)/2 次
// 最差：O(n2)
// 當資料順序恰好為由大到小時，每輪分別執行：n-1、n-2、… 、1次，(n-1)+(n-2)+...+1 = n(n-1)/2 => O(n2)
void boubleSort(vector<int> &vec)
{
  int length = vec.size();

  for (int i = vec.size(); i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (vec[j] > vec[j + 1])
        swap(vec[j], vec[j + 1]);
    }
  }

  for (auto v : vec)
    cout << v;
  cout << endl;
}

int main()
{
  vector<int> vec = {6, 2, 4, 1, 3, 5};

  boubleSort(vec);

  return 0;
}
