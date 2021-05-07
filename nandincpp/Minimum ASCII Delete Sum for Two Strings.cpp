class Solution {
    int lcs(string a, string b)
    {
        int m = a.size();
        int n = b.size();
        
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                
                else if(a[i-1] == b[j-1])
                    dp[i][j] = a[i-1] + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }
    
public:
    int ans = 0;
    int minimumDeleteSum(string s1, string s2)
    {
        int x = lcs(s1, s2);
        
        for(auto i : s1)
            ans += i;
        for(auto i : s2)
            ans += i;
        
        ans -= 2*x;
        return ans;
    }
};