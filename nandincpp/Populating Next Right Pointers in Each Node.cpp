/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
            return NULL;
        
        queue<Node*> q;
        q.push(root);
        Node* prev = NULL;
        
        while(!q.empty())
        {
            int sizee = q.size();
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
                
                if(prev)
                    prev -> next = p;
                prev = p;
            }
            
            prev = NULL;
        }
        return root;
    }
};