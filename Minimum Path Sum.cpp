class Solution {
public:
    int minPathSum(vector<vector<int>>& dp) 
    {
        int n = dp.size();
        int m = dp[0].size();
        
        for(int i=1;i<m;i++)
            dp[0][i] += dp[0][i-1];
        
        for(int i=1;i<n;i++)
            dp[i][0] += dp[i-1][0];
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + dp[i][j];
            }
        }
        
        return dp[n-1][m-1];
    }
};