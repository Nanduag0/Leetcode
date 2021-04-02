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
    bool isEvenOddTree(TreeNode* root) 
    {
        queue<TreeNode*> q;
        q.push(root);
        bool even = 1;
        
        if(!root)
            return 1;
        
        while(q.size() > 0)
        {
            int sizee = q.size();
            int prev = even ? INT_MIN : INT_MAX;
            
            while(sizee--)
            {
                //level 
                TreeNode* now = q.front();
                q.pop();
                
                if(even && (now->val%2==0 || prev>=now->val))
                    return 0;
                if(!even && (now->val%2!=0 || prev<=now->val))
                    return 0;
                
                prev = now->val;
                
                if(now -> left)
                    q.push(now->left);
                if(now -> right)
                    q.push(now->right);
            }
            even = 1 - even;
        }
         return 1;
    }

};