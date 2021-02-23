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
    int widthOfBinaryTree(TreeNode* root)
    {
        if(!root)
            return 0;
        
        queue< pair<TreeNode*, int> > q;
        q.push({root, 0});
        int ans = 1;
        
        while(!q.empty())
        {
            int start = q.front().second;
            int end = q.back().second;
            
            ans = max(ans, end-start+1);
            
            int sizee = q.size();
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                int index = p.second - start;
                
                if(p.first -> left)
                    q.push({p.first -> left, 2*index+1});
                if(p.first -> right)
                    q.push({p.first -> right, 2*index+2});
            }
        }
        
        return ans;
    }
};