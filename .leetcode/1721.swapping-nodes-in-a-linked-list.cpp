/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
  ListNode* swapNodes(ListNode* head, int k) {
    /*
      Approach 1: Iterative (Optimized)
      time complexity: O(n)
      space complexity: O(1)
    */

    ListNode* first = head;
    ListNode* second = head;

    for (int i = 1; i < k; i++) {
      first = first->next;
    }

    ListNode* temp = first;

    while (temp->next != nullptr) {
      temp = temp->next;
      second = second->next;
    }

    // swap value
    int val = first->val;
    first->val = second->val;
    second->val = val;

    return head;
  }
};
// @lc code=end