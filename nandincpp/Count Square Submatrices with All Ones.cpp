class Solution {
public:
    int countSquares(vector<vector<int>>& m) 
    {
        for(int i=1;i<m.size();i++)
        {
            for(int j=1;j<m[0].size();j++)
            {
                if(m[i][j] == 1)
                    m[i][j] += min({m[i][j-1], m[i-1][j], m[i-1][j-1]});
            }
        }
        
        int ans = 0;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
                ans += m[i][j];
        }
        
        return ans;
    }
};