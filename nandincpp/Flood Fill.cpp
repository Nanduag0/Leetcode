class Solution {
    //int row[4] = {-1, 0, 1, 0}, col[4] = {0, -1, 0, 1};
    int R,C;
    
    void flood_fill(vector<vector<int>>& grid, int i, int j, int newColor, int col)
    {
        if(i<0 || j<0 || i>=R || j>=C || grid[i][j] != col || grid[i][j]==newColor)
            return ;
        // if(grid[i][j] != col)
        //     return ;
        
        grid[i][j] = newColor;
        
        //for(int k=0;k<4;k++)
        flood_fill(grid, i-1, j, newColor, col);
        flood_fill(grid, i, j-1, newColor, col);
        flood_fill(grid, i+1, j, newColor, col);
        flood_fill(grid, i, j+1, newColor, col);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int newColor)
    {
        R = grid.size();
        C = grid[0].size();
        
        //int col = grid[sr][sc];
        flood_fill(grid, sr, sc, newColor, grid[sr][sc]);
        return grid;
    }
};