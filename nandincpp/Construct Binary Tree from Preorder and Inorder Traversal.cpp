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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int left, int right, int& root_idx)
    {
        if(left > right)
            return NULL;
        int pivot = left;
        
        //search inorder[pivot]==preorder[root_idx];
        while(inorder[pivot] != preorder[root_idx])
            pivot++;
        
        TreeNode* NewNode = new TreeNode (inorder[pivot]);
        root_idx++;
        
        //search in its left and right.
        NewNode->left = build(preorder, inorder, left, pivot-1, root_idx);
        NewNode->right = build(preorder, inorder, pivot+1, right, root_idx);
        
        return NewNode;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        int root_idx = 0;
        return build(preorder, inorder, 0, inorder.size()-1, root_idx);        
    }
};