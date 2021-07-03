/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int dfs(TreeNode* root, int targetSum)
    {
        if(!root)
            return 0;
        return (root->val==targetSum ? 1 : 0)+dfs(root->left, targetSum-root->val)+dfs(root->right, targetSum-root->val);
    }
public:
    int pathSum(TreeNode* root, int targetSum) 
    {
        if(!root)
            return 0;
        return dfs(root, targetSum)+pathSum(root->left, targetSum)+pathSum(root->right, targetSum);
    }
};