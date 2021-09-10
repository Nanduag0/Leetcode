class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) 
    {
        vector<vector<int>> mat(n, vector<int>(n, 1));
        for(auto i : mines)
        {
            mat[i[0]][i[1]] = 0;
        }
        
        vector<vector<int>> left, right, up, down;
        left = up = down = right = mat;
        
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(mat[i][j] != 0)
                {
                    left[i][j] += left[i][j-1];
                    
                    up[i][j] += up[i-1][j];
                }
                
            }
        }
        
        for(int i=n-2;i>0;i--)
        {
            for(int j=n-2;j>0;j--)
            {
                if(mat[i][j] != 0)
                {
                    right[i][j] += right[i][j+1];
                    
                    down[i][j] += down[i+1][j];
                }
                
            }
        }
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans = max(ans, min({up[i][j], down[i][j], left[i][j], right[i][j]}));
            }
        }
        
        return ans;
    }
};