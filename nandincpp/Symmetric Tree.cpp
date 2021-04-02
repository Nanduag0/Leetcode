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
    bool helper(TreeNode* t1, TreeNode* t2)
    {
        if(!t1 && !t2)
            return 1;
        else if(!t1 || !t2)
            return 0;
        
        return (t1->val==t2->val) && helper(t1->left, t2->right) && helper(t1->right, t2->left);
    }
public:
    bool isSymmetric(TreeNode* root) 
    {
        return helper(root, root);
    }
};