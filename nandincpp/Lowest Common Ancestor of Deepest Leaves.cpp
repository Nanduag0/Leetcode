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
    int max_height(TreeNode* root)
    {
        if(!root)
            return 0;
        
        return 1 + max(max_height(root->left), max_height(root->right));        
    }
    
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root)
    {
        if(!root)
            return NULL;
        
        int lefty = max_height(root->left);
        int righty = max_height(root->right);
        
        if(lefty == righty)
            return root;
        
        else if(lefty > righty)
            return lcaDeepestLeaves(root->left);
        else if(righty > lefty)
            return lcaDeepestLeaves(root->right);
        
        return NULL;
    }
};