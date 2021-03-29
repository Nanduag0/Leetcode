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
    
    vector<int> ans;
    int  i = 0;
    
    bool dfs(TreeNode* root, vector<int> &v)
    {
        if(!root)
            return 1;
        if(root->val != v[i])
            return 0;
        else
            i++;
        
        if(root->left!=NULL && root->left->val!=v[i])
        {
            ans.push_back(root->val);
            return dfs(root->right, v) && dfs(root->left, v);
        }
        else
            return dfs(root->left, v) && dfs(root->right, v);
    }
    
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& v)
    {
        if(dfs(root, v))
            return ans;
        
        return {-1};
    }
};