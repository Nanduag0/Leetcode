class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int ans = 0, m = grid.size(), n = grid[0].size();
        for(int row=0;row<m;row++)
        {
            for(int col=0;col<n;col++)
            {
                if(grid[row][col] < 0)
                {
                    ans += (n-col);
                    break;
                }
            }
        }
        return ans;
    }
};