class Solution {
    
    int dp[21][21];
    int fun(int i, int j, vector<int> &a, bool p1)
    {
        //base
        if(i > j)
            return -1;
        if(i == j)
            return a[i];
        
        //lookup
        if(dp[i][j] != -1)
            return dp[i][j];
        
        //rec
        if(p1)
            dp[i][j] = max(a[i] + fun(i+1, j, a, !p1), a[j] + fun(i, j-1, a, !p1));
        else
             dp[i][j] = min(-a[i] + fun(i+1, j, a, !p1), -a[j] + fun(i, j-1, a, !p1));
       
        return dp[i][j];
    }
public:
    bool PredictTheWinner(vector<int>& a)
    {
        memset(dp, -1, sizeof(dp));
        int n = a.size();
        
        return fun(0, n-1, a, true)>=0 ;
    }
};