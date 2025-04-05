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
    if (root == nullptr) return 0;  // 遇到空節點，回傳 0
    // 取左子樹和右子樹的最大深度，並加上 1
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
  }
};
// @lc code=end
