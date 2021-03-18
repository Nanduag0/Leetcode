class Solution {
    
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> dp(10004, 0);
        for(long long i=1;i<=amount;i++)
        {
            dp[i] = INT_MAX-1;
            for(long long j=0;j<coins.size();j++)
            {
                if(i-coins[j] >= 0)
                    dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
        
        return (dp[amount]==INT_MAX-1) ? -1 : dp[amount];
    }
};