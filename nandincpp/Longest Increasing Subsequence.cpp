class Solution {
public:
    int lengthOfLIS(vector<int>& a)
    {
        int n = a.size();
        int dp[n+1];
        for(int i=0;i<n;i++)
            dp[i] = 1;
        
        int just, ans = INT_MIN;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j] < a[i])
                {
                    just = 1+dp[j];
                    dp[i] = max(dp[i], just);
                }
            }
        }
        
        for(int i=0;i<n;i++)
            ans = max(ans, dp[i]);
        
        return ans;
    }
};