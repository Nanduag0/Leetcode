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
    
    bool helper(TreeNode* root, long long start, long long end)
    {
        if(!root)
            return true;
        
        if((root->val)>start && (root->val)<end)
            return helper(root->left, start, root->val) && helper(root->right, root->val, end);
        
        return false;
    }
    
public:
    bool isValidBST(TreeNode* root)
    {
       // long long x = INT_MIN, y = INT_MAX; ]
        return helper(root, -2147483650, 2147483650);
    }
};