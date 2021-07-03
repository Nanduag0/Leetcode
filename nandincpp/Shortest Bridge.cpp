class Solution {
    vector<int> row = {-1, 0, 1, 0}, col = {0, -1, 0, 1};
    int R, C;
    
    void flood_fill(vector<vector<int>>& grid, int i, int j, vector<pair<int, int>>& v)
    {
        if(i<0 || i>=R || j<0 || j>=C || grid[i][j]==0)
            return ;
        v.push_back({i, j});
        grid[i][j] = 0;
        
        for(int k=0;k<4;k++)
            flood_fill(grid, i+row[k], j+col[k], v);
    }
public:
    int shortestBridge(vector<vector<int>>& grid) 
    {
        vector<pair<int, int>> x, y;
        R = grid.size();
        C = grid[0].size();
        int cnt = 0;
        
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                if(grid[i][j]==1 && cnt==0)
                {
                    flood_fill(grid, i, j, x);
                    cnt++;
                }
                else if(grid[i][j]==1 && cnt==1)
                    flood_fill(grid, i, j, y);
             }
         }
        
        int ans = INT_MAX;
        for(auto i : x)
        {
            for(auto j : y)
            {
                ans = min(ans, abs(i.first - j.first) + abs(i.second - j.second));
            }
        }
        
        return --ans;
    }
};