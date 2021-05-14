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
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }
public:
    int minDistance(string word1, string word2)
    {
        int x = lcs(word1, word2);
        int y = word1.size() + word2.size() - 2*x;
        
        return y;
    }
};