class Solution {
    int dp[51][51][51];
    
    int helper(vector<vector<int>>& grid, int r1, int c1, int c2, int n)
    {
        int r2 = r1 + c1 - c2;
        // Base Case
        if(r1>=n || r2>=n || c1>=n || c2>=n || grid[r1][c1]==-1 || grid[r2][c2]==-1)
            return INT_MIN;
        
        // Lookup
        if(dp[r1][c1][c2] != -1)
            return dp[r1][c1][c2];
        
        // Rec Case
        int ans = grid[r1][c1];
        if(r1==n-1 && c1==n-1)
            return ans;
        
        if(c1 != c2)
            ans += grid[r2][c2];
        
        int temp = max({helper(grid, r1, c1+1, c2+1, n), helper(grid, r1+1, c1, c2, n), helper(grid, r1, c1+1, c2, n), helper(grid, r1+1, c1, c2+1, n)});
        
        ans += temp;
        
        return dp[r1][c1][c2] = ans;        
    }
    
public:
    int cherryPickup(vector<vector<int>>& grid) 
    {        
        memset(dp, -1, sizeof(dp)); 
        int n = grid.size();
        
        return max(0, helper(grid, 0, 0, 0, n));
    }
};