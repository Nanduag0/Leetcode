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
    int countNodes(TreeNode* root) 
    {
        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;
        
        while(!q.empty())
        {
           int sizee = q.size();
            
           for(int i=0;i<sizee;i++)
           {
               ans++;
               auto p = q.front();
                q.pop();
            
                if(p->left)
                q.push(p->left);
                if(p->right)
                q.push(p->right);
           }
            
        }
        return ans;
    }
};