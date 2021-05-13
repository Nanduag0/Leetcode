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
public:
    vector<int> largestValues(TreeNode* root) 
    {
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sizee = q.size();
         //   q.pop();
            
            int maxi = INT_MIN;
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                maxi = max(maxi, p->val);
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
    }
};