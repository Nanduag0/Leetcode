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
    int cnt = 0;
    void dfs(TreeNode* root, int maxi)
    {
        if(!root)
            return ;
        if(root->val >= maxi)
            cnt++;
        
        dfs(root->left, max(maxi, root->val));
        dfs(root->right, max(maxi, root->val));
    }
    
public:
    int goodNodes(TreeNode* root)
    {
        dfs(root, INT_MIN);
        return cnt;
    }
};