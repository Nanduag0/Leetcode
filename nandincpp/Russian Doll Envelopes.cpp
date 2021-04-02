class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& e) 
    {
        int n = e.size();
        
        if(n == 0)
            return 0;
        
        vector<int> dp(n+1, 1);
        int maxi = 1;
        
        sort(e.begin(), e.end());
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(e[i][0]>e[j][0] && e[i][1]>e[j][1] && dp[i]<1+dp[j])
                    dp[i] = 1 + dp[j];
                
                maxi = max(maxi, dp[i]);
            }
        }
        return maxi;
    }
};