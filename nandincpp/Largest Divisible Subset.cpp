class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& a)
    {
        int n = a.size();
        sort(a.begin(), a.end());
        
        vector<int> dp(n+1, 0);
        vector<int> par(n+1);
        int max_len = 0, max_idx;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]%a[j]==0 && dp[j]+1>dp[i])
                {
                    dp[i] = 1 + dp[j];
                    
                    par[i] = j;
                }
            }
            
            if(dp[i] > max_len)
            {
                max_len = dp[i];
                max_idx = i;
            }
        }
        
        vector<int> ans;
        for(int i=0;i<=max_len;i++)
        {
            ans.push_back(a[max_idx]);
            max_idx = par[max_idx];
        }
        
        return ans;
    }
};