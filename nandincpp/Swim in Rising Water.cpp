class Solution {
    int row[4] = {-1, 0, 1, 0}, col[4] = {0, -1, 0, 1};
public:
    int swimInWater(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        
        vis[0][0] = 1;
        int ans = max(grid[0][0], grid[n-1][n-1]);
        pq.push({ans, 0, 0});
        
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            
            ans = max(ans, p[0]);
            // int x = p[1];
            // int y = p[2];
            
            for(int i=0;i<4;i++)
            {
                int x = p[1] + row[i];
                int y = p[2] + col[i];
                
                if(x>=0 && y>=0 && x<n && y<n && vis[x][y]==0)
                {
                    if(x==n-1 && y==n-1)
                        return ans;
                    
                    pq.push({grid[x][y], x, y});
                    vis[x][y] = 1;
                }
            }
        }
        
        return -1;
    }
};