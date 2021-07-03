class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        set<int> s(days.begin(), days.end());
        vector<int> dp(366, 0);
        
        for(int i=1;i<=365;i++)
        {
            dp[i] = dp[i-1];
            if(s.find(i) != s.end())
            {
                int op1 = dp[i-1] + costs[0];
                int op2 = dp[max(0, i-7)] + costs[1];
                int op3 = dp[max(0, i-30)] + costs[2];
                
                dp[i] = min({op1, op2, op3});
            }
        }
        
        return dp[365];
    }
};