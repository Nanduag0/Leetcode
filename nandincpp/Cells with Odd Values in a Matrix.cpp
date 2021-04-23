class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices)
    {
        vector<int> row(50, 0), col(50, 0);
        
        for(auto i : indices)
        {
            row[i[0]]++, col[i[1]]++;
        }
        
        int res = 0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]+col[j] & 1)
                    res++;
            }
        }
        
        return res;
    }
};