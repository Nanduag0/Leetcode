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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        if(!root)
            return {};
        vector<vector<int>> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        bool parity = 0;
        
        while(!q.empty())
        {
            int sizee = q.size();
            vector<int> temp;
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                temp.push_back(p->val);
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
            
            if(parity & 1)
            {
                reverse(temp.begin(), temp.end());
            }
            
            ans.push_back(temp);
            parity = 1-parity;
        }
        return ans;
    }
};