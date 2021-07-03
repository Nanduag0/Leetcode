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
    int ans = 0;
    
    void dfs(TreeNode* root, int maxi, int mini)
    {
        if(!root)
            return ;
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        ans = max(ans, maxi-mini);
        
        dfs(root->left, maxi, mini);
        dfs(root->right, maxi, mini);
    }
    
public:
    int maxAncestorDiff(TreeNode* root) 
    {
        dfs(root, INT_MIN, INT_MAX);
        return ans;
    }
};