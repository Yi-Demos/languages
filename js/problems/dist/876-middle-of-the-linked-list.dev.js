"use strict";

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function middleNode(head) {
  // Method 1:
  // let totalLength = 0;
  // let node = head;
  // let node2 = head;
  // while (node) {
  //     node = node.next;
  //     totalLength++;
  // }
  // const index = parseInt(totalLength / 2);
  // for (let i = 0; i < index; i++) {
  //     node2 = node2.next;
  // }
  // return node2;
  // Method 2:
  var start = head;
  var end = head;

  while (end && end.next) {
    end = end.next.next;
    start = start.next;
  }

  return start;
};