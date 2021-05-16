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
            return 1;
        
        int lefty = fun(root->left);
        int righty = fun(root->right);
        
        if(lefty==-1 || righty==-1)
        {
            ans++;
            return 0;
        }
        
        if(lefty==0 || righty==0)
            return 1;
        
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) 
    {
       if(fun(root) == -1)
           ans++;
        
        return ans;
    }
};