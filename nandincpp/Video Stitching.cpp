class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time)
    {
        sort(clips.begin(), clips.end());
        vector<int> dp(time+1, 1000);
        
        dp[0] = 0;
        
        for(int i=0;i<=time;i++)
        {
            for(auto c : clips)
            {
                int start = c[0];
                int end = c[1];
                
                if(i>=start && i<=end)
                {
                    dp[i] = min(dp[i], dp[c[0]]+1);
                }
            }
            
            if(dp[i] >= 1000)
                return -1;
        }
        
        return dp[time];
    }
};