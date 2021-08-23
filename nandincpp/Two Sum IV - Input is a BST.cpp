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
    vector<int> a;
    
    void inorder(TreeNode* root)
    {
        if(!root)
            return ;
        
        inorder(root -> left);
        a.push_back(root -> val);
        inorder(root -> right);
    }
    
public:
    bool findTarget(TreeNode* root, int k) 
    {
        if(!root)
            return 0;
        
        inorder(root);
        
        int i = 0, j = a.size()-1;
        while(i < j)
        {
            if(a[i]+a[j] == k)
                return 1;
            else if(a[i]+a[j] > k)
                j--;
            else
                i++;
        }
        
        return 0;
    }
};