class Solution {
public:
    int countBattleships(vector<vector<char>>& m) 
    {
        int cnt = 0;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]=='X' && (i==0||m[i-1][j]!='X') && (j==0||m[i][j-1]!='X'))
                    cnt++;
            }
        }
        
        return cnt;
    }
};