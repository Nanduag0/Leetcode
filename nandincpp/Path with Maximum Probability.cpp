class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) 
    {
        vector<vector< pair<int, double> >> g(n);
        
        for(int i=0;i<edges.size();i++)
        {
            g[edges[i][0]].push_back({edges[i][1], prob[i]});
            g[edges[i][1]].push_back({edges[i][0], prob[i]});
        }
        
        priority_queue<pair<double, int>> pq;
        vector<bool> vis(n ,0);
        
        pq.push({(double)1.0, start});
        
        vector<double> ans(n ,(double)0.0);
        ans[start] = 1.0;
        
        while(!pq.empty())
        {
            auto p =pq.top();
            pq.pop();
            
            int node = p.second;
            double prob_here = p.first;
            
            if(!vis[node])
            {
                vis[node] = 1;
                
                for(auto x : g[node])
                {
                    if(ans[x.first] < x.second*prob_here)
                    {
                        ans[x.first] = x.second*prob_here;
                        pq.push({ans[x.first], x.first});
                    }
                }
            }
        }
        
        return ans[end];
    }
};