typedef pair <int,int> pa;
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector <vector<pa>>v(n);
        
        for(auto i : flights)
        {
            v[i[0]].push_back({i[1],i[2]});
        }
        
        queue <pa> q;
        q.push({src,0});
        
        int level = 0;
        vector <int> dist(n,INT_MAX);
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                pa p = q.front();
                q.pop();
                
                int u = p.first;
                int wt = p.second;
                
                for(int i=0;i<v[u].size();i++)
                {
                    pa tmp = v[u][i];
                    
                    int dest = tmp.first;
                    int dest_wt = tmp.second;
                    if(dist[dest] > wt + dest_wt)
                    {
                        dist[dest] = wt+dest_wt;
                        q.push({dest,dist[dest]});
                    }
                }
                
            }
            
            level++;
            
            if(level > k)
                break;
        }
        
        return dist[dst] != INT_MAX ? dist[dst] : -1;
    }
};