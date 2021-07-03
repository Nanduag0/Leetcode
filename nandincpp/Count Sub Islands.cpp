class Solution {
    void flood_fill(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int& flag)
    {
        if(i<0 || j<0 || i>=grid2.size() || j>=grid2[0].size() || grid2[i][j]==0)
            return ;
        
        if(grid1[i][j] == 0)
           flag = 0;
        grid2[i][j] = 0;
        
        flood_fill(grid1, grid2, i-1, j, flag);
        flood_fill(grid1, grid2, i, j-1, flag);
        flood_fill(grid1, grid2, i+1, j, flag);
        flood_fill(grid1, grid2, i, j+1, flag);
        
        //return 1;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int n = grid2.size(), m = grid2[0].size();
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid2[i][j] == 1)
                {
                    int flag = 1;
                    flood_fill(grid1, grid2, i, j, flag);
                    ans += flag;
                }
            }
        }
        
        return ans;
    }
};