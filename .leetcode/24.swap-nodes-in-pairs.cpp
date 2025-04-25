/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
  ListNode* swapPairs(ListNode* head) {
    /*
      Approach 1: recursive
      time complexity: O(n)
      space complexity: O(n)

      https://rkcodeguru.wordpress.com/2019/03/07/swap-nodes-in-pairs/
    */

    // if (!head || !head->next) return head;

    // ListNode* nextNode = head->next;

    // head->next = swapPairs(nextNode->next);
    // nextNode->next = head;

    // return nextNode;

    /*
      Approach 2: Iterative (Optimized)
      time complexity: O(n)
      space complexity: O(1)
    */

    ListNode dummy;
    ListNode* prev = &dummy;

    dummy.next = head;

    while (prev->next && prev->next->next) {
      ListNode* first = prev->next;
      ListNode* second = prev->next->next;

      // trick: swap

      //               1
      //           → → → → →
      //         ↑           ↓
      //         ↑           ↓
      // prev    1     2     3     4
      //   ↓     ↑   ↙ ↑
      //   ↓      ← ←  ↑
      //   ↓       2   ↑
      //   ↓           ↑
      //    → → → → → →
      //         3

      first->next = second->next;
      second->next = first;
      prev->next = second;
      prev = first;
    }

    return dummy.next;
  }
};
// @lc code=end