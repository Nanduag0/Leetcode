class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) 
    {
        int n = A.size();
        int m = B.size();
        
        int dp[1001][1001] = {};
        int ans = 0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(A[i-1] == B[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans, dp[i][j]);   
                }
            }
        }
        
        return ans;
    }
};