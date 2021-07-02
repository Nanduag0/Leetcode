class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) 
    {
        vector<vector< pair<int, int> >> g(n);
        
        for(int i=0;i<red_edges.size();i++)
            g[red_edges[i][0]].push_back({red_edges[i][1], 0});
        for(int i=0;i<blue_edges.size();i++)
            g[blue_edges[i][0]].push_back({blue_edges[i][1], 1});
        
        queue< pair<int, pair<int, int>> > q;
        q.push({0, {-1, 0}});
        
        map<pair<int, int>, int> vis;
        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        
        while(!q.empty())
        {
            int sizee = q.size();
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                int now = p.first;
                int color = p.second.first;
                int distance = p.second.second;
                
                vis[{color, now}] = 1;
                for(auto x : g[now])
                {
                    if(vis[{x.second, x.first}]!=1 && ((x.second==color^1) || color==-1))
                    {
                        dist[x.first] = min(dist[x.first], distance+1);
                        q.push({x.first, {x.second, distance+1}});
                    }
                }
            }
        }
        
        for(int i=0;i<dist.size();i++)
        {
            if(dist[i] == INT_MAX)
                dist[i] = -1;;
        }
        return dist;
    }
};