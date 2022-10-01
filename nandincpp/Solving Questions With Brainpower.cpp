#define ll long long
ll dp[100005];

class Solution {
    
    long long helper(vector<vector<int>>& questions, ll i, ll n)
    {
        if(i >= n)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        ll take = helper(questions, i+1+questions[i][1], n) + questions[i][0];
        ll leave = helper(questions, i+1, n);
        
        return dp[i] = max(take, leave);
    }
    
public:
    long long mostPoints(vector<vector<int>>& questions)
    {
       memset(dp, -1, sizeof(dp));
       ll n = questions.size();
       return helper(questions, 0, n);       
    
    }
};