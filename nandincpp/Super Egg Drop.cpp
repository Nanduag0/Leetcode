class Solution {
public:
    int superEggDrop(int k, int n) 
    {
        vector<vector<int>> dp(k+1, vector<int>(n+1, 0));
     
        for(int i=0;i<=k;i++) 
        {
            dp[i][0] = 0;
            dp[i][1] = 1;
        }
        
        for(int i=0;i<=n;i++)
        {
            dp[1][i] = i; 
        }
        
        for(int i=2;i<=k;i++) 
        {
            for(int j=2;j<=n;j++) 
            {
                dp[i][j] = INT_MAX; 
                int low = 0, high = j;
                
                while(low <= high)
                {
                    int mid = low + (high-low)/2;
                    int case1 = dp[i-1][mid-1], case2 = dp[i][j-mid];
                    int res = max(dp[i-1][mid-1], dp[i][j-mid]) + 1;
                    
                    dp[i][j] = min(dp[i][j], res);
                    
                    if(case1 < case2)
                        low = mid+1;
                    else
                        high = mid-1;
                }
            }
        }
        
        return dp[k][n];
    }
};