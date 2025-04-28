/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
  vector<vector<int>> levelOrder(TreeNode* root) {
    /*
      Approach 1: BFS
      time complexity: O(n)
      space complexity: O(n)
    */

    if (root == nullptr) return {};

    queue<TreeNode*> q;
    q.push(root);
    vector<vector<int>> res;


    while (!q.empty()) {
      vector<int> v;
      int levelSize = q.size();

      for (int i = 0; i < levelSize; i++) {
        TreeNode* node = q.front();
        q.pop();
        v.push_back(node->val);

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }

      res.push_back(v);
    }

    return res;
  }
};
// @lc code=end