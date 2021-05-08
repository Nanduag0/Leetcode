class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        if(matrix.size()==0 || matrix[0].size()==0)
        {
            return false;
        }
        int p=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]>=target)
            {
                p=i;
                break;
            }
            else
            {
                p=i;
            }
        }
    
        for(int j=p;j>=0;j--)
        {
            for(int k=matrix[matrix.size()-1].size()-1;k>=0;k--)
            {
                if(matrix[j][k]==target)
                {
                    return true;
                }
            }
        }
        return false;
        
        
    }
};