/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
  vector<vector<int>> res;
  void dfs(TreeNode* root, int targetSum, vector<int>& path) {
    if (root == nullptr) return;

    targetSum -= root->val;
    path.push_back(root->val);

    if (!root->left && !root->right) {
      if (targetSum == 0) res.push_back(path);
    }

    if (root->left) dfs(root->left, targetSum, path);
    if (root->right) dfs(root->right, targetSum, path);

    path.pop_back();
  }
  vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    /*
      Approach 1: DFS
      time complexity: O(n)
      space complexity: O(n)
    */

    vector<int> path;

    dfs(root, targetSum, path);

    return res;
  }
};
// @lc code=end
