class Solution {
public:
    int numDecodings(string s)
    {
        int n = s.size();
        vector<int> dp(n+1, 0);
        
        if(s[0] == '0')
            return 0;
        
        if(n == 1)
            return 1;
        
        dp[0] = 1;
        dp[1] = 1;
        for(int i=1;i<n;i++)
        {
            if(s[i] != '0')
                dp[i+1] += dp[i];
            
            if(s[i-1]!='0' && (10*(s[i-1]-'0') + (s[i]-'0') < 27) )
            {
                dp[i+1] += dp[i-1];
            }
        }
        
        return dp[n];
    }
};