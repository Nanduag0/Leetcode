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
    vector<int> fun(TreeNode* root)
    {
        if(!root)
            return {};
        
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            auto p = q.front();
            v.push_back(p->val);
            q.pop();
            
            if(p->left)
                q.push(p->left);
            if(p->right)
                q.push(p->right);
        }
        return v;
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        vector<int> x = fun(root1);
        vector<int> y = fun(root2);
        vector<int> v ;
        
        v.insert(v.begin(), x.begin(), x.end());
        v.insert(v.end(), y.begin(), y.end());
        
        sort(v.begin(), v.end());
        return v;
    }
};