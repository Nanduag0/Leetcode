class Solution {
    const int t = 1e9+1;
    
public:
    int lenLongestFibSubseq(vector<int>& a)
    {
        int n = a.size();
        vector<map<int, int>> dp(n);//, vector<int>(t));
        
        unordered_set<int> pos;
        
        for(int i=0;i<n;i++)
        {
            pos.insert(a[i]);
        }
        
        int cnt, ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int prev = a[i] - a[j];
                
                if(prev<a[j] && pos.find(prev)!=pos.end())
                {
                    cnt = ((dp[j][prev]>0) ? dp[j][prev] : 2) + 1;
                    ans = max(ans, cnt);
                    dp[i][a[j]] = cnt;
                }
            }
        }
        return ans;
    }
};