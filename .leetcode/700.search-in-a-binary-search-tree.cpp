/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
  TreeNode* searchBST(TreeNode* root, int val) {
    /*
      Approach 1: Recursive
      time complexity: O(logN) - average case, O(N) - worst case
      space complexity: O(logN) - average case, O(N) - worst case
    */

    // if (root == nullptr) return nullptr;
    // if (root->val == val) return root;
    // if (root->val > val) return searchBST(root->left, val);

    // return searchBST(root->right, val); // root->val < val

    /*
      Approach 2: Iterative
      time complexity: O(logN) - average case, O(N) - worst case
      space complexity: O(logN) - average case, O(N) - worst case
    */

    while (root != nullptr && root->val != val) {
      root = (root->val > val) ? root->left : root->right;
    }

    return root;
  }
};
// @lc code=end
