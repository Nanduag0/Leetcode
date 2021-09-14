class Solution {
    int dp[50004];
    
    int fun(int i, vector<int>& stoneValue)
    {
        // Base Case
        if(i >= stoneValue.size())
            return 0;
        
        // Lookup
        if(dp[i] != -1)
            return dp[i];
        
        // Rec Case
        int ans = INT_MIN, total = 0;
        for(int j=0;j<3;j++)
        {
            if(i+j < stoneValue.size())
            {
                total += stoneValue[i+j];
                
                ans = max(ans, total-fun(i+j+1, stoneValue));
            }
        }
        
        return dp[i] = ans;
    }
    
public:
    string stoneGameIII(vector<int>& stoneValue) 
    {
        memset(dp, -1, sizeof(dp));
        int diff = fun(0, stoneValue);
       // cout<<diff<<endl;
        
        if(diff == 0)
            return "Tie";
        
        return (diff>0) ? "Alice" : "Bob";
    }
};