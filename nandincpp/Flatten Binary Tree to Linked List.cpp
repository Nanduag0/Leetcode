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
public:
    void flatten(TreeNode* root) 
    {
        stack<TreeNode*> s;
        if(!root)
            return ;
        
        s.push(root);
        
        while(!s.empty())
        {
            TreeNode* now = s.top();
            s.pop();
                
                
            if(now->right)
                s.push(now->right);
            if(now->left)
                s.push(now->left);
            
            if(!s.empty())
                now->right = s.top();
            now->left = NULL;
        }
        
    }
};