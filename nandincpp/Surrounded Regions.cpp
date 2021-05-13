class Solution {
    vector<int> row = {0, 0, 1, -1}, col {1, -1, 0, 0};
    
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j)
    {
        queue<pair<int, int>> q;
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
                
                if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && grid[x][y]=='O' && vis[x][y]==0)
                {
                    vis[x][y] = 1;
                    q.push({x, y});
                }
            }
        }
    }
public:
    void solve(vector<vector<char>>& grid) 
    {
        int r = grid.size();
        int c = grid[0].size();
        
        vector<vector<int>> vis(r, vector<int>(c, 0));
        
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]=='O' && vis[i][0]==0)
                bfs(grid, vis, i, 0);
            if(grid[i][c-1]=='O' && vis[i][c-1]==0)
                bfs(grid, vis, i, c-1);
        }
        
        for(int i=1;i<c-1;i++)
        {
            if(grid[0][i]=='O' && vis[0][i]==0)
                bfs(grid, vis, 0, i);
            if(grid[r-1][i]=='O' && vis[r-1][i]==0)
                bfs(grid, vis, r-1, i);
        }
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                grid[i][j] = (vis[i][j]==0) ? 'X' : 'O';
        
        //return grid;
    }
};