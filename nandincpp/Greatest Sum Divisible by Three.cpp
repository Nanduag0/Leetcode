class Solution {
public:
    int maxSumDivThree(vector<int>& a) 
    {
        vector<int> dp = {0, 0, 0};
        
        for(int i=0;i<a.size();i++)
        {
            vector<int> dpp = dp;
            for(auto x : dpp)
            {
                dp[(x+a[i])%3] = max(dp[(x+a[i])%3], x+a[i]);
            }
        }
        
        return dp[0];
    }
};