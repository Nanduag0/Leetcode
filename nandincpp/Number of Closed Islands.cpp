class Solution {
    int row[4] = {-1, 0, 1, 0}, col[4] = {0, -1, 0, 1};
public:
    void fill(vector<vector<int>> &grid, int r, int c) 
    {
        if(r >= grid.size() || c >= grid[0].size() || r < 0 || c < 0 || grid[r][c] == 1) 
        {
            return ;
        }
        grid[r][c] = 1;
        
        // fill(grid, r + 1, c);
        // fill(grid, r, c + 1);
        // fill(grid, r - 1, c);
        // fill(grid, r, c - 1);
        for(int k=0;k<4;k++)
            fill(grid, r+row[k], c+col[k]);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(i == 0 || j == 0 || i == r-1 || j == c-1) {
                    if(grid[i][j] == 0) {
                        fill(grid, i, j);
                    }
                }
            }
        }
        
        int ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 0) {
                    ans++;
                    fill(grid, i, j);
                }
            }
        }
        return ans;
    }
};