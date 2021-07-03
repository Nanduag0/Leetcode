class Solution {
    vector<vector<int>> rotate(vector<vector<int>>& mat)
    {
        vector<vector<int>> dup = mat;
        int n = mat.size();
       for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                dup[j][n-i-1] = mat[i][j];
            }
        } 
        return dup;
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        if(mat == target)
            return 1;
        
        int k = 3;
        vector<vector<int>> a = mat;
        while(k--)
        {
            a = rotate(a);
            
            if(a == target)
                return 1;
        }
        
        return 0;
    }
};