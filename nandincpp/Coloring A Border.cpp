class Solution {
    int row[4] = {0,1,0,-1};
    int col[4] = {1,0,-1,0};
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int r0, int c0, int color) 
    {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> res = grid;
        
        int src_col = grid[r0][c0];
        grid[r0][c0] = 1001;
        
        q.push({r0, c0});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            
            bool is_bound = 0;
            for(int i=0;i<4;i++)
            {
                int nx = x + row[i];
                int ny = y + col[i];
                
                if(nx==m || nx==-1 || ny==n || ny==-1 || (grid[nx][ny]!=1001 && grid[nx][ny]!=src_col))
                    is_bound = 1;
                
                if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==src_col)
                {
                    q.push({nx, ny});
                    grid[nx][ny] = 1001;
                }
            }
            
            if(is_bound)
                res[x][y] = color;
        }
        
        return res;
    }
};