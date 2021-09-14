class Solution {
    int dp[10004][1000];
    int helper(int i, int l, int r, vector<int>& a, vector<int>& mul)
    {
        // Base case
        if(i == mul.size())
            return 0;
        
        // Lookup
        if(dp[i][l] != -1)
            return dp[i][l];
        
        // Rec case
        int op1 = helper(i+1, l+1, r, a, mul) + mul[i]*a[l];
        int op2 = helper(i+1, l, r-1, a, mul) + mul[i]*a[r];
        
        return dp[i][l] = max(op1, op2);
    }
public:
    int maximumScore(vector<int>& a, vector<int>& mul) 
    {
        memset(dp, -1, sizeof(dp));
        return helper(0, 0, a.size()-1, a, mul);
    }
};