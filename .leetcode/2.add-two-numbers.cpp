/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    /*
      Approach 1: None
      time complexity: O(n)
      space complexity: O(1)
    */

    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
      int sum = carry;

      if (l1 != nullptr) {
        sum += l1->val;
        l1 = l1->next;
      }

      if (l2 != nullptr) {
        sum += l2->val;
        l2 = l2->next;
      }

      carry = sum / 10;
      current->next = new ListNode(sum % 10);
      current = current->next;
    }

    return dummy->next;
  }
};
// @lc code=end