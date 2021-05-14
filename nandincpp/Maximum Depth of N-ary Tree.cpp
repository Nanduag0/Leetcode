/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) 
    {
        if(!root)
            return {};
        vector<vector<int>> ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sizee = q.size();
            vector<int> temp;
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                temp.push_back(p->val);
                
                for(auto j : p->children)
                {
                    if(j != NULL)
                        q.push(j);
                }
            }
            ans.push_back(temp);
        }
        return ans.size();
    }
};