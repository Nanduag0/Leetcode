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
    map<int, int> m;
    
    int fun(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left_sum = 0, right_sum = 0;
        
        if(root -> left)
            left_sum = fun(root -> left);
        if(root -> right)
            right_sum = fun(root -> right);
        
        int total_sum = left_sum + right_sum + root->val;
        m[total_sum]++;
        
        return total_sum;
    }
    
public:
    vector<int> findFrequentTreeSum(TreeNode* root) 
    {
        vector<int> ans;
        int max_cnt = INT_MIN;
        
        int sum = fun(root);
        
        for(auto i : m)
            max_cnt = max(max_cnt, i.second);
        
        for(auto i : m)
            if(i.second == max_cnt)
                ans.push_back(i.first);
        
        return ans;
    }
};