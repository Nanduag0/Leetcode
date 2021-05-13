class Solution {
    vector<int> row = {0, 0, 1, -1}, col {1, -1, 0, 0};
    int cnt;
    
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j)
    {
        queue<pair<int, int>> q;
        cnt = 0;
        q.push({i, j});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            vis[p.first][p.second] = 1;
            
            for(int k=0;k<4;k++)
            {
                int x = p.first + row[k];
                int y = p.second + col[k];
                
                if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && grid[x][y]==1 && vis[x][y]==0)
                {
                    vis[x][y] = 1;
                    cnt++;
                    q.push({x, y});
                }
            }
        }
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int r = grid.size();
        int c = grid[0].size();
        //int ans = 0;
        int res = -1;
        
        vector<vector<int>> vis(r, vector<int>(c, 0));
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    bfs(grid, vis, i, j);
                    res = max(res, cnt);
                }
            }
        }
        
        return res+1;
    }
};