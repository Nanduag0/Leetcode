class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<int> dp(amount+1, 0);
        int n = coins.size();
        dp[0] = 1;
        
        //
        
        for(int j=0;j<n;j++)
        {
            for(int i=1;i<=amount;i++)
            {
                if(i-coins[j] >= 0)
                    dp[i] += dp[i-coins[j]];
            }
        }
        return dp[amount];
    }
};