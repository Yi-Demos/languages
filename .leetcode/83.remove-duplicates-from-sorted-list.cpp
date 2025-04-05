/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

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
  ListNode* deleteDuplicates(ListNode* head) {
    /*
      Approach: Iterative
      Time complexity: O(n)
      Space complexity: O(1)
    */

    // ListNode* current = head;

    // while (current != nullptr && current->next != nullptr) {
    //   if (current->val == current->next->val) {
    //     current->next = current->next->next;
    //   } else {
    //     current = current->next;
    //   }
    // }

    // return head;

    /*
      Approach: Recursive
      Time complexity: O(n)
      Space complexity: O(n)
    */

    if (head == nullptr || head->next == nullptr) return head;

    head->next = deleteDuplicates(head->next);

    return head->val == head->next->val ? head->next : head;
  }
};
// @lc code=end
