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
    TreeNode* fun(vector<int>& a, int start, int end)
    {
        if(start > end)
            return NULL;
        int maxi = -1;
        int idx = -1;
        
        for(int index=start;index<=end;index++)
        {
            if(a[index] > maxi)
            {
                maxi = a[index];
                idx = index;
            }
        }
        
        TreeNode* root = new TreeNode(maxi);
        
        root->left = fun(a, start, idx-1);
        root->right = fun(a, idx+1, end);
        return root;
    }
    
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& a) 
    {
        int n = a.size();
        return fun(a, 0, n-1);
    }
};