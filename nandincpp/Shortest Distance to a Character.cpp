class Solution {
public:
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.size();
        vector<int> ans(n, 10004);
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == c)
                ans[i] = 0;
        }
        
        for(int i=1;i<n;i++)
        {
            if(s[i] != c)
                ans[i] = 1 + ans[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(s[i] != c)
                ans[i] = min(ans[i], ans[i+1]+1);
        }
        
        return ans;
    }
};