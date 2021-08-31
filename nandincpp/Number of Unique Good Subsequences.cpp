class Solution {
    const int mod = 1e9 + 7;
public:
    int numberOfUniqueGoodSubsequences(string binary) 
    {
        int dp[2][2] = {};
        
        for(auto i : binary)
        {
            int n = i - '0';
            
            if(n == 0)
            {
                dp[0][0] = 1;
                dp[1][0] = (dp[1][1] + dp[1][0]) % mod;
            }
            
            else
            {
                dp[1][1] = (dp[1][0] + dp[1][1] + 1) % mod;
            }
        }
        
        return (dp[0][0]+dp[1][1]+dp[1][0]) % mod;
    }
};