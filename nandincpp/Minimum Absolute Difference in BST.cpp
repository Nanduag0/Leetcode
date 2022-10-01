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
    vector<int> v;
    
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return ;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
public:
    int getMinimumDifference(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        int ans = 10004;
        
        inorder(root);
        for(int i=0;i<v.size()-1;i++)
            ans = min(ans, v[i+1]-v[i]);
        
        return ans;
    }
};