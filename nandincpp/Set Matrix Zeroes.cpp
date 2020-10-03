class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        const int h = matrix.size();
        const int w = matrix[0].size();
        
        bool row1_zero = false;
        
        for(int j=0;j<w;j++)
        {
            if(matrix[0][j] == 0)
                row1_zero = true;
        }
        
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(matrix[i][j] == 0)
                    matrix[0][j] = 0;
            }
        }
        
        for(int i=1;i<h;i++)
        {
            bool contain_zero = 0;
            for(int j=0;j<w;j++)
            {
                if(matrix[i][j] == 0)
                {
                    contain_zero = 1;
                    break;
                }
            }
            
            for(int j=0;j<w;j++)
            {
                if(contain_zero || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        if(row1_zero)
        {
            for(int j=0;j<w;j++)
                matrix[0][j] = 0;
        }
    }
};