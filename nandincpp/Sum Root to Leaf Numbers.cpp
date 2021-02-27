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
    
    int sum = 0;
    
    void helper(TreeNode* root, string temp)
    {
        if(!root)
            return ;
        
        temp += to_string(root->val);
        
        if(!root->left && !root->right)
            sum += stoi(temp);
        
        helper(root->left, temp);
        helper(root->right, temp);
    }
    
public:
    int sumNumbers(TreeNode* root)
    {
        if(!root)
            return 0;
        string temp = "";
        
        helper(root, temp);
        return sum;
    }
};