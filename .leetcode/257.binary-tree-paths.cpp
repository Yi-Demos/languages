/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
  vector<string> res;
  void dfs(TreeNode* root, string path) {
    if (root == nullptr) return;

    if (!path.empty()) path += "->";

    path += to_string(root->val);

    if (!root->left && !root->right) res.push_back(path);

    if (root->left) dfs(root->left, path);
    if (root->right) dfs(root->right, path);
  }
  vector<string> binaryTreePaths(TreeNode* root) {
    /*
      Approach 1: DFS
      Time complexity: O(n^2)
      Space complexity: O(n^2)
    */

    dfs(root, "");

    return res;
  }
};
// @lc code=end
