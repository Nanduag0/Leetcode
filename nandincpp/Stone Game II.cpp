class Solution {
    int dp[101][101];
    
    int fun(int i, int M, vector<int>& piles)
    {
        // Base Case
        if(i >= piles.size())
            return 0;
        
        // Lookup
        if(dp[i][M] != -1)
            return dp[i][M];
        
        // Rec Case
        int ans = INT_MIN, total = 0;
        
        for(int j=0;j<2*M;j++)
        {
            if(i+j < piles.size())
            {
                total += piles[i+j];
                ans = max(ans, total-fun(i+j+1, max(M, j+1), piles));
            }
        }
        
        return dp[i][M] = ans;
    }
    
public:
    int stoneGameII(vector<int>& piles) 
    {
        memset(dp, -1, sizeof(dp));
        int sum = 0;
        int diff = fun(0, 1, piles);
        
        for(auto i : piles)
            sum += i;
        
        int alice = (sum + diff)>>1; // divide by 2
        return alice;
    }
};