class Solution {
public:
    int bestTeamScore(vector<int>& score, vector<int>& age) 
    {
        vector<pair<int, int>> v;
        
        for(int i=0;i<age.size();i++)
        {
            v.push_back({age[i], score[i]});
        }
        
        sort(v.rbegin(), v.rend());
        int an = 0, n = age.size();
        int dp[n+1];
        
        for(int i=0;i<age.size();i++)
        {
            int score_now = v[i].second;
            dp[i] = score_now;
            
            for(int j=0;j<i;j++)
            {
                if(score_now <= v[j].second)
                {
                    dp[i] = max(dp[i], dp[j]+score_now);
                }
            }
            
            an = max(an, dp[i]);
        }
        
        return an;
    }
};