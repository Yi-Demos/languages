/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
  ListNode* middleNode(ListNode* head) {
    /*
      Approach 1: Two Pointers
      time complexity: O(n)
      space complexity: O(1)
    */

    ListNode* start = head;
    ListNode* end = head;

    while (end != NULL && end->next) {
      end = end->next->next;
      start = start->next;
    }

    return start;
  }
};
// @lc code=end
