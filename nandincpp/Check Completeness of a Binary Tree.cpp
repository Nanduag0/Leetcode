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
    bool isCompleteTree(TreeNode* root) 
    {
        queue<TreeNode*> q;
        q.push(root);
        bool has_child = 1;
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            if(p->left && !has_child)
                return 0;
            if(!p->left)
                has_child = 0;
            else
                q.push(p->left);
            
            if(p->right && !has_child)
                return 0;
            if(!p->right)
                has_child = 0;
            else
                q.push(p->right);
        }
        
        return 1;
    }
};