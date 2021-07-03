class Solution {
    vector<int> row = {0, 0, 1, -1}, col {1, -1, 0, 0};
    int ans = 0;
    
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j)
    {
        queue<pair<int, int>> q;
        q.push({i, j});
        
        while(!q.empty())
        {
            auto p =q.front();
            q.pop();
            vis[p.first][p.second] = 1;
            
            for(int k=0;k<4;k++)
            {
                int x = p.first + row[k];
                int y = p.second + col[k];
                
                if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && grid[x][y]==1 && vis[x][y]!=1)
                {
                    vis[x][y] = 1;
                    q.push({x, y});
                }
            }
        }
    }
    
public:
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int r = grid.size();
        int c = grid[0].size();
        
        vector<vector<int>> vis(r, vector<int>(c, 0));
        
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]==1 && vis[i][0]==0)
                bfs(grid, vis, i, 0);
            if(grid[i][c-1]==1 && vis[i][c-1]==0)
                bfs(grid, vis, i, c-1);
        }
        
        for(int i=1;i<c-1;i++)
        {
            if(grid[0][i]==1 && vis[0][i]==0)
                bfs(grid, vis, 0, i);
            if(grid[r-1][i]==1 && vis[r-1][i]==0)
                bfs(grid, vis, r-1, i);
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                    ans++;
            }
        }
        return ans;
    }
};