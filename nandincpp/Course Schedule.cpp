#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
class Solution {
    
    bool cyclic(vector< vector<int> > &adj, vector<int> &vis, int curr)
    {
        if(vis[curr] == 2)
            return true;
        
        vis[curr] = 2;
        for(int i=0;i<adj[curr].size();i++)
        {
            if(vis[adj[curr][i]] != 1)
            {
                if( cyclic(adj,vis,adj[curr][i]) )
                    return true;
            }
        }
        
        vis[curr] = 1;
                
        return false;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) 
    {
        fast_io;
        
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<pre.size();i++)
            adj[pre[i][0]].pb(pre[i][1]);
        
        vector<int> vis(numCourses, 0);
        
        for(int i=0;i<numCourses;i++)
        {
            if(vis[i] == 0)
            {
                if(cyclic(adj,vis,i))
                    return false;
            }
        }
        
        return true;
    }        
    
};