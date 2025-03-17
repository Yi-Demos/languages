/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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

    // ListNode* dummy = new ListNode(0, head);
    // ListNode* prev = dummy;
    // ListNode* current = head;

    // while (current != nullptr) {
    //   if (current->next != nullptr && current->val == current->next->val) {
    //     while (current->next != nullptr && current->val ==
    //     current->next->val) {
    //       current = current->next;
    //     }
    //     prev->next = current->next;
    //   } else {
    //     prev = prev->next;
    //   }
    //   current = current->next;
    // }

    // return dummy->next;

    ListNode* current = head;
    int prevVal = 0;

    while (current != nullptr && current->next != nullptr) {
      if (current->val == prevVal) {
        prevVal = current->val;
        current->next = current->next->next;
      } else {
        current = current->next;
      }
    }

    return head;
  }
};
// @lc code=end
