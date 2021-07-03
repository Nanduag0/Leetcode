#define ll long long
class Solution {
    const ll mod = 1e9 + 7;
    ll dp[4][3][5001];
    
    ll fun(int i, int j, int n)
    {
        if(i>=4 || j>=3 || i<0 || j<0 || (i==3 && j!=1))
            return 0;
        if(n == 1)
            return 1;
        
        if(dp[i][j][n] != -1)
            return dp[i][j][n]%mod;
        
        //int ans = 0;
        dp[i][j][n] =   fun(i-2, j-1, n-1)%mod+
                        fun(i-2, j+1, n-1)%mod+
                        fun(i-1, j+2, n-1)%mod+
                        fun(i+1, j+2, n-1)%mod+
                        fun(i+2, j+1, n-1)%mod+
                        fun(i+2, j-1, n-1)%mod+
                        fun(i+1, j-2, n-1)%mod+
                        fun(i-1, j-2, n-1)%mod;
        
        return dp[i][j][n]%mod;
    }
public:
    int knightDialer(int n) 
    {
        ll ans = 0;
        memset(dp, -1, sizeof(dp));
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                ans = (ans + fun(i, j, n)) % mod;
                //ans %= mod;
            }
        }
        
        return (int)ans;
    }
};