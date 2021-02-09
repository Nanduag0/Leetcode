class Solution {
    
    int dp[501][501];
    int helper(vector<int> &piles, int i, int j, bool alex)
    {
        // base case
        if(i > j)
            return -1;
        if(i == j)
            return piles[i];
        
        // lookup  
        if(dp[i][j] != -1)
            return -1;
        
        // rec case
        if(alex)
            dp[i][j] = max(piles[i]+helper(piles, i+1, j, !alex), piles[j]+helper(piles, i, j+1, !alex));
        else
            dp[i][j] = min(-piles[i]+helper(piles, i+1, j, !alex), -piles[j]+helper(piles, i, j+1, !alex));
        
        return dp[i][j];
    }
public:
    bool stoneGame(vector<int>& piles)
    {
        int n = piles.size();
        return helper(piles, 0 ,n-1, 1);
    }
};