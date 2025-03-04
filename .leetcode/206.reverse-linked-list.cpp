/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
  ListNode* reverseList(ListNode* head) {
    // Approach 1: iterative
    // time complexity: O(n)
    // space complexity: O(1)
    // ListNode* prev = nullptr;
    // ListNode* curr = head;

    // while (curr) {
    //   ListNode* next = curr->next;
    //   curr->next = prev;
    //   prev = curr;
    //   curr = next;
    // }

    // return prev;

    // Approach 2: recursive
    // time complexity: O(n)
    // space complexity: O(n)
    if (!head || !head->next) return head;
    cout << head->val << "\n";

    ListNode* p = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return p;
  }
};
// @lc code=end
