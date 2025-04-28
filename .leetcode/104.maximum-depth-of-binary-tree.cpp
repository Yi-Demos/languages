/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  int maxDepth(TreeNode* root) {
    /*
      Approach 1: DFS
      time complexity: O(n)
      space complexity: O(n)
    */

    // if (root == nullptr) return 0;

    // int l = maxDepth(root->left);
    // int r = maxDepth(root->right);

    // return max(l, r) + 1;

    /*
      Approach 2: BFS
      time complexity: O(n)
      space complexity: O(n)
    */

    if (root == nullptr) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty()) {
      int levelWidth = q.size();

      for (int i = 0; i < levelWidth; i++) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }

      depth++;
    }

    return depth;
  }
};
// @lc code=end