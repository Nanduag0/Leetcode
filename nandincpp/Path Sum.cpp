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
 //   int sum = 0;
    bool helper(TreeNode* root, int targetSum, int sum)
    {
        if(!root)
            return 0;
        
        if(!root->left && !root->right)
        {
            if(sum+root->val == targetSum)
                return 1;
            
            return 0;
        }
        
        return helper(root->left, targetSum, sum+root->val)||helper(root->right, targetSum, sum+root->val);
    }
    
public:
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        return helper(root, targetSum, 0);
    }
};