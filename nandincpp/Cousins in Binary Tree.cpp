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
    
    int height(TreeNode* root, int &parent, int value, int heightt)
    {
        if(!root)
            return 0;
        if(root->val == value)
            return heightt;
        
        parent = root->val;
        int left = height(root->left, parent, value, heightt+1);
        
        if(left)
            return left;
        
        parent = root->val;
        int right = height(root->right, parent, value, heightt+1);
        
        return right;
    }
    
public:
    bool isCousins(TreeNode* root, int x, int y)
    {
        if(root->val==x || root->val==y)
            return 0;
        
        int x_parent = -1;
        int xheight = height(root, x_parent, x, 0);
        
        int y_parent = -1;
        int yheight = height(root, y_parent, y, 0);
        
        if(x_parent!=y_parent && xheight==yheight)
            return 1;
        
        return 0;
    }
};