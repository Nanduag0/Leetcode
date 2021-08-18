class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        vector<vector<int>> loc(26);
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
            loc[s[i]-'a'].push_back(i);
        
        for(int i=0;i<26;i++)
        {
            if(loc[i].size() > 1)
            {
                for(int j=0;j<26;j++)
                {
                    int x = upper_bound(loc[j].begin(), loc[j].end(), loc[i][0]) - loc[j].begin();
                    
                    if(x!=loc[j].size() && loc[j][x]<loc[i].back())
                        ans++;
                }
            }
        }
        
        return ans;
    }
};