/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
  ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) return head;

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;

    // 1. Move prev to one node before 'left'
    for (int i = 1; i < left; i++) {
      prev = prev->next;
    }

    // 2. Start reversal
    ListNode* curr = prev->next;
    ListNode* next = nullptr;

    for (int i = 0; i < right - left; i++) {
      next = curr->next;
      curr->next = next->next;
      next->next = prev->next;
      prev->next = next;
    }

    return dummy.next;
  }
};
// @lc code=end
