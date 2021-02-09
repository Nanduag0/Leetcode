class Solution {
    int dp[2001][2001];
    
    int helper(string s, string p, int i, int j)
    {
        //Base case
        if(i==-1 && j==-1)
            return 1;
        if(i == -1)
        {
            for(int x=0;x<=j;x++)
            {
                if(p[x] != '*')
                    return 0;
            }
            return 1;
        }
        if(j == -1)
            return 0;
        
        //Look up
        if(dp[i][j] != -1)
            return dp[i][j];
        
        //Rec case
        if(s[i] == p[j])
            return dp[i][j] = helper(s, p, i-1, j-1);
        else if(p[j] == '?')
            return dp[i][j] = helper(s, p, i-1, j-1);
        else if(p[j] == '*')
        {
            int op = helper(s, p, i-1, j);
            int OP = helper(s, p, i, j-1);
            
            return dp[i][j] = op || OP;
        }
        
        return dp[i][j] = 0;
    }
    
public:
    bool isMatch(string s, string p)
    {
        int i = s.size(), j = p.size();
        memset(dp, -1, sizeof(dp));
        
        if(helper(s,p, i-1, j-1))
            return 1;
        
        return 0;
    }
};