class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target)
    {
        int row = m.size(), col = m[0].size();
        if(row == 0)
            return 0;
        
        int i = row-1, j = 0;
        
        while(i>=0 && j<col)
        {
            if(m[i][j] < target)
                j++;
            else if(m[i][j] > target)
                i--;
            
            else
                return 1;
        }
        
     return 0;
    }
};