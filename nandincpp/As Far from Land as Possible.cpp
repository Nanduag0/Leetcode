class Solution {
    vector<int> row = {0, 0, 1, -1}, col = {1, -1, 0, 0};
    int maxi = -1;
    queue<pair<int, int>> q;
    
public:
    int maxDistance(vector<vector<int>>& grid) 
    {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                    q.push({i, j});
            }
        }
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int x = p.first + row[i];
                int y = p.second + col[i];
                
                if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && grid[x][y] == 0)
                {
                    q.push({x, y});
                    grid[x][y] = 1 + grid[p.first][p.second];
                    maxi = max(maxi, grid[x][y]);
                }
            }
        }
        
        return maxi>0 ? maxi-1 : -1;
    }
};