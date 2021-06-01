class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        unordered_set<string> hash;
        for(auto &i : wordDict)
            hash.insert(i);
        
        int n = s.size();
        vector<bool> dp(n+1, 0);
        dp[0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string temp = s.substr(j, i-j);
                    
                    if(hash.find(temp) != hash.end())
                    {
                        dp[i] = 1;
                        break;
                    }
                }
            }
        }
        
        return dp[n];
    }
};