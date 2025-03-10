/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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

//  [2147483647]

class Solution {
 public:
  bool isValidBST(TreeNode* root) {
    /*
      Approach 1: Recursive
      time complexity: O(N)
      space complexity: O(N)
    */

    return validate(root,LONG_MIN, LONG_MAX);
  }

 private:
  bool validate(TreeNode* node, long min, long max) {
    if (node == nullptr) return true;
    if (node->val >= max || node->val <= min) return false;

    return validate(node->left, min, node->val) && validate(node->right, node->val, max);
  }
};
// @lc code=end
