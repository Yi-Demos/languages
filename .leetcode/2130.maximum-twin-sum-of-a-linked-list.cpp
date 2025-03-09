/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
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
  vector<int> linkedListToVector(ListNode* head) {
    vector<int> result;
    ListNode* current = head;
    while (current != nullptr) {
      result.push_back(current->val);
      current = current->next;
    }
    return result;
  }
  int pairSum(ListNode* head) {
    /*
      Approach 1: Two Pointers
      time complexity: O(n)
      space complexity: O(n)
    */

    // vector<int> listVec = linkedListToVector(head);
    // int result = 0;
    // int l = 0;
    // int r = listVec.size() - 1;

    // while (l < r) {
    //   result = max(result, listVec[l] + listVec[r]);

    //   l++;
    //   r--;
    // }

    // return result;

    /*
      Approach 2: Fast & Slow Pointer
      time complexity: O(n)
      space complexity: O(1)
    */

    int result = 0;
    ListNode* fast = head;
    ListNode* slow = head;

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    // reverse half then compare
    ListNode* prev = nullptr;
    ListNode* current = slow;
    ListNode* next = nullptr;

    while (current) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    ListNode* firstHalf = head;
    ListNode* secondHalf = prev;

    while (secondHalf) {
      result = max(result, firstHalf->val + secondHalf->val);

      firstHalf = firstHalf->next;
      secondHalf = secondHalf->next;
    }

    return result;
  }
};
// @lc code=end