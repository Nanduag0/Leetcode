class Solution {
    public int findLength(int[] A, int[] B) 
    {
       int n = A.length;
        int m = B.length;
        
        int [][]dp = new int [n+1][m+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
                dp[i][j] = 0;
        }
            
        int ans = 0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(A[i-1] == B[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = Math.max(ans, dp[i][j]);   
                }
            }
        }
        
        return ans; 
    }
}