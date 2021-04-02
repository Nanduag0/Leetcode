class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m)
    {
        for(int i=0;i<m.size()-1;i++)
        {
            for(int j=0;j<m[0].size()-1;j++)
            {
                if(m[i][j] != m[i+1][j+1])
                    return 0;
            }
        }
        return 1;
    }
};