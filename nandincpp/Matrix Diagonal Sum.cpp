class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) 
    {
        int ans = 0, n = m.size();
        for(int i=0;i<m.size();i++)
        {
            ans += (m[i][i] + m[i][n-1-i]);
        }
        
        int x = m.size()/2;
        
        if(m.size() & 1)
        {
            ans -= m[x][x];
        }
        return ans;
    }
};