class Solution {
public:
    int minTaps(int n, vector<int>& r) 
    {
        //int n = r.size();
        vector<int> dp(n+1, 100005);
        dp[0] = 0;
        
        for(int i=0;i<=n;i++)
        {
            int left = max(0, i-r[i]);
            int right = min(n, i+r[i]);
            
            for(int j=left+1;j<=right;j++)
            {
                dp[j] = min(dp[j], dp[left]+1);
            }
        }
        
        return (dp[n]==100005) ? -1 : dp[n];
    }
};