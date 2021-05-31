/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    unordered_map<TreeNode*, TreeNode*> m;
    unordered_set<TreeNode*> vis;
    
    void getparent(TreeNode* root, TreeNode* parent)
    {
        if(!root)
            return ;
        
        m[root] = parent;
        
        getparent(root->left, root);
        getparent(root->right, root);
    }
    
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        vector<int> ans;
        if(!root)
            return {};
        getparent(root, nullptr);
        
        if(k == 0)
        {
            ans.push_back(target->val);
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(target);
        vis.insert(target);
        
        while(!q.empty() && k--)
        {
            int sizee = q.size();
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                if(p)    
                {
                        if(p->left && !vis.count(p->left))
                        {
                            q.push(p->left);
                            vis.insert(p->left);

                            if(k == 0)
                                ans.push_back(p->left->val);
                        }

                        if(p->right && !vis.count(p->right))
                        {
                            q.push(p->right);
                            vis.insert(p->right);

                            if(k == 0)
                                ans.push_back(p->right->val);
                         }

                        if(m[p] && !vis.count(m[p]))
                        {
                            q.push(m[p]);
                            vis.insert(m[p]);

                            if(k == 0)
                                ans.push_back(m[p]->val);
                        }
                }
            }
        }
        
        return ans;
    }
};