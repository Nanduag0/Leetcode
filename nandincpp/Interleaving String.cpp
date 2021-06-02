class Solution {
    int dp[101][101];
    bool fun(string s1, string s2, string s3, int i, int j, int k)
    {
        int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
        bool ans = 0;
        
        // Base case
        if(k == n3)
        {
            if(i==n1 && j==n2)
                return 1;
            else 
                return 0;
        }
        
        // Lookup
        if(dp[i][j] != -1)
            return dp[i][j];
        
        // Rec case
        if(i<n1 && s1[i]==s3[k])
        {
            ans |= fun(s1, s2, s3, i+1, j, k+1);
        }
        if(j<n2 && s2[j]==s3[k])
        {
            ans |= fun(s1, s2, s3, i, j+1, k+1);
        }
        
        return dp[i][j] = ans;
    }
public:
    bool isInterleave(string s1, string s2, string s3) 
    {
        memset(dp, -1, sizeof(dp));
        return fun(s1, s2, s3, 0, 0, 0);
    }
};