class Solution {
    int dp[71][4901];
    int n, m, target;
    
    int fun(vector<vector<int>>& mat, int r, int s)
    {
        if(s >= 4901)
            return INT_MAX;
        
        if(dp[r][s] != -1)
            return dp[r][s];
        
        if(r == n)
            return abs(s - target);
        
        int ans = INT_MAX;
        for(int c=0;c<m;c++)
        {
            ans = min(ans, fun(mat, r+1, s+mat[r][c]));
        }
        
        return dp[r][s] = ans;
    }
    
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) 
    {
        n = mat.size();
        m = mat[0].size();
        this -> target = target;
        //dp.resize(71, vector<int> (4901, -1));
        memset(dp, -1,sizeof(dp));
        
        return fun(mat, 0, 0);
    }
};