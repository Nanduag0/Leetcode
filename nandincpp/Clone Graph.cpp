/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node)
    {
        if(!node)
            return NULL;
        
        Node* clone_graph = new Node(node -> val);
        queue<Node*> q;
        q.push(node);
        
        vector<Node*> vis(101, NULL);
        vis[node -> val] = clone_graph;
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            for(auto x : p->neighbors)
            {
                if(vis[x->val] == NULL)
                {
                    Node* clone = new Node(x->val);
                    vis[p->val]->neighbors.push_back(clone);
                    vis[x->val] = clone;
                    q.push(x);
                }
                
                else
                    vis[p->val]->neighbors.push_back(vis[x->val]);
            }
        }
        
        return clone_graph;
    }
};