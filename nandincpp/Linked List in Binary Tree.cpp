/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool fun(ListNode* head, TreeNode* root)
    {
        if(!head)
            return 1;
        if(!root)
            return 0;
        
        return head->val==root->val && (fun(head->next, root->left) || fun(head->next, root->right)); 
    }
    
public:
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        if(!head)
            return 1;
        if(!root)
            return 0;
        
        return fun(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};