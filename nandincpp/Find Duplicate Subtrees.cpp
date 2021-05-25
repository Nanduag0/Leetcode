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
    unordered_map<string, int> m;
    vector<TreeNode*> ans;
    
    string dfs(TreeNode* root)
    {
        if(!root)
            return "x";
        
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        
        string temp = to_string(root->val) + 'x' + left + 'x' + right;
        m[temp]++;
        
        if(m[temp] == 2)
            ans.push_back(root);
        
        return temp;
    }
    
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        if(!root)
            return {};
        
        dfs(root);
        return ans;
    }
};