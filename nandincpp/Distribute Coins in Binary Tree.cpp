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
    
    int fun(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left = fun(root -> left);
        int right = fun(root -> right);
        
        ans += abs(left)+abs(right);
        
        return root->val+left+right-1;
    }
    
public:
    int distributeCoins(TreeNode* root) 
    {
        fun(root);
        
        return ans;
    }
};