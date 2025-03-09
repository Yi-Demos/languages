/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// https://youtu.be/HIVLHVXUnLw?si=mzmR3Y2YJBa-ypq0
// step 1
// dummy -> 1 -> 2 -> 3 -> 4 -> 5
// ↑
// fast, slow
// ------------------------------------------------
// step 2
// dummy -> 1 -> 2 -> 3 -> 4 -> 5
// ↑
// slow
//           ↑
//           fast
// ------------------------------------------------
// step 3
// dummy -> 1 -> 2 -> 3 -> 4 -> 5
// ↑
// slow
//            ↑
//            fast
// ------------------------------------------------
// step 4
// dummy -> 1 -> 2 -> 3 ------> 5
// ↑
// slow
// ------------------------------------------------
// result
// 1 -> 2 -> 3 -> 5

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* headerList = new ListNode(head->val);

    for (int i = 0; i < n; i++) {
      headerList->next = new ListNode(head->val);
      head = head->next;
      headerList = headerList->next;
    }

    // ListNode* headerList = copyFirstNNodes(head, n);

    while (headerList != nullptr) {
      cout << headerList->val;
      headerList=headerList->next;
    }

    // int index = 0;

    // while (head != nullptr) {
    //   cout << "head " << head->val << "\n";

    //   if (index != n) {
    //     ListNode* node = new ListNode(head->val);
    //     cout << "saved " << head->val << "\n";
    //     cloneList->next = node;
    //   }

    //   head = head->next;
    //   index++;
    // }

    return head;

    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(n)
    */

    // int length = 0;
    // ListNode* current = head;
    // while (current != nullptr) {
    //   length++;
    //   current = current->next;
    // }

    // int target = length - n;

    // // 如果需要删除的是头节点
    // if (target == 0) {
    //   ListNode* newHead = head->next;
    //   delete head;
    //   return newHead;
    // }

    // // 遍历到目标节点的前一个节点
    // current = head;
    // for (int i = 1; i < target; ++i) {
    //   current = current->next;
    // }

    // // 删除目标节点
    // ListNode* toDelete = current->next;
    // current->next = current->next->next;
    // delete toDelete;

    // return head;

    /*
      Approach 2: Fast & Slow Pointer
      time complexity: O(n)
      space complexity: O(1)
    */

    // ListNode* dummy = new ListNode(0, head);
    // ListNode* fast = dummy;
    // ListNode* slow = dummy;

    // for (int i = 0; i <= n; ++i) {
    //   fast = fast->next;
    // }

    // while (fast != nullptr) {
    //   fast = fast->next;
    //   slow = slow->next;
    // }

    // ListNode* toDelete = slow->next;
    // slow->next = slow->next->next;
    // delete toDelete;

    // ListNode* newHead = dummy->next;
    // delete dummy;
    // return newHead;
  }
};

// @lc code=end
