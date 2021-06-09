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
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
        return build(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }
    
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int is, int ie, int posts, int poste){
        if(posts > poste){
            return nullptr;
        }
        TreeNode* node = new TreeNode(postorder[poste]);
        int index;
        for(int i = is; i <= ie; i++){
            if(inorder[i] == node->val){
                index = i;
                break;
            }
        }
        node->left = build(inorder, postorder, is, index - 1, posts, posts + index - is - 1);
        node->right = build(inorder, postorder, index + 1, ie, posts + index -is, poste - 1);
        return node;
    }
};