"use strict";

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function addTwoNumbers(l1, l2) {
  var node = new ListNode();
  var res = node;
  var carry = 0;

  while (l1 || l2 || carry) {
    var num = 0;

    if (carry > 0) {
      num = num + carry;
      carry = 0;
    }

    if (l1) {
      num += l1.val;
      l1 = l1.next;
    }

    if (l2) {
      num += l2.val;
      l2 = l2.next;
    }

    if (num > 9) carry = 1;
    node.next = new ListNode(num % 10);
    node = node.next;
  }

  return res.next;
};
