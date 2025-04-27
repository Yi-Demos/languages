#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// void print_queue(priority_queue<int> q) {
//   while (!q.empty()) {
//     cout << q.top() << " ";
//     q.pop();
//   }

//   cout << endl;
// }

template <typename T, typename Container, typename Compare>
void print_queue(std::priority_queue<T, Container, Compare> q) {
  while (!q.empty()) {
    std::cout << q.top() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

int main() {
  vector<int> nums = {10, 20, 30, 5, 15};

  // maxHeap
  priority_queue<int> maxHeap(nums.begin(), nums.end());
  // minHeap
  // ​如果使用 greater 作為比較函數，則 pop()
  // 會移除數值最小的元素
  priority_queue<int, vector<int>, greater<int>> minHeap();

  // 用 Lambda 客制比較
  auto compare = [](auto a, auto b) { return a.first < b.first; };
  priority_queue<int, vector<int>, decltype(compare)> minHeap();

  print_queue(maxHeap);
  print_queue(minHeap);

  //  get values in pair with priority_queue
  priority_queue<pair<int, int>> heap;

  auto [s, idx] = pq.top();  // C++17
  // or
  pair<int, int> p = pq.top();
  int s = p.first;
  int idx = p.second;

  return 0;
}