class Solution {
public:
    int maximalSquare(vector<vector<char>>& m) 
    {
    
    int r = m.size();
    int c = m[0].size();
   // int dp[r][c];
    vector<vector<int>> dp(r, vector<int>(c, 0));
    int ans = 0;
    bool flag = 0;

    for(int i=0;i<c;i++)
    {
        if(!flag && m[0][i]=='1')
        {
            flag = 1;
            ans = 1;
        }
        dp[0][i] = m[0][i] - '0';
    }

    for(int j=0;j<r;j++)
    {
        if(!flag && m[j][0]=='1')
        {
            flag = 1;
            ans = 1;
        }
        dp[j][0] = m[j][0] - '0';
    }

    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(m[i][j] == '1')
            {
                dp[i][j] = 1 + min({ dp[i-1][j], dp[i][j-1], dp[i-1][j-1] });
                ans = max(ans, dp[i][j]);
            }

            else
                dp[i][j] = 0;
        }
    }

    //cout<<ans<<endl;
    return ans*ans;   
    }
};