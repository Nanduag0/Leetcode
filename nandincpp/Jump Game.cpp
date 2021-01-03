class Solution {
public:
    bool canJump(vector<int>& a)
    {
        int last = a.size()-1;
        vector<bool> dp(a.size(), 0);
        
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]+i >= last)
            {
                dp[i] = 1;
                last = i;
            }
        }
        
        return dp[0];
    }
};