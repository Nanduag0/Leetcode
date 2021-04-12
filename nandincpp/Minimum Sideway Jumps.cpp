class Solution {
public:
    int minSideJumps(vector<int>& obs)
    {
        int n = obs.size();
        vector<vector<int>> dp(n+1, vector<int> (4, n+1));
        
        dp[0][2] = 0;
        dp[0][1] = dp[0][3] = 1;
        
        for(int i=1;i<n;i++)
        {
            if(obs[i] != 1)
                dp[i][1] = dp[i-1][1];
            if(obs[i] != 2)
                dp[i][2] = dp[i-1][2];
            if(obs[i] != 3)
                dp[i][3] = dp[i-1][3];
            
            if(obs[i] != 1)
                dp[i][1] = min({dp[i][1], 1+dp[i][2], 1+dp[i][3]});
            if(obs[i] != 2)
                dp[i][2] = min({dp[i][2], 1+dp[i][1], 1+dp[i][3]});
            if(obs[i] != 3)
                dp[i][3] = min({dp[i][3], 1+dp[i][2], 1+dp[i][1]});
        }
        
        return min({dp[n-1][1], dp[n-1][3], dp[n-1][2]});
    }
};