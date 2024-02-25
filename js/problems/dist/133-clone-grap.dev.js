"use strict";

/**
 * // Definition for a Node.
 * function Node(val, neighbors) {
 *    this.val = val === undefined ? 0 : val;
 *    this.neighbors = neighbors === undefined ? [] : neighbors;
 * };
 */

/**
 * @param {Node} node
 * @return {Node}
 */
var cloneGraph = function cloneGraph(node) {
  // Nodes we have already copied
  var visited = {}; // DFS function to copy graph

  var dfs = function dfs(node) {
    if (!node) return node; // If we have seen this node before, return it

    if (visited[node.val] != null) return visited[node.val]; // Create base for copied node

    var root = new Node(node.val); // Add this copied node to group of nodes we hav copied

    visited[node.val] = root; // Add copied neighbors to the current copied node

    node.neighbors.forEach(function (n) {
      return root.neighbors.push(dfs(n));
    });
    return root;
  }; // Return new copied graph

  return dfs(node);
};
