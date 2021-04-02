class Solution {
public:
    int findMaxForm(vector<string>& s, int m, int n)
    {
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        int one, zero;
        
        for(auto i : s)
        {
            one = count(i.begin(), i.end(), '1');
            zero = count(i.begin(), i.end(), '0');
            
            for(int x=n;x>=one;x--)
            {
                for(int y=m;y>=zero;y--)
                {
                    dp[x][y] = max(dp[x][y], dp[x-one][y-zero]+1);
                }
            }
        }
        
        return dp[n][m];
    }
};