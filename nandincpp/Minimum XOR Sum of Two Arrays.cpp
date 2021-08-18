class Solution {
    int dp[15][100005];
    
    int helper(vector<int>& a, vector<int>& b, int i, int mask)
    {
        if(i >= a.size())
            return 0;
        
        if(dp[i][mask] != -1)
            return dp[i][mask];
        
        int ans = INT_MAX;
        for(int j=0;j<b.size();j++)
        {
            if(mask & (1<<j))
                continue;
            
            int xorr = a[i] ^ b[j];
            
            ans = min(ans, xorr + helper( a, b, i+1, mask|(1<<j)) );
        }
        
        return dp[i][mask] = ans;
    }
    
public:
    int minimumXORSum(vector<int>& a, vector<int>& b) 
    {
        memset(dp, -1, sizeof(dp));
        return helper(a, b, 0, 0);
    }
};