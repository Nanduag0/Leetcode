class Solution {
    int ans = 0;
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    ans += (i==0 || grid[i-1][j]==0) ? 1 : 0;
                    ans += (i==grid.size()-1 || grid[i+1][j]==0) ? 1 : 0;
                    ans += (j==0 || grid[i][j-1]==0) ? 1 : 0;
                    ans += (j==grid[0].size()-1 || grid[i][j+1]==0) ? 1 : 0;
                }
            }
        }
        
        return ans;
    }
};