class Solution {
    int lcs(string s1, string s2)
    {
        int m = s2.size();
        int n = s1.size();
        
        int dp[n+1][m+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(s1[i-1] == s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }
    
    int lps(string s1, string s2)
    {
        return lcs(s1, s2);
    }
    
public:
    int minInsertions(string s) 
    {
        int n = s.size();
        string s1 = s;
        reverse(s.begin(), s.end());
        
        return n - lps(s, s1);
    }
};