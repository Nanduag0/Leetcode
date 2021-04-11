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
    
    int DepthMax(TreeNode* root)
    {
        if(!root)
            return 0;
        return (1+max(DepthMax(root->left), DepthMax(root->right)));
    }
                
    int SumDepth(TreeNode* root, int curr, int depth)
                {
                    if(!root)
                        return 0;
                    
                    if(curr == depth)
                        return root->val;
                    
                    return SumDepth(root->left, curr+1, depth) + SumDepth(root->right, curr+1, depth);
                }
                
public:
    int deepestLeavesSum(TreeNode* root) 
    {
        int max_depth = DepthMax(root);
        int sum_max = SumDepth(root, 1, max_depth);
        
        return sum_max;
    }
};