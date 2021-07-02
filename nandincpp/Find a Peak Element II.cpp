class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        int n = mat[0].size();
        int start_col = 0, end_col = n-1;
        
        while(start_col <= end_col)
        {
            int mid_col = start_col + (end_col-start_col)/2;
            
            int max_row = 0;
            for(int row=0;row<mat.size();row++)
            {
                if(mat[row][mid_col] >= mat[max_row][mid_col])
                    max_row = row;
            }
            
            bool left_big = (mid_col>start_col) ? mat[max_row][mid_col-1]>mat[max_row][mid_col] : 0;
            bool right_big = (mid_col<end_col) ? mat[max_row][mid_col+1]>mat[max_row][mid_col] : 0;
            
            if(!left_big && !right_big)
                return {max_row, mid_col};
            else if(left_big)
                end_col = mid_col-1;
            else if(right_big)
                start_col = mid_col+1;
        }
        
        return {-1, -1};
    }
};