#define ll long long
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) 
    {
        vector<vector<ll>> dist(n, vector<ll> (n, INT_MAX));
        
        for(int i=0;i<n;i++)
            dist[i][i] = 0;
        
        for(auto &i : edges)
        {
            ll x = i[0], y = i[1];
            ll w = i[2];
            
            dist[x][y] = dist[y][x] = w;
        }
        
        //flyod warshal
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
        
        int prev = n, ans = 0;
        for(int i=0;i<n;i++)
        {
            int kitna = 0;
            for(int j=0;j<n;j++)
            {
                if(dist[i][j] <= distanceThreshold)
                    kitna++;
            }
                
                if(kitna <= prev)
                {
                    prev = kitna;
                    ans = i;
                }
        }
        
        return ans;
    }
};