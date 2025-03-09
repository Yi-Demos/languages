/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
  ListNode *reverse(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *current = head;
    ListNode *next = nullptr;

    while (current != nullptr) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    return prev;
  }
  bool isPalindrome(ListNode *head) {
    /*
      Approach 1: Iterative
      time complexity: O(n)
      space complexity: O(1)
    */

    // ListNode *reverseList = reverse(head);
    // bool result = true;

    // while (head != nullptr) {
    //   if (head->val == reverseList->val) {
    //     head = head->next;
    //     reverseList = reverseList->next;
    //   } else {
    //     result = false;
    //     break;
    //   }
    // }

    // return result;

    /*
      Approach 2: Fast & Slow Pointer
      time complexity: O(n)
      space complexity: O(1)
    */

    bool result = true;
    ListNode *fast = head;
    ListNode *slow = head;

    // same as "fast != nullptr && fast->next != nullptr"
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    // reverse half then compare
    ListNode *prev = nullptr;
    ListNode *current = slow;
    ListNode *next = nullptr;

    while (current) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    ListNode *firstHalf = head;
    ListNode *secondHalf = prev;

    while (secondHalf) {
      if (firstHalf->val == secondHalf->val) {
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
      } else {
        result = false;
        break;
      }
    }

    return result;
  }
};
// @lc code=end
