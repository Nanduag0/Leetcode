class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides)
    {
        unordered_map<int, vector<pair<int, int>>> m;
        for(auto i : rides)
            m[i[0]].push_back({i[1], i[2]});
        
        vector<long> dp(n+1);
        
        for(int i=n-1;i>=1;i--)
        {
            dp[i] = dp[i+1];
            
            for(auto [end, tip] : m[i])
            {
                dp[i] = max(dp[i], dp[end] + end-i+tip);
            }
        }
        
        return dp[1];
    }
};