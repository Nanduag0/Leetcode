class Solution {
    vector<vector<int>> adj[1001];
    vector<int> time, cost;
    
    int djikstra(int src, int dest, int maxTime)
    {
        for(int i=1;i<=dest;i++)
        {
            time[i] = INT_MAX;
            cost[i] = INT_MAX;
        }
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({cost[src], time[src], src});
        
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            
            int c = p[0];
            int t = p[1];
            int v = p[2];
            
            for(int i=0;i<adj[v].size();i++)
            {
                if(t+adj[v][i][1] <= maxTime)
                {
                    if(c+adj[v][i][2] < cost[adj[v][i][0]])
                    {
                        cost[adj[v][i][0]] = c + adj[v][i][2];
                        time[adj[v][i][0]] = t + adj[v][i][1];
                        
                        pq.push({cost[adj[v][i][0]], time[adj[v][i][0]], adj[v][i][0]});
                    }
                    
                    else if(t+adj[v][i][1] < time[adj[v][i][0]])
                    {
                        time[adj[v][i][0]] = t + adj[v][i][1];
                        
                        pq.push({c+adj[v][i][2], time[adj[v][i][0]], adj[v][i][0]});
                    }
                }
            }
        }
        return cost[dest];
    }
    
public:
    int minCost(int maxTime, vector<vector<int>>& e, vector<int>& fees) 
    {
        int n = fees.size();
        for(int i=0;i<e.size();i++)
        {
            int x = e[i][0];
            int y = e[i][1];
            int t = e[i][2];
            
            adj[x].push_back({y, t, fees[y]});
            adj[y].push_back({x, t, fees[x]});
        }
        
        time.resize(n+1), cost.resize(n+1);
        cost[0] = fees[0];
        time[0] = 0;
        int ans = djikstra(0, n-1, maxTime);
        
        return (ans==INT_MAX) ? -1 : ans;
    }
};