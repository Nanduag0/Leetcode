class Solution {
    int check(string& s, char x, int n)
    {
        vector<int> dp(n+1, 0);
        
        
        if(s[0] == x)
            dp[0] = 1 ;
        
        int maxi = dp[0];
        
        for(int i=1;i<n;i++)
        {
            if(s[i] == x)
                dp[i] = 1+dp[i-1];
            
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
    
public:
    bool checkZeroOnes(string s)
    {
        int n = s.size();
        int zero = check(s, '0', n);
        int one = check(s, '1', n);
        
        return one>zero;
    }
};