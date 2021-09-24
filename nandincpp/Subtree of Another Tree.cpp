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
    bool is_equal(TreeNode* root1, TreeNode* root2)
    {
        if(!root1 || !root2)
            return root1 == root2;
        
        if(root1->val != root2->val)
            return 0;
        
        return is_equal(root1->left, root2->left) && is_equal(root1->right, root2->right);            
    }
    
public:
    bool isSubtree(TreeNode* root1, TreeNode* root2)
    {
        return is_equal(root1, root2)||
            (root1->left && isSubtree(root1->left, root2))||
            (root1->right && isSubtree(root1->right, root2));
    }
};