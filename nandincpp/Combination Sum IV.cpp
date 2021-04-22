class Solution {
public:
    int combinationSum4(vector<int>& a, int target) 
    {
        int n = a.size();
        vector<unsigned int> dp(target+1, 0);
        
        dp[0] = 1;
        for(int i=1;i<=target;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i-a[j] >= 0)
                    dp[i] += dp[i-a[j]];
            }
        }
        
        return dp[target];
    }
};