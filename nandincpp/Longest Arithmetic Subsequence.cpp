class Solution {
public:
    int longestArithSeqLength(vector<int>& a)
    {
        int n = a.size();
        
        vector<unordered_map<int, int>> dp(n);
        int len = 2;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff = a[j] - a[i];
                
                if(dp[i].count(diff))
                    dp[j][diff] = 1 + dp[i][diff];
                else
                    dp[j][diff] = 2;
                
                len = max(len, dp[j][diff]);
            }
        }
        return len;
    }
};