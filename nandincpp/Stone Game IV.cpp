class Solution {
public:
    bool winnerSquareGame(int n)
    {
        vector<bool> dp(n+1, 0);
        
        for(int i=0;i<=n;i++)
        {
            for(int k=1;k*k<=i;k++)
            {
                if(dp[i-k*k] == 0)
                    dp[i] = 1;
            }
        }
        
        return dp[n];
    }
};