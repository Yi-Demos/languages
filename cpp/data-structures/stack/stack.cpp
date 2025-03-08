#include <iostream>
#include <stack>

int main() {
  stack<int> myStack;

  // 推入元素
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  // 輸出堆疊頂端的元素
  cout << "堆疊頂端的元素: " << myStack.top() << endl;

  // 彈出元素
  // 通常在 pop 時會對 stack 進行檢查是否為空，非空才 pop()
  myStack.pop();

  // 再次輸出堆疊頂端的元素
  cout << "彈出後堆疊頂端的元素: " << myStack.top() << endl;

  // 堆疊頂端的元素: 30
  // 彈出後堆疊頂端的元素: 20

  return 0;
}