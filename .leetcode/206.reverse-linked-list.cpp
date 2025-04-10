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
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    //            1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    // nullptr <- 1 <- 2 <- 3 <- 4 <- 5
    // nullptr  head    nullptr
    // prev     current next
    //          prev    current   next
    //
    // ListNode* current = head;
    // ListNode* prev = nullptr;
    // ListNode* next = nullptr;

    // while (current != nullptr) {
    //   // link node
    //   next = current->next;
    //   current->next = prev;
    //   // move to next step
    //   prev = current;
    //   current = next;
    // }

    // return prev;

    /*
      Approach 2: recursive
      time complexity: O(n)
      space complexity: O(n)
    */

    //              1    ->   2   ->   3   ->   4   ->   5 -> nullptr
    // nullptr <-   1    <-   2   <-   3   <-   4   <-   5
    // head(2) <- nullptr <-  head(2)
    // head(2) <- head(3) <- nullptr <-  head(3)

    // if (!head || !head->next) return head;

    // ListNode* node = reverseList(head->next);
    // head->next->next = head;
    // head->next = nullptr;

    // return node;

    /*
      Approach 3: Iterative (Optimized)
      time complexity: O(n)
      space complexity: O(1)
    */

    ListNode* res = nullptr;

    while (head != nullptr) {
      ListNode* next = head->next;
      head->next = res;
      res = head;
      head = next;
    }

    return res;
  }
};
// @lc code=end
