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
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        
        return 1 + max(height(root->left), height(root->right));
    }
    
public:
    bool isBalanced(TreeNode* root) 
    {
        if(!root)
            return 1;
        
        if(abs(height(root->left) - height(root->right)) > 1)
           return 0;
           
         return isBalanced(root->left)&&isBalanced(root->right);
    }
};