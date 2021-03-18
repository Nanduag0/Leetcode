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
    
    vector<vector<int>> ans;
    
    void helper(TreeNode* root, vector<int>& temp, int sum, int targetSum)
    {
        if(!root)
            return ;
        
        temp.push_back(root -> val);
        
        if(sum+root->val==targetSum && !root->left && !root->right)
        {
            ans.push_back(temp);
         //   return ;
        }
        
        helper(root->left, temp, sum+root->val, targetSum);
        helper(root->right, temp, sum+root->val, targetSum);
        
        temp.pop_back();
    }
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
        if(!root)
            return {};
        vector<int> temp;
        
        helper(root, temp, 0, targetSum);
        return ans;
    }
};