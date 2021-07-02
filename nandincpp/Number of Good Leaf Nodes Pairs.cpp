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
    int ans = 0;
    vector<int> helper(TreeNode* root, int distance)
    {
        if(!root)
            return {};
        auto leftt = helper(root->left, distance);
        auto rightt = helper(root->right, distance);
        vector<int> temp;
        
        if(leftt.size()==0 && rightt.size()==0)
        {
            temp.push_back(1);
            return temp;
        }
        
        for(auto i : leftt)
        {
            for(auto j : rightt)
            {
                if((i+j) <= distance)
                    ans++;
            }
        }
        
        for(auto i : leftt)
            temp.push_back(i+1);
        for(auto i : rightt)
            temp.push_back(i+1);
        return temp;
    }
public:
    int countPairs(TreeNode* root, int distance) 
    {
        helper(root, distance);
        return ans;
    }
};