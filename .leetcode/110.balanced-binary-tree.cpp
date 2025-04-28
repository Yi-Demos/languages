/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
  bool isBalanced(TreeNode* root) {
    /*
      Approach 1: DFS
      time complexity: O(n²)
      space complexity: O(1)
    */

    // if (!root) return true;

    // int leftHeight = maxDepth(root->left);
    // int rightHeight = maxDepth(root->right);

    // if (abs(leftHeight - rightHeight) > 1) return false;

    // return isBalanced(root->left) && isBalanced(root->right);

    /*
      Approach 2: DFS
      time complexity: O(n)
      space complexity: O(n)
    */

    return checkHeight(root) != -1;
  }

 private:
  int maxDepth(TreeNode* node) {
    if (!node) return 0;

    return 1 + max(maxDepth(node->left), maxDepth(node->right));
  }
  int checkHeight(TreeNode* node) {
    if (!node) return 0;

    int leftHeight = checkHeight(node->left);
    if (leftHeight == -1) return -1;  // 左子樹不平衡

    int rightHeight = checkHeight(node->right);
    if (rightHeight == -1) return -1;  // 右子樹不平衡

    if (abs(leftHeight - rightHeight) > 1) return -1;  // 當前節點不平衡

    return max(leftHeight, rightHeight) + 1;  // 返回當前節點的高度
  }
};
// @lc code=end