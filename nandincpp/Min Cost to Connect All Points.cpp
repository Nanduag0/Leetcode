class Solution {
    int dist(vector<int>& a, vector<int>& b)
    {
        return abs(a[0]-b[0]) + abs(a[1]-b[1]);
    }
public:
    int minCostConnectPoints(vector<vector<int>>& points)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        vector<bool> vis(points.size(), 0);
        vector<int> min_dist(points.size(), INT_MAX);
        
        pq.push({0, 0});
        int mst = 0;
        
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            
            int weight = p.first;
            int to = p.second;
            
            if(vis[to])
                continue;
            mst += weight;
            vis[to] = 1;
            
            for(int i=0;i<points.size();i++)
            {
                int dist_now = dist(points[i], points[to]);
                
                if(vis[i]==0 && dist_now<min_dist[i])
                {
                    min_dist[i] = dist_now;
                    pq.push({dist_now, i});
                }
            }
        }
        
        return mst;
    }
};