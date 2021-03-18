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
class Solution
{
public:
    
    vector<TreeNode*> constructBST(int start,int end)
    {
        vector<TreeNode*> res;
        
        if(start > end)
        {
            res.push_back(NULL);
            return res;
        }
        
        for(int i = start;i<=end;i++)
        {
            vector<TreeNode*> left = constructBST(start,i-1);
            vector<TreeNode*> right = constructBST(i+1,end); 
            
            for(TreeNode* l:left)
            {
                for(TreeNode* r:right)
                {
                    TreeNode* root = new TreeNode(i); 
                    root->left = l;                   
                    root->right = r;                   
                    
                    res.push_back(root);              
                }
            }
        }
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) 
    {
        return constructBST(1,n);
    }
};