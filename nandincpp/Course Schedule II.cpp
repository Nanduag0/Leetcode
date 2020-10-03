#define pb push_back

class Solution {
    public: 
    
      bool topo(vector<vector<int>> &adj, int n, vector<int> &indegree, vector<int> &ans)
    {
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        int cnt = 0;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            
            for(auto child : adj[p])
            {
                indegree[child] --;
                
                if(indegree[child] == 0)
                    q.push(child);
            }
            
            ans.pb(p);
            cnt++;
        }
        
        if(cnt != n)
            return false;
        
        return true;
            
    }
    
//public:
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) 
    {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][1]].pb(pre[i][0]);
            indegree[pre[i][0]]++;
        }
        
        vector<int> ans;
        if( topo(adj,numCourses,indegree,ans) )
            return ans;
        
        vector<int> khali;
        return khali;
        
    }
        
    
};