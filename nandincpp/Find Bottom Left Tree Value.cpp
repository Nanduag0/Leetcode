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
    int findBottomLeftValue(TreeNode* root) 
    {
        if(!root)
            return NULL;
        
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* ans;
        
        while(!q.empty())
        {
            int sizee = q.size();
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                if(i == 0)
                    ans = p;
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
        }
        
        return ans->val;
    }
};