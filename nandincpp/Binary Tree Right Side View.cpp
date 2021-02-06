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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        TreeNode* now;
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            if(q.front() != NULL)
            {
                now = q.front();
                
                if(now->left)
                    q.push(now->left);
                if(now->right)
                    q.push(now->right);
                
                q.pop();
            }
            
            else
            {
                ans.push_back(now->val);
                q.pop();
                
                if(!q.empty())
                    q.push(NULL);
            }
        }
        
        return ans;
    }
};