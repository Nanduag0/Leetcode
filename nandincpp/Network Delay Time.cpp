class Solution {
public:
    int networkDelayTime(vector<vector<int>>& t, int n, int k) 
    {
        vector<pair<int, int>> g[n+1];
        for(auto &i : t)
        {
            g[i[0]].push_back({i[1], i[2]});
        }
        
        vector<int> dist(n+1, INT_MAX);
        dist[k] = 0;
        
        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        pq.push({0, k});
        
        int u, v, w;
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            
            u = p.second;
            for(auto &x : g[u])
            {
                v = x.first, w = x.second;
                
                if(dist[u]+w < dist[v])
                {
                    dist[v] = w + dist[u];
                    pq.push({dist[v], v});
                }
            }
        }
        
        int ans = *max_element(dist.begin() + 1, dist.end());
        return (ans==INT_MAX)?-1:ans;
    }
};