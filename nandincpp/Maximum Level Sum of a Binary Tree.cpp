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
    int maxLevelSum(TreeNode* root) 
    {
        if(!root)
            return 0;
        int ans, maxi = INT_MIN, level = 1;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sizee = q.size();
            vector<int> temp;
            int sum = 0;
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                sum += p->val;
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
           
            if(sum > maxi)
            {
                ans = level;
                maxi = sum;
            }
            level++;
        }
        return ans;
    }
};