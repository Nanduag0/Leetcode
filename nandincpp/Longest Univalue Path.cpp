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
    int dfs(TreeNode* root)
    {
        if(!root)
            return 0;
        int leftt = dfs(root->left);
        int rightt = dfs(root->right);
        
        if(!root->left || root->val!=root->left->val)
            leftt = 0;
        if(!root->right || root->val!=root->right->val)
            rightt = 0;
        
        ans = max(ans, rightt+leftt);
        return max(leftt, rightt)+1;
    }
public:
    int longestUnivaluePath(TreeNode* root) 
    {
        if(!root)
            return 0;
        dfs(root);
        return ans;
    }
};