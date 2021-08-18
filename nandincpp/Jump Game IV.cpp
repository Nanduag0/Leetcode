class Solution {
public:
    int minJumps(vector<int>& a)
    {
        unordered_map<int, vector<int>> adj;
        int n = a.size();
        
        for(int i=0;i<n;i++)
            adj[a[i]].push_back(i);
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<bool> vis(n+1, 0);
        
        vis[0] = 1;
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            int now = p.first;
            int step = p.second;
            
            if(now == n-1)
                return step;
            
            if(now>0 && !vis[now-1])
            {
                vis[now-1] = 1;
                q.push({now-1, step+1});
            }
            if(now<n-1 && !vis[now+1])
            {
                vis[now+1] = 1;
                q.push({now+1, step+1});
            }
            
            for(auto x : adj[a[now]])
            {
                if(!vis[x])
                {
                    vis[x] = 1;
                    q.push({x, step+1});
                }
            }
            
            adj[a[now]].clear();
        }
        
        return -1;
    }
};