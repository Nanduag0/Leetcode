class Solution {
public:
    
    int help(vector<vector<int>>& grid, int i, int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        
        int temp = grid[i][j];
        
        grid[i][j] = 0;
        
        int op1 = help(grid, i+1, j);
        int op2 = help(grid, i-1, j);
        int op3 = help(grid, i, j-1);
        int op4 = help(grid, i, j+1);
        
        grid[i][j] = temp;
        return ( grid[i][j] + max({op1, op2, op3, op4}) );
    }
    int getMaximumGold(vector<vector<int>>& grid) 
    {
        int call, ans = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] != 0)
                {
                    call = help(grid,i,j);
                    ans = max(call ,ans);
                }
            }
        }
        
        return ans;
    }
        
    
};