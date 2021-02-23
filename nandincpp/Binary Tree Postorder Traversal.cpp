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
    vector<int> postorderTraversal(TreeNode* root)
    {
        stack<TreeNode* > s;
        vector<int> ans;
        
        s.push(root);
        if(!root)
            return {};
        
        while(!s.empty())
        {
            auto topp = s.top();
            ans.push_back(topp->val);
            s.pop();
            
            if(topp -> left)
                s.push(topp -> left);
            if(topp -> right)
                s.push(topp -> right);
            
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};