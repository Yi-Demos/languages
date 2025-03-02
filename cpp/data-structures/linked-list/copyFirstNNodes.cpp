#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* copyFirstNNodes(ListNode* head, int n) {
  if (head == nullptr || n <= 0) return nullptr;

  ListNode* newHead = new ListNode(head->val);
  ListNode* newTail = newHead;
  ListNode* current = head->next;
  int count = 1;

  while (current != nullptr && count < n) {
    ListNode* newNode = new ListNode(current->val);
    newTail->next = newNode;
    newTail = newNode;
    current = current->next;
    count++;
  }

  return newHead;
}

int main() {
  // List init：1 -> 2 -> 3 -> 4 -> 5
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  ListNode* copiedList = copyFirstNNodes(head, 3);

  ListNode* current = copiedList;
  while (current != nullptr) {
    std::cout << current->val << " ";
    current = current->next;
  }
  // output：1 2 3

  // 釋放記憶體（此處省略原始鍊錶的釋放代碼）
  current = copiedList;
  while (current != nullptr) {
    ListNode* temp = current;
    current = current->next;
    delete temp;
  }

  return 0;
}
