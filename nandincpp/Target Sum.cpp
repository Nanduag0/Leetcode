class Solution {
    int subset(vector<int>& a, int sum)
    {
        int n = a.size();
        int dp[n+1][sum+1];
        
        memset(dp, 0, sizeof(dp));
        
        dp[0][0] = 1;
        for(int i=1;i<=n;i++)
        {
            if(a[i-1] == 0)
                dp[i][0] = dp[i-1][0] * 2;
            else
                dp[i][0] = dp[i-1][0];
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j-a[i-1] >= 0)
                {
                    dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
                }
                
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][sum];
    }
    
public:
    int findTargetSumWays(vector<int>& a, int target)
    {
        int sum = 0;
        for(auto &i : a)
            sum += i;
        
        int s1 = (target+sum) >> 1;
        
        if(s1>sum || ((target+sum)&1))
            return 0;
        
        return subset(a, s1);
    }
};