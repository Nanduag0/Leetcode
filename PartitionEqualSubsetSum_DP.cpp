class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        int n=sum/2;
        if(sum&1)
        {
            return 0;
        }
        bool  dp[N+1][n+1];
        for(int i=1;i<=n;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(arr[i-1]<=j)
                {
                   dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j]; 
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }
     if(dp[N][n]==true)
     {
         return 1 ;
     }
     else
     return 0;
    }
};