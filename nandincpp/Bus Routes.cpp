class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int src, int dest) 
    {
        unordered_map<int, vector<int>> route_map;
        for(int i=0;i<routes.size();i++)
        {
            for(auto j : routes[i])
                route_map[j].push_back(i);
        }
        
        queue<pair<int, int>> q;
        q.push({src, 0});
        
        unordered_set<int> vis;
        vis.insert(src);
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int now = p.first;
            int bus = p.second;
            
            if(now == dest)
                return bus;
            
            for(auto i : route_map[now])
            {
                for(auto j : routes[i])
                {
                    if(!vis.count(j))
                    {
                        vis.insert(j);
                        q.push({j, bus+1});
                    }
                }
                routes[i].clear();
            }
        }
        
        return -1;
    }
};